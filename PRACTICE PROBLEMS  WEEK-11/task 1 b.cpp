//#include<iostream>
//#include<string>
//using namespace std;
//class Student {
//	string name;
//	string roll_no;
//	int age;
//	double marks[5];
//public:
//	Student() {}
//	Student(string name, string roll_no, int age, double *marks) {
//		this->name = name;
//		this->roll_no = roll_no;
//		this->age = age;
//		for (int i = 0; i < 5; i++) {
//			this->marks[i] = marks[i];
//		}
//	}
//	void input() {
//		cout << "Enter Name: ";
//		cin >> name;
//		cout << "Enter roll no: ";
//		cin >> roll_no;
//		cout << "Enter age: ";
//		cin >> age;
//		cout << "Enter marks of 5 subjects \n";
//		for (int i = 0; i < 5; i++)
//		{
//			cout << "Marks " << i + 1 << ":";
//			cin >> marks[i];
//		}
//	};
//	friend class friendclass;
//};
//
//class friendclass {
//public:
//	void disp_student(Student obj) {
//		double total = 0;
//		for (int i = 0; i < 5; i++)
//		{
//			total += obj.marks[i];
//		}
//		double percentage = (total / 500) * 100;
//		if (percentage > 70) {
//			cout << endl << endl;
//			cout << "Data of student\n";
//			cout << "Name: " << obj.name << endl;
//			cout << "Roll no: " << obj.roll_no << endl;
//			cout << "Age: " << obj.age << endl;
//			cout << "Marks of 5 subjects\n";
//			for (int i = 0; i < 5; i++)
//			{
//				cout << obj.marks[i] << "  ";
//			}
//			cout << endl;
//		}
//		else cout << "Pecentageis less than 70\n";
//	}
//};
//int main()
//{
//	friendclass obj;
//	cout << "ENTER THE NUMBER OF STUDENTS YOU WANT IN CLASS :";
//	int n; 
//	cin >> n;
//	Student *S = new Student[n];
//	for (int i = 0; i < n; i++)
//	{
//		S[i].input();
//	}
//	for (int i = 0; i < n; i++)
//	{
//		obj.disp_student(S[i]);
//	}
//	system("pause");
//	return 0;
//}