//#include <iostream>
//#include<conio.h>
//using namespace std;
//
//class tollBooth
//{
//private:
//    unsigned int t_car;
//    double t_money;
//
//public:
//    tollBooth() : t_car(0),t_money(0){}
//
//     void paying_car()
//    {
//        t_money = t_money + 0.50;
//        t_car = t_car + 1;
//    }
//
//    void nonpay()
//    {
//        t_car = t_car + 1;
//    }
//
//    void display  () const
//    {
//        cout << "The total number of cars is: " << t_car << endl;
//        cout << "The total cash of tollBooth is: " << t_money << endl;
//    }
//};
//
//int main()
//{
//    tollBooth t1;
//    char choice;
//    bool flag = true;
//    while (flag)
//    {
//        cout << "Enter Y for TAX paying CAR \nENTER N for non TAX paying CAR \npress ESC to exit: " << endl;// Using _getch() to read a single character without waiting for Enter key
//
//        choice = _getch();
//        cout << endl;
//        if (choice == 27) // 27 is the ASCII value of the escape key
//        {
//            t1.display();
//            flag = false;
//        }
//        else if (choice == 'Y')
//        {
//            t1.paying_car();
//        }
//        else if (choice == 'N')
//        {
//            t1.nonpay();
//        }
//        else
//            cout << "You enter a wrong input.Enter again" << endl;
//    }
//    system("pause");
//    return 0;
//}
