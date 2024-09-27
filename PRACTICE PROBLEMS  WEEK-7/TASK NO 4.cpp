//#include<iostream>
//#include<string>
//#include<windows.h>
//using namespace std;
//
//class person {
//protected:
//	string name;
//	int age;
//	string cnic;
//	string contact;
//public:
//	person(string n = " ", int a = 0, string c = " ", string co = " ") :name(n), age(a), cnic(c), contact(co) {};
//	person(person & obj) {
//		this->name = obj.name;
//		this->age = obj.age;
//		this->cnic = obj.cnic;
//		this->contact = obj.contact;
//	}
//	// Getter functions
//	string getName() const { return name; }
//	int getAge() const { return age; }
//	string getCNIC() const { return cnic; }
//	string getContact() const { return contact; }
//	~person() {};
//};
//
//class teacher : public person {
//protected:
//	string emp_id;
//	string course;
//	double salary;
//public:
//	teacher(string na = " ", int ag = 0, string cn = " ", string con = " ", string eid = " ", string cour = " ", double s = 0) :person(na, ag, cn, con), emp_id(eid), course(cour), salary(s) {};
//	teacher(teacher& ob): person(ob) {
//		this->emp_id = ob.emp_id;
//		this->course = ob.course;
//		this->salary = ob.salary;
//
//	}
//	void tinput() {
//		cout << "ENTER NAME OF TEACHER \n" ;
//		getline(cin, this->name);
//		cout << "ENTER AGE OF TEACHER \n";
//		cin >> this->age;
//		cin.ignore();
//		cout << "ENTER CNIC OF TEACHER \n";
//		getline(cin, this->cnic);
//		cout << "ENTER CONTACT NO OF TEACHER \n";
//		getline(cin, this->contact);
//		cout << "ENTER EMPLOYEE ID OF TEACHER \n";
//		getline(cin, this->emp_id);
//		cout << "ENTER COURSE OF TEACHER \n";
//		getline(cin, this->course);
//		cout << "ENTER SALARY OF TEACHER \n";
//		cin >> this->salary;
//		cin.ignore();
//		system("cls");
//	}
//	void tdisplay() {
//		cout << "Name: " << this->name << endl;
//		cout << "Age: " << this->age << endl;
//		cout << "CNIC: " << this->cnic << endl;
//		cout << "Contact Number: " << this->contact << endl;
//		cout << "Employee ID: " << this->emp_id << endl;
//		cout << "Course: " << this->course << endl;
//		cout << "Salary: " << this->salary << endl;
//	}
//	// Getter functions
//	string getEmpId() const { return emp_id; }
//	string getCourse() const { return course; }
//	double getSalary() const { return salary; }
//	void modify() {
//		cout << "MODIFYING TEACHER RECORD" << endl;
//		cout << "Enter new details:" << endl;
//		tinput(); 
//	}
//	~teacher() {};
//
//};
//
//
//class student : public person {
//protected :
//	string roll;
//	float cgpa;
//	string degree;
//
//public:
//	student(string nam = " ", int agg = 0, string cni = " ", string cont = " ", string r=" ", float cg=0, string d=" ") :person(nam, agg, cni, cont), roll(r), cgpa(cg), degree(d) {};
//	student(student& o) : person(o) {
//		this->roll = o.roll;
//		this->cgpa = o.cgpa;
//		this->degree = o.degree;
//
//	}
//	void sinput() {
//		cout << "ENTER NAME OF STUDENT \n";
//		getline(cin, this->name);
//		cout << "ENTER AGE OF STUDENT \n";
//		cin >> this->age;
//		cin.ignore();
//		cout << "ENTER CNIC OF STUDENT \n";
//		getline(cin, this->cnic);
//		cout << "ENTER CONTACT NO OF STUDENT \n";
//		getline(cin, this->contact);
//		cout << "ENTER ROLL NO OF STUDENT \n";
//		getline(cin, this->roll);
//		cout << "ENTER CGPA OF STUDENT \n";
//		cin >> this->cgpa;
//		cin.ignore();
//		cout << "ENTER DEGREE OF STUDENT \n";
//		getline(cin, this->degree);	
//		system("cls");
//	}
//	void sdisplay() {
//		cout << "Name: " << this->name << endl;
//		cout << "Age: " << this->age << endl;
//		cout << "CNIC: " << this->cnic << endl;
//		cout << "Contact Number: " << this->contact << endl;
//		cout << "Roll Number: " << this->roll << endl;
//		cout << "CGPA: " << this->cgpa << endl;
//		cout << "Degree: " << this->degree << endl;
//	}
//	string getRoll() const { return roll; }
//	float getCGPA() const { return cgpa; }
//	string getDegree() const { return degree; }
//
//	void modify() {
//		cout << "MODIFYING STUDENT RECORD" << endl;
//		cout << "Enter new details:" << endl;
//		sinput(); 
//	}
//	~student() {};
//};
//
//
//struct login {
//	string id;
//	string password;
//};
//
//void check(string id, string pas) {
//	if (id == "admin") {
//		if (pas == "hacked") {
//			cout << " SUCCESS !! WE ARE GETTING YOU LOGED IN \n ";
//			Sleep(1000);
//			system("cls");
//		}
//		else
//		{
//			cout << " INCORRECT PASSWORD !! \n ";
//			exit (0) ;
//		
//		}
//	}
//	else {
//		cout << " USERNAME NOT FOUND  !! \n ";
//		exit (0);
//	}
//
//}
//
//
//
//// Function to search students by NAME
//
//void searchStudentByName(student students[], int numStudents, const string& name) {
//	system("cls");
//
//	cout << "Students with name " << name << ":" << endl;
//	for (int i = 0; i < numStudents; ++i) {
//		if (students[i].getName() == name) {
//			students[i].sdisplay();
//		}
//	}
//	bool x = true;
//	cout << " \n\n\nPRESS ESCAPE TO EXIT \n\n\n";
//	while (x) {
//		Sleep(1000);
//		if (GetAsyncKeyState(VK_ESCAPE)) {
//			x = false;
//		}
//	}
//	system("cls");
//}
//
//// Function to search students by roll number
//void searchStudentByRoll(student students[], int numStudents, const string & roll) {
//	system("cls");
//
//	cout << "Students with Roll no : " << roll  << endl;
//	for (int i = 0; i < numStudents; ++i) {
//		if (students[i].getRoll() == roll) {			
//				students[i].sdisplay();			
//		}
//	}
//	bool x = true;
//	cout << " \n\n\nPRESS ESCAPE TO EXIT \n\n\n";
//	while (x) {
//		Sleep(1000);
//		if (GetAsyncKeyState(VK_ESCAPE)) {
//			x = false;
//		}
//	}
//	system("cls");
//
//}
//
//
//// Function to search students by age
//void searchStudentsByAge(student students[], int numStudents, int age) {
//	system("cls");
//
//	cout << "Students with age " << age << ":" << endl;
//	for (int i = 0; i < numStudents; ++i) {
//		if (students[i].getAge() == age) {
//			students[i].sdisplay();
//		}	
//	}
//	bool x = true;
//	cout << " \n\n\nPRESS ESCAPE TO EXIT \n\n\n";
//	while (x) {
//		Sleep(1000);
//		if (GetAsyncKeyState(VK_ESCAPE)) {
//			x = false;
//		}
//	}
//	system("cls");
//}
//
//// Function to search students by CGPA greater than a given value
//void searchStudentsByCGPAGreaterThan(student students[], int numStudents, float minCGPA) {
//	system("cls");
//
//	cout << "Students with CGPA greater than " << minCGPA << ":" << endl;
//	for (int i = 0; i < numStudents; ++i) {
//		if (students[i].getCGPA() > minCGPA) {
//			students[i].sdisplay();
//		}
//	}
//	bool x = true;
//	cout << " \n\n\nPRESS ESCAPE TO EXIT \n\n\n";
//	while (x) {
//		Sleep(1000);
//		if (GetAsyncKeyState(VK_ESCAPE)) {
//			x = false;
//		}
//	}
//	system("cls");
//}
//
//// Function to search students by CGPA less than a given value
//void searchStudentsByCGPALessThan(student students[], int numStudents, float maxCGPA) {
//	cout << "Students with CGPA less than " << maxCGPA << ":" << endl;
//	for (int i = 0; i < numStudents; ++i) {
//		if (students[i].getCGPA() < maxCGPA) {
//			students[i].sdisplay();
//		}
//	}
//	bool x = true;
//	cout << " \n\n\nPRESS ESCAPE TO EXIT \n\n\n";
//	while (x) {
//		Sleep(1000);
//		if (GetAsyncKeyState(VK_ESCAPE)) {
//			x = false;
//		}
//	}
//	system("cls");
//}
//
//
//
//// Function to search teachers by name
//void searchTeacherByName(teacher teachers[], int numTeachers, const string& name) {
//	system("cls");
//
//	cout << "Teachers with name " << name << ":" << endl;
//	for (int i = 0; i < numTeachers; ++i) {
//		if (teachers[i].getName() == name) {
//			teachers[i].tdisplay();
//		}
//	}
//	bool x = true;
//	cout << " \n\n\nPRESS ESCAPE TO EXIT \n\n\n";
//	while (x) {
//		Sleep(1000);
//		if (GetAsyncKeyState(VK_ESCAPE)) {
//			x = false;
//		}
//	}
//	system("cls");
//}
//
//// Function to search teachers by age
//void searchTeacherByAge(teacher teachers[], int numTeachers, int age) {
//	system("cls");
//
//	cout << "Teachers with age " << age << ":" << endl;
//	for (int i = 0; i < numTeachers; ++i) {
//		if (teachers[i].getAge() == age) {
//			teachers[i].tdisplay();
//		}
//	}
//	bool x = true;
//	cout << " \n\n\nPRESS ESCAPE TO EXIT \n\n\n";
//	while (x) {
//		Sleep(1000);
//		if (GetAsyncKeyState(VK_ESCAPE)) {
//			x = false;
//		}
//	}
//	system("cls");
//}
//
//// Function to search teachers by employee ID
//void searchTeacherByEmpId(teacher teachers[], int numTeachers, const string& empId) {
//	system("cls");
//
//	cout << "Teacher with employee ID " << empId << ":" << endl;
//	for (int i = 0; i < numTeachers; ++i) {
//		if (teachers[i].getEmpId() == empId) {
//			bool x = true;
//			cout << " \n\n\nPRESS ESCAPE TO EXIT \n\n\n";
//			while (x) {
//				teachers[i].tdisplay();
//				Sleep(1000);
//				if (GetAsyncKeyState(VK_ESCAPE)) {
//					x = false;
//				}
//			}
//			system("cls");
//			return;
//		}
//	}
//	cout << "Teacher with employee ID " << empId << " not found." << endl;
//	
//}
//
//
//
//
//
//
//
//
//
//int main() {
//	const int MAX_STUDENTS = 100; 
//	const int MAX_TEACHERS = 50;
//	login l;
//	cout << "ENTER ID : ";
//	cin >> l.id;
//	cout << "ENTER PASSWORD : ";
//	cin >> l.password;
//	check(l.id, l.password);
//	bool flag = true;
//	teacher teachers[MAX_TEACHERS];
//	student students[MAX_STUDENTS];
//	int choice;
//	int numStudents = 0 , numTeachers=0;
//	while (flag) {
//		cout << "Admin Menu:" << endl;
//		cout << "1. Create Teacher" << endl;
//		cout << "2. Create Student" << endl;
//		cout << "3. Modify Teacher" << endl;
//		cout << "4. Modify Student" << endl;
//		cout << "5. Search Student by Name" << endl;
//		cout << "6. Search Student by Age" << endl;
//		cout << "7. Search Students by CGPA greater than" << endl;
//		cout << "8. Search Students by CGPA less than" << endl;
//		cout << "9. Search Teacher by Name" << endl;
//		cout << "10. Search Teacher by Age" << endl;
//		cout << "11. Search Teacher by Employee ID" << endl;
//		cout << "0. Exit" << endl;
//		cout << "Enter your choice: ";
//		cin >> choice;
//		cin.ignore();
//
//		switch (choice) {
//		case 1: {
//			if (numTeachers < MAX_TEACHERS) {
//				teacher t;
//				t.tinput();
//				teachers[numTeachers++] = t;
//				cout << "Teacher created successfully." << endl;
//			}
//			else {
//				cout << "Maximum number of teachers reached." << endl;
//			}
//			break;
//		}
//		case 2: {
//			if (numStudents < MAX_STUDENTS) {
//				student s;
//				s.sinput();
//				students[numStudents++] = s;
//				cout << "Student created successfully." << endl;
//			}
//			else {
//				cout << "Maximum number of students reached." << endl;
//			}
//			break;
//		}
//		case 3: {
//			string empId;
//			cout << "Enter teacher employee ID to modify: ";
//			getline(cin, empId);
//			for (int i = 0; i < numTeachers; ++i) {
//				if (teachers[i].getEmpId() == empId) {
//					teachers[i].modify();
//					cout << "Teacher record modified successfully." << endl;
//					break;
//				}
//			}
//			break;
//		}
//		case 4: {
//			string roll;
//			cout << "Enter student roll number to modify: ";
//			getline(cin, roll);
//			for (int i = 0; i < numStudents; ++i) {
//				if (students[i].getRoll() == roll) {
//					students[i].modify();
//					cout << "Student record modified successfully." << endl;
//					break;
//				}
//			}
//			break;
//		}
//		case 5: {
//			string name;
//			cout << "Enter student name to search: ";
//			getline(cin, name);
//			searchStudentByName(students, numStudents, name);
//			break;
//		}
//		case 6: {
//			int age;
//			cout << "Enter student age to search: ";
//			cin >> age;
//			searchStudentsByAge(students, numStudents, age);
//			break;
//		}
//		case 7: {
//			float minCGPA;
//			cout << "Enter minimum CGPA to search: ";
//			cin >> minCGPA;
//			searchStudentsByCGPAGreaterThan(students, numStudents, minCGPA);
//			break;
//		}
//		case 8: {
//			float maxCGPA;
//			cout << "Enter maximum CGPA to search: ";
//			cin >> maxCGPA;
//			searchStudentsByCGPALessThan(students, numStudents, maxCGPA);
//			break;
//		}
//		case 9: {
//			string name;
//			cout << "Enter teacher name to search: ";
//			getline(cin, name);
//			searchTeacherByName(teachers, numTeachers, name);
//			break;
//		}
//		case 10: {
//			int age;
//			cout << "Enter teacher age to search: ";
//			cin >> age;
//			searchTeacherByAge(teachers, numTeachers, age);
//			break;
//		}
//		case 11: {
//			string empId;
//			cout << "Enter teacher employee ID to search: ";
//			getline(cin, empId);
//			searchTeacherByEmpId(teachers, numTeachers, empId);
//			break;
//		}
//		case 0: {
//			cout << "Exiting..." << endl;
//			flag = false;
//			break;
//		}
//			
//		default:
//			cout << "Invalid choice. Please enter a valid option." << endl;
//		}
//
//	}
//
//	system("pause");
//	return 0;
//}