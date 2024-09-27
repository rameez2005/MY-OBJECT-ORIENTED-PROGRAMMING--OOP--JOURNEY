//#include<iostream>
//using namespace std;
//void merge(int  ar1[] , int ar2[], int s1 , int s2) {
//	int size = s1 + s2;
//	int *  arr = new int[size];
//	for (int i = 0; i < s1; ++i) {
//		*(arr + i) = *(ar1 + i);
//    }
//	for (int i = s1, j = 0; i < size; ++i, ++j) {
//		*(arr + i) = *(ar2 + j);
//	}
//	cout << " YOUR ARRAY HAS BEEN MERGED \n";
//	for (int i = 0; i < size; ++i) {
//		 cout << *(arr + i)<< "  " ;
//	}
//	cout << endl;
//}
//
//int main() {
//	cout << "enter the size of the  1st  array\n";
//	int s1;
//	cin >> s1;
//	int * ar1 = new int[s1];
//	cout << "enter the size of the  2nd  array\n";
//	int s2;
//	cin >> s2;
//	int * ar2 = new int[s2];
//	cout << "enter the elements of first array \n";
//	for (int i = 0; i < s1; ++i) {
//		cin >> *(ar1 + i);
//	}
//	cout << "enter the elements of second array \n";
//	for (int i = 0; i < s2; ++i) {
//		cin >> *(ar2 + i);
//	}
//
//	merge(ar1, ar2, s1, s2);
//
//	system("pause");
//	return 0;
//}