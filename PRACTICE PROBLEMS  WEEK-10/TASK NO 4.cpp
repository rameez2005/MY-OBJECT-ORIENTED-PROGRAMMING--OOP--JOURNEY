#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;
class IllegalMoveException : public exception {
public:
    const char* what() const noexcept override {
        return "You cannot proceed in that direction.";
    }
};

class MissingObjectException : public exception {
public:
    const char* what() const noexcept override {
        return "The requested object is not available here.";
    }
};

class InvalidCommandException : public exception {
public:
    const char* what() const noexcept override {
        return "Sorry, I cannot understand that command.";
    }
};

class Location {
public:
    string description;
    vector<string> exitDirections;
    vector<Location*> exitLocations;
    vector<string> items;

    Location(const string& desc) : description(desc) {}

    void addExit(const string& direction, Location* exit) {
        exitDirections.push_back(direction);
        exitLocations.push_back(exit);
    }

    void addItem(const string& item) {
        items.push_back(item);
    }
};

class Player {
public:
    Location* currentLocation;
    vector<string> inventory;

    Player(Location* startLoc) : currentLocation(startLoc) {}

    void move(const string& direction) {
        for (size_t i = 0; i < currentLocation->exitDirections.size(); ++i) {
            if (currentLocation->exitDirections[i] == direction) {
                currentLocation = currentLocation->exitLocations[i];
                return;
            }
        }
        throw IllegalMoveException();
    }

    void examine() {
        cout << currentLocation->description << "\n";
        cout << "Exits: ";
        for (const auto& direction : currentLocation->exitDirections) {
            cout << direction << " ";
        }
        cout << "\n";
        cout << "Items: ";
        for (const auto& item : currentLocation->items) {
            cout << item << " ";
        }
        cout << "\n";
    }

    void grab(const string& item) {
        for (size_t i = 0; i < currentLocation->items.size(); ++i) {
            if (currentLocation->items[i] == item) {
                inventory.push_back(item);
                currentLocation->items.erase(currentLocation->items.begin() + i);
                return;
            }
        }
        throw MissingObjectException();
    }

    void listInventory() {
        if (inventory.empty()) {
            cout << "You don't have anything with you.\n";
        }
        else {
            cout << "You are carrying:\n";
            for (const auto& item : inventory) {
                cout << "- " << item << "\n";
            }
        }
    }
};

vector<string> splitString(const string& str) {
    vector<string> words;
    string word = "";
    for (char c : str) {
        if (c == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        }
        else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    return words;
}


int main() {
    // Create locations
    Location* room1 = new Location("You are in a small room with doors to the north and east.");
    Location* room2 = new Location("You are in a dark room with a door to the south.");
    Location* room3 = new Location("You are in a large room with windows to the west and a chest in the corner.");

    // Connect locations
    room1->addExit("north", room2);
    room1->addExit("east", room3);
    room2->addExit("south", room1);

    // Add items to locations
    room3->addItem("key");

    // Create player and start in room1
    Player* player = new Player(room1);

    // Game loop
    while (true) {
        try {
            string command;
            cout << "> ";
            getline(cin, command);

            if (command == "quit") {
                break;
            }

            vector<string> words = splitString(command);
            string commandWord = words.empty() ? "" : words[0];
            string commandArg = words.size() > 1 ? words[1] : "";

            if (commandWord == "move") {
                player->move(commandArg);
            }
            else if (commandWord == "examine") {
                player->examine();
            }
            else if (commandWord == "grab") {
                player->grab(commandArg);
            }
            else if (commandWord == "inventory") {
                player->listInventory();
            }
            else {
                throw InvalidCommandException();
            }
        }
        catch (const IllegalMoveException& e) {
            cout << e.what() << "\n";
        }
        catch (const MissingObjectException& e) {
            cout << e.what() << "\n";
        }
        catch (const InvalidCommandException& e) {
            cout << e.what() << "\n";
        }
    }
    system("pause");
    return 0;
}
