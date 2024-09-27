//#include <ctime>
//#include<thread>
//#include <iostream>
//#include <cstdlib>
//#include<chrono>
//
//using namespace std;
//void Tortise_Move(int* Tortise_Position)
//{
//	int Position = (rand() % 50) + 1;
//	if (Position <= 25)
//	{
//		*Tortise_Position += 4;
//	}
//	else if (Position > 25 && Position <= 35)
//	{
//		*Tortise_Position -= 5;
//	}
//	else
//	{
//		*Tortise_Position += 1;
//	}
//	if (*Tortise_Position < 1)
//	{
//		*Tortise_Position = 1;
//	}
//}
//void Hare_Move(int* Hare_Position)
//{
//	int move = (rand() % 50) + 1;
//	if (move >= 20 && move < 30)
//	{
//		*Hare_Position += 11;
//	}
//	else if (move >= 30 && move < 40)
//	{
//		*Hare_Position -= 9;
//	}
//	else if (move >= 40 && move <= 50)
//	{
//		*Hare_Position += 1;
//	}
//
//	else
//	{
//		move;
//	}
//	if (*Hare_Position < 1)
//	{
//		*Hare_Position = 1;
//	}
//}
//int main()
//{
//	srand(time(0));
//	const int Wining_line = 70;
//	int Tortise_Position = 1;
//	int Hare_Position = 1;
//	cout << "The race starts now";
//	while (Tortise_Position < Wining_line && Hare_Position < Wining_line)
//	{
//		Tortise_Move(&Tortise_Position);
//		Hare_Move(&Hare_Position);
//		for (int i = 1; i <= Wining_line; ++i)
//		{
//			if (i == Tortise_Position && i == Hare_Position)
//			{
//				cout << "ouch";
//			}
//			else if (i == Tortise_Position)
//			{
//				cout << "T";
//			}
//			else if (i == Hare_Position)
//			{
//
//				cout << "H";
//			}
//			else
//			{
//				cout << " ";
//			}
//		}
//		std::this_thread::sleep_for(std::chrono::seconds(1));
//		system("cls");
//		cout << endl;
//	}
//	if (Tortise_Position >= Wining_line && Hare_Position >= Wining_line)
//	{
//		cout << "Tie!" << endl;
//	}
//	else if (Hare_Position >= Wining_line)
//	{
//		cout << "HARE WINS" << endl;
//	}
//	else
//	{
//		cout << "Tortise wins" << endl;
//	}
//	return 0;
//}