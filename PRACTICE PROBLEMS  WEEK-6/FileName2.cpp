//#include<iostream>
//using namespace std;
//int main() {
//	int height, width, length;
//	cout << "Enter the height of the tree: ";
//	cin >> height;
//	cout << "Enter the width of the tree: ";
//	cin >> width;
//	int x = width;
//	length = 0;
//	for (int i = 0; i < height; i++) {
//		for (int j = 0; j < width - i; j++)
//			cout << " ";
//		for (int j = 0; j < i * 2 - j; j++)
//			cout << "* ";
//		cout << endl;
//	}
//	width = width - 2;
//
//	for (int i = 0; i < height; i++) {
//		for (int j = 0; j < width - i; j++)
//			cout << " ";
//		for (int j = 0; j < i * 2 - j + 4; j++)
//			cout << "* ";
//		cout << endl;
//	}
//	width = width - 2;
//
//	for (int i = 0; i < height; i++) {
//		for (int j = 0; j < width - i; j++)
//			cout << " ";
//		for (int j = 0; j < i * 2 - j + 8; j++)
//			cout << "* ";
//		cout << endl;
//	}
//	width = width - 2;
//
//	for (int i = 0; i < height; i++) {
//		for (int j = 0; j < width - i; j++)
//			cout << " ";
//		for (int j = 0; j < i * 2 - j + 12; j++)
//			cout << "* ";
//		cout << endl;
//	}
//	width = width - 2;
//
//	for (int i = 0; i < height; i++) {
//		for (int j = 0; j < width - i; j++)
//			cout << " ";
//		for (int j = 0; j < i * 2 - j + 16; j++)
//			cout << "* ";
//		cout << endl;
//	}
//	width = width - 2;
//	for (int i = 0; i < height; i++) {
//		for (int j = 0; j < width-i; j++)
//			cout << " ";
//		for (int j = 0; j < i * 2 - j + 20; j++)
//			cout << "* ";
//		cout << endl;
//	}
//	for (int i = 0; i < height; i++) {
//		for (int j = 1; j <= x-height; j++)
//			cout << " ";
//		for (int j = 0; j <= height; j++)
//			cout << "* ";
//		cout << endl;
//	}
//	
//	system("pause");
//	return 0;
//}