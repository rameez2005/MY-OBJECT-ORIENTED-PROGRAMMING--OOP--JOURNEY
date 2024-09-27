//#include <iostream>
//#include <string>

//using namespace std;
//
//class InvalidDay {};
//class InvalidMonth {};
//
//bool isLeapYear(int yr) {
//    return (yr % 4 == 0 && yr % 100 != 0) || (yr % 400 == 0);
//}
//
//int getMaxDays(int mm, int yr) {
//    if (mm < 1 || mm > 12) {
//        throw InvalidMonth();
//    }
//    static const int daysInMonth[] = { 31, 28 + isLeapYear(yr), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//    return daysInMonth[mm - 1];
//}
//
//string getMonthName(int mm) {
//    static const string monthNames[] = { "January", "February", "March", "April", "May", "June",
//                                        "July", "August", "September", "October", "November", "December" };
//    if (mm < 1 || mm > 12) {
//        throw InvalidMonth();
//    }
//    return monthNames[mm - 1];
//}
//
//void printDateOfBirth(int mm, int dd, int yr) {
//    string monthName = getMonthName(mm);
//    cout << "Date of Birth: " << monthName << " " << dd << ", " << yr << endl;
//}
//
//int main() {
//    int month, day, year;
//    char dash1, dash2;
//
//    cout << "Enter a date (MM-DD-YYYY): ";
//    cin >> month >> dash1 >> day >> dash2 >> year;
//
//    try {
//        int maxDays = getMaxDays(month, year);
//        if (day < 1 || day > maxDays) {
//            throw InvalidDay();
//        }
//
//        printDateOfBirth(month, day, year);
//    }
//    catch (InvalidMonth) {
//        cout << "Error: Invalid month. Please enter a valid month between (1-12)." << endl;
//    }
//    catch (InvalidDay) {
//        cout << "Error: Invalid day. Please enter a valid day for the given month." << endl;
//    }
//
//    system("pause");
//    return 0;
//}
