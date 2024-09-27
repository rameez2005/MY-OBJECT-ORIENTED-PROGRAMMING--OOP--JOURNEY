//#include<iostream>
//#include <string>
//using namespace std;
//
//int strlen_x(char *str)
//{
//	int i = 0;
//	while (*(str + i) != '\0')
//	{
//		i++;
//	}return i;
//}
//int strcmp_x(const char* str, const char* str2)
//{
//	int count1 = 0, count2 = 0, n = 0;
//	while (*(str + n) != '\0' && *(str2 + n) != '\0')
//	{
//		count1 += *(str + n);
//		count2 += *(str2 + n);
//		n++;
//	}
//	if (*(str + n) != '\0')
//		return 1;
//	else if (*(str2 + n) != '\0')
//		return -1;
//	else if (*(str + n) == '\0' && *(str2 + n) == '\0' && count1 > count2)
//		return 1;
//	else if (*(str + n) == '\0' && *(str2 + n) == '\0' && count2 > count1)
//		return -1;
//	else
//		return 0;
//}
//int strncmp_x(const char* str, const char* str2, int n)
//{
//	int count1 = 0, count2 = 0;
//	while (*(str + n) != '\0'&&*(str2 + n) != '\0')
//	{
//		count1 += *(str + n);
//		count2 += *(str2 + n);
//		n++;
//	}
//	if (*(str + n) != '\0')
//		return 1;
//	else if (*(str2 + n) != '\0')
//		return -1;
//	else if (*(str + n) == '\0' && *(str2 + n) == '\0' && count1 > count2)
//		return 1;
//	else if (*(str + n) == '\0' && *(str2 + n) == '\0' && count2 > count1)
//		return -1;
//	else
//		return 0;
//}
//char* strcpy_x(char* str, const char* str2)
//{
//	int i = 0;
//	while (*(str2 + i) != '\0')
//	{
//		*(str + i) = *(str2 + i);
//		i++;
//	}return str;
//}char* strncpy_x(char* str, const char* str2, int n)
//{
//	int i = 0;
//	while (i<n)
//	{
//		*(str + i) = *(str2 + i);
//		i++;
//	}
//	*(str + i) = '\0';
//	return str;
//}
//
//char* strcat_x(char* str, const char* str2) {
//	char* x = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	while (*str2 != '\0')
//	{
//		*str = *str2;
//		str++;
//		str2++;
//	}
//	*str = '\0';
//	return x;
//}
//
//char *strncat_x(char* str, const char* str2, int n) {
//	char* x = str;
//	while (*str) {
//		str++;
//	}
//	while (n > 0 && *str2)
//	{
//		*str++ = *str2++; n--;
//	}
//	*str = '\0';
//
//	return x;
//}
//int main()
//{
//	const int size = 35;
//	char str1[size] = "AHSAN IS A GOOD BOY";
//	char str2[size] = "RAMEEZ LOVES CODING";
//	cout << "LENGTH OF FIRST STRING IS :  " << strlen_x(str1) << endl;
//	cout << "COMPARING STRINGS : " << strcmp_x(str1, str2) << endl;
//	cout << "COMPARING SUBSTRINGS : " << strncmp_x(str1, str2, 5) << endl;
//	cout << "THE COPIED STRING IS : "<< endl;
//	cout << strcpy_x(str1, str2) << endl;
//	cout << "THE COPIED SUB-STRING IS : " << endl;
//	cout << (strncpy_x(str1, str2, 7)) << endl;
//	cout << "ENTER 1st STRING FOR CONCATINATION"<<endl;
//	cin.getline(str1, 30);
//	cout << "ENTER THE STRING YOU WANNA CONCATINATE IT WITH :" << endl;
//	cin.getline(str2, 30);
//	cout << "THE CONCATINATED STRING IS :"<< endl;
//	cout << strcat_x(str1, str2) << endl;
//	cout << "ENTER 1st STRING FOR PART CONCATINATION" << endl;
//	cin.getline(str1, 30);
//	cout << "ENTER THE STRING YOU WANNA CONCATINATE IT WITH :" << endl;
//	cin.getline(str2, 30);
//	cout << "CONCATINATED STRING IS : " << endl;
//	cout << strncat_x(str1, str2, 3) << endl;
//	system("pause");
//	return 0;
//}