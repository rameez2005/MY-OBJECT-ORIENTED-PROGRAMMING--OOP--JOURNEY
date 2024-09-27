//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class myClass {
//	string firstname;
//	int age;
//public:
//	myClass(string f, int a ) :firstname(f),age(a ){};
//	myClass  operator + (myClass & x) {
//		return myClass(firstname + x.firstname, age + x.age);
//	}
//	void output() {
//
//		cout << " ADDED NAMES : " << firstname << endl;
//		cout << " ADDED AGES : " << age << endl;
//
//	}
//
//};
//
//
//int main() {
//	myClass m1("MUHAMMAD ", 10);
//	myClass m2("RAMEEZ ", 8);
//	myClass m3 = m1 + m2;
//	m3.output();
//	system("pause");
//	return 0;
//}