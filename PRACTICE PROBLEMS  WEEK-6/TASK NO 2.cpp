//#include<iostream>
//#include<windows.h>
//using namespace std;
//
//class jagged {
//
//private :
//	int row;
//	int col;
//	int * arr ;
//
//public :
//	jagged();
//	jagged * input();
//	void display(jagged j);
//	~jagged( ) {
//		delete[] arr;
//		arr = NULL;
//	};
//
//};
//
//jagged::jagged() : row( ), col( ) {
//
//}
//jagged * jagged::input() {
//	
//	cout << "ENTER THE NO OF ROWS FOR 2D ARRAY "  << endl;
//	cin >> this->row;
//	this->arr = new int[row];
//	for (int i = 0; i < row; ++i) {
//		cout << "ENTER THE COLUMNS FOR ROW " << i + 1 << endl;
//		cin >> arr[i];
//	}
//	
//	return this;
//}
//
//void jagged::display(jagged  j) {
//	cout << "\n------------------------------------------------ OUTPUT ---------------------------------------------------\n\n" ;
//	for (int i = 0; i < row; ++i) {
//		for (int x = 0; x < arr[i]; ++x) {
//			cout << x + 1 << " | ";
//		}
//		cout << "\n--------------------------------------------------------\n";
//	}
//
//}
//
//int main() {
//	jagged J ;
//    J.input();
//	J.display(J);
//	system("pause");
//	return 0;
//
//}
