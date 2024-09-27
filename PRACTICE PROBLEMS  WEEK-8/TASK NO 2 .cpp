//#include<iostream>
//using namespace std;
//class furniture  {
//protected :
//    string size;
//public :
//    furniture(string s="") :size(s) {};
//    virtual void printdescription() = 0;
//};
//
//class bed : public furniture {
//public :
//    bed(string s) : furniture(s) {};
//    void printdescription() {
//        cout << "THE BED IS : " << this->size << endl;
//    }
//};
//
//class chair : public furniture {
//protected :
//    int height;
//public:
//    chair(string s="", int h=0) : furniture(s), height(h) {};
//    void printdescription() {
//        cout << "THE CHAIR IS : " << this->size << " \nAND HAVE HEIGHT : "<< height << endl;
//    }
//};
//
//
//class personalized_chair : public chair {
//protected:
//    string name;
//public:
//    personalized_chair(string s="", int h=0, string n="") : chair(s, h), name(n) {};
//    void printdescription() {
//        cout << "THE CHAIR IS : " << this->size << " \nAND HAVE HEIGHT : " << height <<  " \nWITH THE NAME : " << name<< endl;
//    }
//};
//
//int main() {
//    const int size = 5;
//    furniture** inventory = new furniture * [size];
//    inventory[0] = new bed("SMALL");
//    inventory[1] = new chair("MEDIUM", 3.0);
//    inventory[2] = new bed("LARGE");
//    inventory[3] = new chair("MEDIUM");
//    inventory[4] = new personalized_chair("SMALL", 2.0, "Ali");
//
//    for (int i = 0; i < size; i++) {
//        inventory[i]->printdescription();
//    }
//
//    for (int i = 0; i < size; ++i) {
//        delete inventory[i];
//    }
//    delete[] inventory;
//    system("pause");
//    return 0;
//}
//
//
