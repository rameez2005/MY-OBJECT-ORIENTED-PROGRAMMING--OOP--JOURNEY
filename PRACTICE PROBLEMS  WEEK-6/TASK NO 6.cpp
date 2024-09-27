//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//int main() {
//    char arr[13][6];
//
//    cout <<"\t\t"<< setw(1.8) << "A" << setw(10) << "B" << setw(10) << "C" << setw(10) << "D" << setw(10) << "E" << setw(10) << "F" << endl;
//
//    // Fill the array with '*'
//    for (int i = 0; i < 13; i++) {
//        for (int j = 0; j < 6; j++) {
//            arr[i][j] = '*';
//        }
//    }
//
//    // Print the array
//    for (int i = 0; i < 13; i++) {
//        cout << "Row " << setw(2) << i << " ";
//        for (int j = 0; j < 6; j++) {
//            cout << setw(10) << arr[i][j]; // Output the element followed by a space
//        }
//        cout << endl; // Move to the next line after printing each row
//    }
//
//    // system("pause"); // Remove this line for portability
//    return 0;
//}