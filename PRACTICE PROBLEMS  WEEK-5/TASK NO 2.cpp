//#include<iostream>
//#include<string>
//using namespace std;
//class student {
//public:
//	student(string stdid = " ", string stdname = " " , string dept = " ");
//	void input();
//	void display();	
//	~student();
//private:
//	string stdid;
//	string stdname;
//	string dept;
//};
//int main() {
//	student s1("23f-0636", "RAMEEZ");
//	student s2("23f-0785", "ALI" , "COMPUTER SCIENCE");
//	student s3(" ", "USMAN", "COMPUTER SCIENCE");
//	student s4 ;
//	s1.display();
//	s2.display();
//	s3.display();
//	cout << endl << endl;
//	cout << "ENTER STUDENTS DATA \n";
//	s1.input();
//	s2.input();
//	s3.input();
//	cout << "YOUR DATA IS : \n";
//	cout << endl << endl;
//	
//		s1.display();
//		s2.display();
//		s3.display();
//		s4 = s3;
//		s4.display();
//	
//	student * s5 = new student("23f-0634", "Rizwan" ,"cs");
//	student * s6 = new student("23f-0611", "akbar", "ai");
//	student * s7 = new student("23f-0098", "Rohan", "se");
//	cout << endl << endl;
//	cout << " YOUR DYNAMICALLY ALLOCATED STUDEENTS ARE \n";
//	
//		s5->display();
//		s6->display();
//		s7->display();
//	
//		s7->~student();
//	system("pause");
//	return 0;
//}
//student::student(string stdid, string stdname, string dept) {
//	this->stdid = stdid;
//	this->stdname = stdname;
//	this->dept = dept;
//}
//void student::input() {
//	cout <<"ENTER ID"<< endl;
//	cin >> this->stdid;
//	cout << "ENTER NAME" << endl;
//	cin >> this->stdname;
//	cout << "ENTER DEPARTMENT" << endl;
//	cin >> this->dept;
//}
//void student::display() {
//	if(this->stdid != " ")
//	cout << " ID : " << this->stdid << endl;
//	if (this->stdname != " ")
//	cout << " NAME : " << this->stdname << endl;
//	if (this->dept != " ")
//	cout << " DEPARTMENT : " << this->dept << endl;
//}
//
//student :: ~student(){
//	cout << "DESTRUCTOR CALLED SUCCESFULLY\n";
//}
//
