//#include<iostream>
//#include<string>
//
//using namespace std;
//int main() {
//	string x;
//
//	cout << " ENTER THE LINE \n";
//	getline(cin, x);
//	int size = x.length();
//	for (int i = 0; i < 10; i++)
//	{
//		
//		for (int j = 0; j < size+4; j++)
//		{
//			if(j==0||j==size+3)
//			{
//				cout << "|";
//			}
//			else if (i == 0 || i == 9) {
//				cout << "-";
//			}
//			else if (i == 5 && j == 2) {
//				cout << x;
//				j += size-1;
//			}
//			else
//				cout << " " ;
//
//		}
//		cout << endl;
//
//	}
//
//	system("pause");
//	return 0;
//}