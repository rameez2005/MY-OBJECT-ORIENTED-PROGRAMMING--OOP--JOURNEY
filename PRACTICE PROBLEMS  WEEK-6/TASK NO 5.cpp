//#include<iostream>
//using namespace std;
//class Time
//{
//private:
//    int H;
//    int M;
//    int S;
//public:
//    Time() : H(0) , S(0) , M(0){} // defualt 
//  
//    Time(int h, int m, int s) // parameterized
//    {
//        H = h;
//        M = m;
//        S = s;
//    }
//    void display(Time t1, Time t2)const
//    {
//        cout << "The Time of First object" << " " << t1.H << ":" << t1.M << ":" << t1.S << endl;
//        cout << "The Time of Second object" << " " << t2.H << ":" << t2.M << ":" << t2.S << endl;
//    }
//    void addtime(const Time t1, const Time t2, Time t3)
//    {
//        t3.H = t1.H + t2.H;
//        t3.M = t1.M + t2.M;
//        t3.S = t1.S + t2.S;
//        cout << "After adding the two time objects" << " " << t3.H << ":" << t3.M << ":" << t3.S << endl;
//    }
//
//};
//int main()
//{
//    const Time t1(2, 10, 3);
//    const Time t2(7, 12, 10);
//    Time t3;
//    t1.display(t1, t2);
//    t3.addtime(t1, t2, t3);
//    system("pause");
//    return 0;
//}
