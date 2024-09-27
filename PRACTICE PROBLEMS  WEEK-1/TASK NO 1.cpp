//#include<iostream>
//using namespace std;
//
//
//void input(int arr[][100] , int row , int col) {
//	cout << "ENTER THE ELEMENTS OF THE ARRAY \n";
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			cin >> arr[i][j];
//		}
//	}
//}
//
//void display(int arr[][100], int row ,int col) {
//	cout << "THESE ARE THE ELEMENTS OF THE ARRAY \n";
//	for (int i = 0; i < row; i++) {
//		cout << endl;
//		for (int j = 0; j < col; j++) {
//			cout<<" "<< arr[i][j];
//		}
//	}
//	cout << endl;
//}
//
//
//
//void sum(int arr[][100], int row, int col) {
//	int sum = 0;
//	cout << "THE SUM OF THE ELEMENTS OF THE ARRAY : ";
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			sum += arr[i][j];
//		}
//	}
//	cout << sum << endl;
//}
//
//
//void rowsum(int arr[][100], int row, int col) {
//	
//	
//	for (int i = 0; i < row; i++) {
//		int sum = 0;
//		for (int j = 0; j < col; j++) {
//			sum += arr[i][j];
//		}
//		cout << "THE SUM OF THE ELEMENTS OF "<<i+1<< " ROW IS : "<< sum <<endl ;
//	}
//
//}
//
//
//void colsum(int arr[][100], int row, int col) {
//
//
//	for (int i = 0; i < col; i++) {
//		int sum = 0;
//		for (int j = 0; j < row; j++) {
//			sum += arr[j][i];
//		}
//		cout << "THE SUM OF THE ELEMENTS OF " << i + 1 << " COLUMN IS : " << sum << endl;
//	}
//
//}
//
//void transpose(int arr[][100], int row, int col) {
//	cout << "THE TRANSPOSE OF THE MATRIX IS \n";
//	for (int i = 0; i < col ; i++) {
//		for (int j = 0; j < row; j++) {
//			cout <<" "<< arr[j][i];
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//
//int main() {
//	int arr[100][100];
//	cout << "ENTER THE ROW AND COULUMN OF THE MATRIX \n";
//	int row, col;
//	cin >> row;
//	cin >> col;
//	bool flag = 1;
//	while (flag == 1) {
//		cout << " ENTER 1 TO INPUT ELEMENTS \n ENTER 2 TO DISPLAY ELEMENTS \n ENTER 3 TO SUM ELEMENTS  \n ENTER 4 TO COULUMN WISE SUM ELEMENTS  \n ENTER 5 TO ROW WISE SUM ELEMENTS   \n ENTER 6 TO TRANSPOSE  ELEMENTS\n ENTER 0 TO EXIT \n  ";
//		int choice;
//		cin >> choice;
//		switch (choice) {
//
//		case 1:
//		{
//			system("cls");
//			input(arr, row, col);
//			break;
//		}
//		case 2:
//		{
//			system("cls");
//			display(arr, row, col);
//			break;
//		}
//		case 3:
//		{
//			system("cls");
//			sum(arr, row, col);
//			break;
//		}
//		case 5:
//		{
//			system("cls");
//			rowsum(arr, row, col);
//			break;
//		}
//		case 4:
//		{
//			system("cls");
//			colsum(arr, row, col);
//			break;
//		}
//		case 6:
//		{
//			system("cls");
//			transpose(arr, row, col);
//			break;
//		}
//		case 0 :
//		{
//			flag = 0;
//			break;
//		}
//
//		}
//
//	}
//
//	system("pause");
//	return 0;
//
//}