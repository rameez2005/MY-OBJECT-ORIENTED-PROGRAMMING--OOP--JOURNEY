//#include <iostream>
//using namespace std;
//
//bool checkPrime(int number, int divisor = 2) {
//    if (number <= 2)
//        return (number == 2);
//    if (number % divisor == 0)
//        return false;
//    if (divisor * divisor > number)
//        return true;
//    return checkPrime(number, divisor + 1);
//}
//
//template<int Start, int End>
//void printPrimeNumbers() {
//    for (int i = Start; i <= End; ++i) {
//        if (checkPrime(i))
//            cout << i << " ";
//    }
//}
//
//int main() {
//    cout << "Prime numbers between 1 and 20 are: ";
//    printPrimeNumbers<1, 20>();
//    cout << endl;
//    system("pause");
//    return 0;
//}
