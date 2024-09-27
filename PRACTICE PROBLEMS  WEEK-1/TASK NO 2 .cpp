//#include<iostream>
//#include<ctime>
//using namespace std;
//
//int main() {
//	srand(time(0));
//	cout << " WELCOME TO THE LOTTERY\n ";
//	int loterry[5];
//	int user[5];
//	for (int i = 0; i < 5; i++) {
//		loterry[i] = 0 + (rand() % 9 - 0);
//	}
//	cout << " enter the elements \n";
//	for (int i = 0; i < 5; i++) {
//		cin >> user[i] ;
//	}
//	int match = 0;
//	for (int i = 0; i < 5; i++) {
//					if (user[i] == loterry[i]) {
//				match++;			
//		}
//	}
//	cout << " THE LOTERRY ARRAY IS :  \n";
//	for (int i = 0; i < 5; i++) {
//		cout<<" " << loterry[i];
//	}
//	cout << endl;
//	cout << " THE USER ARRAY IS :  \n";
//	for (int i = 0; i < 5; i++) {
//		cout << " " << user[i];
//	}
//	cout << endl;
//	if (match >= 3) {
//		cout << "CONGRATULATIONS !!!  YOU WON THE GRAND PRIZE  \n ";
//	}
//	system("pause");
//	return 0;
//
//}