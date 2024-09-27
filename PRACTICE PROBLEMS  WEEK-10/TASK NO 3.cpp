//#include <iostream>
//#include <string>
//using namespace std;
//
//class InvalidInput {};
//class DivisionByZero {};
//
//int greatestCommonDivisor(int a, int b) {
//	while (b != 0) {
//		int temp = b;
//		b = a % b;
//		a = temp;
//	}
//	return a;
//}
//
//void getFractionFromInput(int& numerator, int& denominator) {
//	char slash;
//	cin >> numerator >> slash >> denominator;
//	if (slash != '/')
//	{
//		throw InvalidInput();
//	}
//}
//
//void addFractions(int num1, int denom1, int num2, int denom2) {
//
//	int numerator, denominator;
//	if (denom1 != denom2)
//	{
//		numerator = (num1 * denom2) + (num2 * denom1);
//		denominator = denom1 * denom2;
//	}
//	else {
//		numerator = num1 + num2;
//		denominator = denom1;
//	}
//	if (numerator == 0)
//		cout << "Result : " << numerator << endl;
//	else
//		cout << "Result : " << numerator << "/" << denominator << endl;
//}
//
//void subtractFractions(int num1, int denom1, int num2, int denom2) {
//
//	int numerator, denominator;
//	if (denom1 != denom2)
//	{
//		numerator = (num1 * denom2) - (num2 * denom1);
//		denominator = denom1 * denom2;
//	}
//	else {
//		numerator = num1 - num2;
//		denominator = denom1;
//	}
//	if (numerator == 0)
//		cout << "Result : " << numerator << endl;
//	else
//		cout << "Result : " << numerator << "/" << denominator << endl;
//}
//
//void multiplyFractions(int num1, int denom1, int num2, int denom2) {
//	int numerator = num1 * num2;
//	int denominator = denom1 * denom2;
//
//	int divisor = greatestCommonDivisor(numerator, denominator);
//	numerator /= divisor;
//	denominator /= divisor;
//	if (numerator == 0)
//		cout << "Result : " << numerator << endl;
//	else
//		cout << "Result : " << numerator << "/" << denominator << endl;
//}
//
//void divideFractions(int num1, int denom1, int num2, int denom2) {
//
//	string errorMessage = "Error : Divison by zero";
//	try {
//		if (num2 == 0)
//		{
//			throw DivisionByZero();
//		}
//		int numerator = num1 * denom2;
//		int denominator = denom1 * num2;
//
//		int divisor = greatestCommonDivisor(numerator, denominator);
//		numerator /= divisor;
//		denominator /= divisor;
//		cout << "Result : " << numerator << "/" << denominator << endl;
//	}
//	catch (DivisionByZero) {
//		cout << errorMessage << endl;
//	}
//}
//
//bool isValidFraction(int num1, int denom1, int num2, int denom2) {
//
//	string errorMessage = "Error : Divison by zero";
//	try {
//		if (denom1 == 0 || denom2 == 0)
//		{
//			throw DivisionByZero();
//		}
//	}
//	catch (DivisionByZero) {
//		cout << errorMessage << endl;
//		return false;
//	}
//	return true;
//}
//
//void displayMenu() {
//
//	char choice;
//	int numerator1, denominator1, numerator2, denominator2;
//	string invalidChoiceError = "Invalid choice has been entered.";
//	try {
//		cout << "Welcome to the Fraction Arithmetic Calculator!" << endl;
//		cout << "Please enter fractions in the format a/b." << endl;
//		cout << "Select an operation:" << endl;
//		cout << "1. Addition (+)" << endl;
//		cout << "2. Subtraction (-)" << endl;
//		cout << "3. Multiplication (*)" << endl;
//		cout << "4. Division (/)" << endl;
//		cout << "Choose an operation (+, -, *, /) : ";
//		cin >> choice;
//		if (choice != '+' && choice != '-' && choice != '*' && choice != '/')
//		{
//			throw invalidChoiceError;
//		}
//		cout << "Enter two fractions as (a/b) form : " << endl;
//		cout << "Fraction 1 : " << endl;
//		getFractionFromInput(numerator1, denominator1);
//		cout << "Fraction 2 : " << endl;
//		getFractionFromInput(numerator2, denominator2);
//		if (!isValidFraction(numerator1, denominator1, numerator2, denominator2))
//		{
//			return;
//		}
//		switch (choice) {
//		case '+':
//			addFractions(numerator1, denominator1, numerator2, denominator2);
//			break;
//		case '-':
//			subtractFractions(numerator1, denominator1, numerator2, denominator2);
//			break;
//		case '*':
//			multiplyFractions(numerator1, denominator1, numerator2, denominator2);
//			break;
//		case '/':
//			divideFractions(numerator1, denominator1, numerator2, denominator2);
//			break;
//		}
//	}
//	catch (string) {
//		cout << invalidChoiceError << endl;
//	}
//	catch (InvalidInput) {
//		cout << "Invalid fraction format. Please enter fractions in the format a/b." << endl;
//	}
//	catch (double) {
//
//	}
//}
//
//int main()
//{
//	displayMenu();
//	system("pause");
//	return 0;
//}
