//#include<iostream>
//#include<windows.h>
//using namespace std;
//
//class student {
//private:
//	string name;
//	 string cnic;
//	 char gender;
//	double cgpa;
//public:
//	string getname() { return name; }
//	string getcnic() { return cnic; }
//	char getgender() { return gender; }
//	double getcgpa() { return cgpa; }
//	void setname( string x) {  name = x; }
//	void setcnic(string y) { cnic = y; }
//	void setgender(char w) {  gender = w; }
//	void setcgpa(double z) {  cgpa = z ; }
//};
//
//class section {
//private:
//	static const int MAX_STUDENTS = 40;
//	student  students[MAX_STUDENTS];
//	int numstudents;
//	string sectionname;
//	string classteacher;
//
//public:
//	
//	void editsection(string s, string t);
//	void addstudent();
//	void updatestudent();
//	void printstudent();
//	void setnumstudents(int s) {
//		if (s < 40)
//			numstudents = s;
//		else
//			cout << "MAXIMUM 39 STUDENTS CAN BE PLACED IN A SECTION \n";
//	}
//	string getsecname() {
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
//		students[numstudents - 1].setname(n);
//		cout << "ENTER CNIC OF STUDENT\n";
//		string c;
//		cin >> c;
//		students[numstudents - 1].setcnic(c);
//		cout << "ENTER GENDER OF STUDENT\n";
//		char g;
//		cin >> g;
//		students[numstudents - 1].setgender(g);
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
//			students[numstudents - 1].setname(nn);
//			cout << "ENTER  NEW CNIC OF STUDENT\n";
//			string cc;
//			cin >> cc;
//			students[numstudents - 1].setcnic(cc);
//			cout << "ENTER  NEW GENDER OF STUDENT\n";
//			char gg;
//			cin >> gg;
//			students[numstudents - 1].setgender(gg);
//			cout << "ENTER NEW CGPA OF STUDENT\n";
//			double xx;
//			cin >> xx;
//			students[numstudents - 1].setcgpa(xx);
//
//		}
//	}
//	cout << "DATA SUCCESFULLY UPDATED \n";
//}
//
//void section::printstudent() {
//	for (int i = 0; i < numstudents; ++i) {		
//			cout << " NAME : "<< students[i].getname()<<endl;
//			cout << " CNIC : "<< students[i].getcnic() << endl;
//			cout << " GENDER : " << students[i].getgender() << endl;
//			cout << " CGPA : " << students[i].getcgpa() << endl << endl<<endl;		
//	}	
//}
//
//void  section::setstudentdata() {
//	for (int i = 0; i < numstudents; ++i) {
//		
//			cout << "ENTER  NAME OF STUDENT " <<  i+1 <<endl;
//			string nnnn;
//			cin >> nnnn;
//			students[i].setname(nnnn);
//			cout << "ENTER  CNIC OF STUDENT" << i + 1 << endl;
//			string cccc;
//			cin >> cccc;
//			students[i].setcnic(cccc);
//			cout << "ENTER GENDER OF STUDENT " << i + 1 << endl;
//			char gggg;
//			cin >> gggg;
//			students[i].setgender(gggg);
//			cout << "ENTER CGPA OF STUDENT " << i + 1 << endl;
//			double xxxx;
//			cin >> xxxx;
//			students[i].setcgpa(xxxx);
//			system("cls");
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
//		switch(ch) {
//		case 0:
//			t = false;
//			break;
//		case 1 :
//			cout << "ENTER THE NAME OF SECTION YOU WANNA EDIT "  << endl;			
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
//			cout << "STUDENT HAS BEEN SUCCESSFULLY ADDED \n";
//			Sleep(500);
//			system("cls");
//			break;
//		case 3:
//			cout << "ENTER THE NAME OF SECTION YOU WANNA UPDATE STUDENT OFF ... " << endl;
//			cin >> s;
//			for (int i = 0; i < x; ++i) {
//				if (s == sections[i].getsecname()) {
//					sections[i].updatestudent();
//				}
//			}
//			Sleep(500);
//			system("cls");
//			break;
//		case 4:
//			cout << "ENTER THE NAME OF SECTION YOU WANNA PRINT STUDENTS OFF ... " << endl;
//			cin >> s;
//			for (int i = 0; i < x; ++i) {
//				if (s == sections[i].getsecname()) {
//					bool flag = true;
//					while (flag) {
//						cout<< "press ESCAPE to exit this list \n";
//						sections[i].printstudent();
//						if (GetAsyncKeyState(VK_ESCAPE)) {
//							flag = false;
//						}
//						Sleep(1000);
//						system("cls");
//					}
//					
//				}
//			}
//			system("cls");
//			break;
//		}
//	}
//	delete[]sections;
//	system("pause");
//	return 0;
//}