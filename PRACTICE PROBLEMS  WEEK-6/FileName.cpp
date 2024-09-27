//#include <iostream>
//using namespace std;
//
//class Jagged {
//private:
//    int row;
//    int* column;
//    int** arr;
//
//public:
//    Jagged();
//    ~Jagged();
//    Jagged Input();
//    void Display();
//};
//
//Jagged::Jagged() : row(0), column(nullptr), arr(nullptr) {}
//
//Jagged::~Jagged() {
//    if (arr != nullptr) {
//        for (int i = 0; i < row; ++i) {
//            delete[] arr[i];
//        }
//        delete[] arr;
//    }
//    delete[] column;
//}
//
//Jagged Jagged::Input() {
//    Jagged j;
//
//    cout << "Enter the number of rows for 2D jagged array: ";
//    cin >> j.row;
//
//    j.column = new int[j.row];
//    j.arr = new int* [j.row];
//
//    for (int i = 0; i < j.row; ++i) {
//        cout << "Enter the number of columns for row " << i + 1 << ": ";
//        cin >> j.column[i];
//
//        j.arr[i] = new int[j.column[i]];
//
//        cout << "Enter the elements for row " << i + 1 << ":" << endl;
//        for (int jIndex = 0; jIndex < j.column[i]; ++jIndex) {
//            cin >> j.arr[i][jIndex];
//        }
//    }
//
//    return j;
//}
//
//void Jagged::Display() {
//    cout << "Displaying jagged array:" << endl;
//    for (int i = 0; i < row; ++i) {
//        cout << "Row " << i + 1 << ": ";
//        for (int j = 0; j < column[i]; ++j) {
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//    Jagged j1;
//    j1 = j1.Input();
//    j1.Display();
//
//    return 0;
//}
