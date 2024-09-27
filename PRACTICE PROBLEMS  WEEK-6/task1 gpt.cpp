//#include<iostream>
//#include<windows.h>
//using namespace std;
//
//class student {
//private:
//	string name;
//	const string cnic; // Modified: made constant
//	const char gender; // Modified: made constant
//	double cgpa;
//public:
//	string getname() { return name; }
//	string getcnic() const { return cnic; } // Modified: marked as const
//	char getgender() const { return gender; } // Modified: marked as const
//	double getcgpa() const { return cgpa; }
//	void setname(string x) { name = x; }
//	// Since cnic and gender are constant, they can only be set through the constructor
//	student(string c, char g) : cnic(c), gender(g) {}
//	void setcgpa(double z) { cgpa = z; }
//};
//
//class section {
//private:
//	static const int MAX_STUDENTS = 40;
//	student students[MAX_STUDENTS];
//	int numstudents;
//	string sectionname;
//	string classteacher;
//
//public:
//
//	void editsection(string s, string t);
//	void addstudent();
//	void updatestudent();
//	void printstudent() const; // Modified: marked as const
//	void setnumstudents(int s) {
//		if (s < 40)
//			numstudents = s;
//		else
//			cout << "MAXIMUM 39 STUDENTS CAN BE PLACED IN A SECTION \n";
//	}
//	string getsecname() const { // Modified: marked as const
//		return sectionname;
//	}
//	void setstudentdata();
//
//};
//
//
//void section::editsection(string s, string t) {
//	sectionname = s;
//	classteacher = t;
//}
//
//void section::addstudent() {
//	if (numstudents < MAX_STUDENTS) {
//		numstudents++;
//		cout << "ENTER NAME OF STUDENT\n";
//		string n;
//		cin >> n;
//		cout << "ENTER CNIC OF STUDENT\n";
//		string c;
//		cin >> c;
//		cout << "ENTER GENDER OF STUDENT\n";
//		char g;
//		cin >> g;
//		students[numstudents - 1] = student(c, g); // Initialize the student with provided CNIC and gender
//		cout << "ENTER CGPA OF STUDENT\n";
//		double x;
//		cin >> x;
//		students[numstudents - 1].setcgpa(x);
//	}
//	else {
//		cout << "SECTION IS FULL \n";
//
//	}
//
//}
//
//void section::updatestudent() {
//	cout << "ENTER THE CNIC OF STUDENT YOU WANNA UPDATE \n";
//	string kkk;
//	cin >> kkk;
//	for (int i = 0; i < numstudents; ++i) {
//		if (students[i].getcnic() == kkk) {
//			cout << "ENTER NEW NAME OF STUDENT\n";
//			string nn;
//			cin >> nn;
//			students[i].setname(nn); // Modified: set name directly on the student object found
//			cout << "ENTER NEW CGPA OF STUDENT\n";
//			double xx;
//			cin >> xx;
//			students[i].setcgpa(xx); // Modified: set CGPA directly on the student object found
//		}
//	}
//	cout << "DATA SUCCESFULLY UPDATED \n";
//}
//
//void section::printstudent() const {
//	for (int i = 0; i < numstudents; ++i) {
//		cout << " NAME : " << students[i].getname() << endl;
//		cout << " CNIC : " << students[i].getcnic() << endl;
//		cout << " GENDER : " << students[i].getgender() << endl;
//		cout << " CGPA : " << students[i].getcgpa() << endl << endl << endl;
//	}
//}
//
//void  section::setstudentdata() {
//	for (int i = 0; i < numstudents; ++i) {
//
//		cout << "ENTER  NAME OF STUDENT " << i + 1 << endl;
//		string nnnn;
//		cin >> nnnn;
//		cout << "ENTER  CNIC OF STUDENT" << i + 1 << endl;
//		string cccc;
//		cin >> cccc;
//		cout << "ENTER GENDER OF STUDENT " << i + 1 << endl;
//		char gggg;
//		cin >> gggg;
//		cout << "ENTER CGPA OF STUDENT " << i + 1 << endl;
//		double xxxx;
//		cin >> xxxx;
//		students[i] = student(cccc, gggg); // Initialize the student with provided CNIC and gender
//		students[i].setname(nnnn);
//		system("cls");
//	}
//
//};
//
//int main() {
//	cout << "HOW MANY SECTIONS  DO YOU WANNA CREATE \n ";
//	int x;
//	cin >> x;
//	section* sections;
//	sections = new section[x];
//	for (int i = 0; i < x; ++i) {
//		cout << "ENTER THE NAME OF SECTION " << i + 1 << endl;
//		string s;
//		cin >> s;
//		cout << "ENTER THE NAME OF THE TEACHER OF SECTION " << i + 1 << endl;
//		string t;
//		cin >> t;
//		sections[i].editsection(s, t);
//		cout << "ENTER THE NUMBER OF STUDENTS YOU WANNA PLACE IN SECTION " << i + 1 << endl;
//		int n = 0;
//		cin >> n;
//		sections[i].setnumstudents(n);
//		sections[i].setstudentdata();
//		system("cls");
//	}
//	bool t = true;
//	while (t) {
//		string s = "";
//		cout << " 1 : EDIT SECTION \n 2 : ADD STUDENT \n 3 : UPDATE STUDENT \n 4 : PRINT LIST \n 0 : EXIT \n";
//		int ch;
//		cin >> ch;
//		switch (ch) {
//		case 0:
//			t = false;
//			break;
//		case 1:
//			cout << "ENTER THE NAME OF SECTION YOU WANNA EDIT " << endl;
//			cin >> s;
//			for (int i = 0; i < x; ++i) {
//				if (s == sections[i].getsecname()) {
//					cout << "ENTER THE  NEW NAME OF SECTION  " << endl;
//					string qq;
//					cin >> qq;
//					cout << "ENTER THE  NEW NAME OF THE TEACHER OF SECTION  " << endl;
//					string T;
//					cin >> T;
//
//					sections[i].editsection(qq, T);
//
//					break;
//
//				}
//			}
//			cout << "SECTION HAS BEEN SUCCESSFULLY EDITED \n";
//			Sleep(500);
//			system("cls");
//			break;
//		case 2:
//			cout << "ENTER THE NAME OF SECTION YOU WANNA ADD STUDENT IN ... " << endl;
//			cin >> s;
//			for (int i = 0; i < x; ++i) {
//				if (s == sections[i].getsecname()) {
//					sections[i].addstudent();
//				}
//			}
//		}
//	}
//}