//#include <iostream>
//#include <string>
//using namespace std;
//
//template<class T, int N>
//class Student {
//private:
//    T studentName;
//    T studentRollNumber;
//    T studentCourses[N];
//    char studentSection;
//
//public:
//    Student(T name, T roll, T courses[N], char sec) : studentName(name), studentRollNumber(roll), studentSection(sec) {
//        for (int i = 0; i < N; ++i) {
//            studentCourses[i] = courses[i];
//        }
//    }
//
//    void set_name(const T& name) { studentName = name; }
//    void set_roll(const T& roll) { studentRollNumber = roll; }
//    void set_courses(const T courses[N]) {
//        for (int i = 0; i < N; ++i)
//        {
//            studentCourses[i] = courses[i];
//        }
//    }
//    void set_section(char sec) { studentSection = sec; }
//
//    void display() const {
//        cout << "Name : " << studentName << endl;
//        cout << "Roll Number : " << studentRollNumber << endl;
//        cout << "Courses : ";
//        for (int i = 0; i < N; ++i) {
//            cout << studentCourses[i] << ", ";
//        }
//        cout << endl;
//        cout << "Section : " << studentSection << endl;
//    }
//};
//
//int main() {
//    const int numCourses = 3;
//    string courses[numCourses] = { "OOP", "MULTI", "A.P" };
//
//    Student<string, numCourses> student1("RAMEEZ MALIK", "23F-0636", courses, 'B');
//    student1.display();
//
//    cout << "\nAfter change : \n" << endl;
//    student1.set_name("ALI AFZAL");
//    student1.set_roll("23F-0594");
//    string newCourses[numCourses] = { "I.S", "IDEOLOGY" };
//    student1.set_courses(newCourses);
//    student1.set_section('F');
//    student1.display();
//
//    system("pause");
//    return 0;
//}
