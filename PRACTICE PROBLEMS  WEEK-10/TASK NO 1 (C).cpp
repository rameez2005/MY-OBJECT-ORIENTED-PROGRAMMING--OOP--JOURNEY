//#include <iostream>
//#include <string>
//using namespace std;
//
//template<typename T>
//class BaseballPlayer {
//private:
//    string playerName;
//    T homeRuns;
//public:
//    BaseballPlayer(string name = " ", T hr = 0) : playerName(name), homeRuns(hr) {}
//
//    void setName(string name) {
//        playerName = name;
//    }
//
//    void setHomeRuns(T hr) {
//        homeRuns = hr;
//    }
//
//    string getName() const {
//        return playerName;
//    }
//
//    T getHomeRuns() const {
//        return homeRuns;
//    }
//};
//
//template<class T>
//class BaseballTeam {
//private:
//    BaseballPlayer<T>* players;
//    T teamCapacity;
//    T teamSize;
//public:
//    BaseballTeam(T capacity) : teamCapacity(capacity), teamSize(0) {
//        players = new BaseballPlayer<T>[teamCapacity];
//    }
//
//    ~BaseballTeam() {
//        delete[] players;
//    }
//
//    void addPlayer(const BaseballPlayer<T>& player) {
//        if (teamSize < teamCapacity)
//        {
//            players[teamSize++] = player;
//        }
//        else
//        {
//            cout << "The team is full. Cannot add more players." << endl;
//        }
//    }
//
//    void display() const {
//        cout << "Players in the Baseball Team : " << endl;
//        for (int i = 0; i < teamSize; ++i)
//        {
//            cout << players[i].getName() << " \t Home Runs : " << players[i].getHomeRuns() << endl;
//        }
//    }
//
//    void updatePlayer(string name, T newHomeRuns) {
//        for (int i = 0; i < teamSize; ++i)
//        {
//            if (players[i].getName() == name)
//            {
//                players[i].setHomeRuns(newHomeRuns);
//                cout << "Player information updated successfully." << endl;
//                return;
//            }
//        }
//        cout << "Player not found." << endl;
//    }
//};
//
//int main() {
//    int numPlayers = 0, hr = 0, numUpdates = 0;
//    string playerName;
//    cout << "Enter the number of players in the team : ";
//    cin >> numPlayers;
//    BaseballTeam<int> team(numPlayers);
//    for (int i = 0; i < numPlayers; i++)
//    {
//        cout << "Enter the player's name : ";
//        cin >> playerName;
//        cout << "Enter the number of home runs : ";
//        cin >> hr;
//        team.addPlayer(BaseballPlayer<int>(playerName, hr));
//    }
//    team.display();
//    cout << "Enter the number of players to update : ";
//    cin >> numUpdates;
//    for (int i = 0; i < numUpdates; i++)
//    {
//        cout << "Enter the player's name : ";
//        cin >> playerName;
//        cout << "Enter the new number of home runs : ";
//        cin >> hr;
//        team.updatePlayer(playerName, hr);
//    }
//    team.display();
//
//    system("pause");
//    return 0;
//}
