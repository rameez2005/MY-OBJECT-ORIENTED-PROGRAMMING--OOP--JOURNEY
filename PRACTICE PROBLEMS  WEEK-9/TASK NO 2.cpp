//#include<iostream>
//#include<string>
//#include<cstring>
//using namespace std;
//void generate(int* p1, int* p2, char* line, int size)
//{
//	int count1 = *p1, count2 = *p2;
//	for (int i = 0; i < size; i++)
//	{
//		if (line[i] >= 'A'&&line[i] <= 'Z')
//		{
//			if (line[i] + *p1>'Z')
//			{
//				while (line[i] != 'Z')
//				{
//					count1--; line[i]++;
//				}
//				line[i] -= 26;
//				while (count1 != 0)
//				{
//					line[i]++;
//					count1--;
//				}
//			}
//			else
//				line[i] += *p1;
//		}
//	}for (int i = 0; i < size; i++)
//	{
//		if (line[i] >= 'a'&&line[i] <= 'z')
//		{
//			if (line[i] + *p2>'z')
//			{
//				while (line[i] != 'z')
//				{
//					count2--; line[i]++;
//				}
//				line[i] -= 26;
//				while (count2 != 0)
//				{
//					line[i]++;
//					count2--;
//				}
//			}
//			else
//				line[i] += *p2;
//		}
//	}
//	cout << "ENCRYPTYD CODE IS "<<endl;
//	cout << line << endl;
//}
//void decrypt(int* p1, int* p2, char* line, int size)
//{
//	int count1 = *p1, count2 = *p2;
//	for (int i = 0; i < size; i++)
//	{
//		if (line[i] >= 'A' && line[i] <= 'Z')
//		{
//
//			if (line[i] - *p1 < 'A')
//			{
//				while (line[i] != 'A')
//				{
//					count1--; line[i]--;
//				}
//				line[i] += 26;
//				while (count1 != 0)
//				{
//					line[i]--;
//					count1--;
//				}
//			}
//			else
//				line[i] -= *p1;
//
//		}
//	}for (int i = 0; i < size; i++)
//	{
//		if (line[i] >= 'a' && line[i] <= 'z')
//		{
//
//			if (line[i] - *p2 < 'a')
//			{
//				while (line[i] != 'a')
//				{
//					count2--; line[i]--;
//				}
//				line[i] += 26;
//				while (count2 != 0)
//				{
//					line[i]--;
//					count2--;
//				}
//			}
//			else
//				line[i] -= *p2;
//
//		}
//	}
//	cout << "DECRYPTED CODE IS " << endl;
//	cout << line << endl;
//}
//int main()
//{
//	const int size = 31;
//	int a, b;
//	string roll_num;
//	char line[size];
//	cout << "ENTER THE ROLL NO : ";
//	cin >> roll_num;
//	cin.ignore();
//	a = (roll_num[4] - '0') + (roll_num[5] - '0') + 1;
//	b = (roll_num[6] - '0') + (roll_num[7] - '0') + 1;
//	cout << "ENTER SECRET MESSAGE TO ENCRYPT : "<<endl ;
//	cin.getline(line, size);
//	generate(&a, &b, line, size);
//	decrypt(&a, &b, line, size);
//	system("pause");
//	return 0;
//}