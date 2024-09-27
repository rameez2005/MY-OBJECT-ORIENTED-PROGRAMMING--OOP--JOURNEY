//#include<iostream>
//using namespace std;
//class date {
//public :
//	date(int d , int m , int y );
//	void m_d_y();
//	void md_y();
//	void dmy();
//private :
//	int day; 
//	int month; 
//	int year;
//};
//int main() {
//	int d, m ,y;
//	cout << "ENTER THE DATE MONTH AND YEAR \n";
//	cin >> d >> m >> y;
//	date calender(d,m,y);
//	calender.m_d_y();
//	calender.md_y();
//	calender.dmy();
//	system("pause");
//	return 0;
//}
//date::date(int d, int m, int y) {
//	
//	month = m;
//	year = y;
//
//	if (d > 0 && d <= 31) {
//		day = d;
//	}
//	else {
//		cout << "DATE IS INVALID\n";
//		exit(0);
//	}
//	if (m > 0 && m <= 12) {
//		month = m;
//	}
//	else {
//		cout << "MONTH IS INVALID\n";
//		exit(0);
//	}
//	if (y > 0 ) {
//		year = y;
//	}
//	else {
//		cout << "YEAR IS INVALID\n";
//		exit(0);
//	}
//}
//void date :: m_d_y() {
//	cout << month << "\\" << day << "\\" << year << endl;
// }
//void date::md_y () {
//	cout << month << " " << day << "," << year << endl;
//}
//void date::dmy () {
//	cout << day << " " << month << " " << year << endl;
//}
