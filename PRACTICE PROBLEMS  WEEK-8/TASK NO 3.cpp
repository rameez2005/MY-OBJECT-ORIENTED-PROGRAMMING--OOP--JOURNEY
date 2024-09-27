//#include<iostream>
//using namespace std;
//
//
//class media {
//
//
//protected :
//    char * title;
//public:
//    virtual void display() = 0;
//
//    media(char* t) :title(t) {};
//
//};
//
//
//
//class book : public media {
//protected :
//    char* authorname;
//    char* isbn;
//public :
//    book(char* t, char* a, char* i) : media(t), authorname(a), isbn(i) {};
//    void display()  {
//        cout << "Book Title: " << title << endl;
//        cout << "Author: " << authorname << endl;
//        cout << "ISBN: " << isbn << endl;
//    }
//
//};
//
//
//
//class magzine : public media {
//protected:
//    char* monthname;
//    int year;
//public:
//    magzine(char* t, char* m, int y) : media(t), monthname(m), year(y) {};
//    void display() {
//        cout << "Magazine Title: " << title << endl;
//        cout << "Month: " << monthname << ", Year: " << year << endl;
//    }
//
//};
//
//
//
//
//class cd : public media {
//protected:
//    int cap;
//public:
//    cd(char* t, int y) : media(t),cap(y) {};
//    void display()  {
//        cout << "CD Title: " << title << endl;
//        cout << "Capacity: " << cap << " MB" << endl;
//    }
//   
//};
//
//
//
//class shelf {
//protected :
//    media ** m;
//    int cur_size;
//    int max_size;
//public :
//    shelf(int max) :max_size(max), cur_size(0) { 
//        m = new  media * [max_size];
//
//    }
//    void insert(media* item) {
//        if (cur_size < max_size) {
//            m[cur_size++] = item;
//        }
//        else {
//            cout << "Shelf is full!" << endl;
//        }
//    }
//
//    void displayContents() {
//        cout << "Contents of the shelf:" << endl;
//        for (int i = 0; i < cur_size; ++i) {
//            m[i]->display();
//        }
//    }
//
//    ~shelf() {
//        for (int i = 0; i < cur_size; ++i) {
//            delete m[i];
//        }
//        delete[] m;
//    }
//};
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//int main() {
//    int numItems;
//    cout << "How many media items do you want to create? ";
//    cin >> numItems;
//
//    shelf s(numItems); 
//
//    int choice;
//    while (true) {
//        cout << "Enter 1 to create a Book\n2 for a Magazine,\n3 for a CD,\n4 to display shelf contents: ";
//        cin >> choice;
//
//        if (choice == 1) {
//            char* title = new char[100];
//            char* author = new char[100];
//            char* isbn = new char[100];
//            cout << "Enter book title: ";
//            cin >> title;
//            cout << "Enter author name: ";
//            cin >> author;
//            cout << "Enter ISBN: ";
//            cin >> isbn;
//            s.insert(new  book(title, author, isbn));
//        }
//        else if (choice == 2) {
//            char* title = new char[100];
//            char* month = new char[100];
//            int year;
//            cout << "Enter magazine title: ";
//            cin >> title;
//            cout << "Enter month name: ";
//            cin >> month;
//            cout << "Enter year: ";
//            cin >> year;
//            s.insert(new magzine(title, month, year));
//        }
//        else if (choice == 3) {
//            char* title = new char[100];
//            int capacity;
//            cout << "Enter CD title: ";
//            cin >> title;
//            cout << "Enter capacity: ";
//            cin >> capacity;
//            s.insert(new cd(title, capacity));
//        }
//        else if (choice == 4) {
//            s.displayContents();
//        }
//        else {
//            cout << "Invalid choice! Please try again." << endl;
//        }
//    }
//
//    
//
//
//  
//    system("pause");
//    return 0;
//}
//
//
