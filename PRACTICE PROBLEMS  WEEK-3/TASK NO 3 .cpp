//#include<iostream>
//using namespace std;
//int sum(int **  arr, int row, int col) {
//	int tsum = 0;
//	for (int i = 0; i < row; ++i) {
//		int rsum = 0;
//		for (int j = 0; j < col; ++j) {
//			tsum += *(*(arr + i) + j);
//			rsum += *(*(arr + i) + j);
//		}
//		cout << "the SUM OF " << i + 1 << "ROW  IS " << rsum << endl ; 
//	}
//	return tsum;
//}
//
//int main() {
//	 int row = 2;
//	 int col = 2;
//	 int ** arr;
//	 arr = new int * [row];
//	 for (int i = 0; i < row; ++i) {
//		 *(arr + i) = new int[col];
//	 }
//	 cout << "ENTER THE ELEMENTS OF THE ARRAY \n";
//
//	 for (int i = 0; i < row; ++i) {
//		 for (int j = 0; j < col; ++j) {
//			 cin >> *(*(arr + i) + j);
//		 }
//	 }
//
//	 cout << "THE SUM OF ALL ELEMENTS OF THE ARRAY IS :"<< sum(arr,row,col)<<endl;
//	
//	system("pause");
//	return 0;
//}