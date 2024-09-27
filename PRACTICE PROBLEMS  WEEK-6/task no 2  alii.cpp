//#include<iostream>
//#include<iomanip>
//using namespace std;
//class Jagged
//{
//private:
//    int rows;
//    int column;
//    int* arr;
//public:
//    Jagged* input()
//    {
//        cout << "Enter the row size: ";
//        cin >> rows;
//        arr = new int[rows];
//        for (int i = 0; i < rows; i++)
//        {
//            cout << "Enter the number of columns for row" << " " << i + 1 << ":";
//            cin >> *(arr + i);
//        }
//        return this;
//    }
//    void Display( Jagged j)
//    {
//        cout << endl;
//        cout << "---------------------------------------------------------------------------------------------------------------------" << endl << endl;
//        cout << setw(50) << "Output" << endl;
//
//        for (int i = 0; i < rows; i++)
//        {
//            for (int j = 0; j < arr[i]; j++)
//            {
//                cout << j + 1 << " " << "|";
//            }
//            cout << endl;
//            cout << "----------------------------------------------------------------------------------" << endl;
//        }
//    }
//};
//int main()
//{
//    Jagged obj;
//    obj.input();
//    obj.Display(obj);
//    return 0;
//}