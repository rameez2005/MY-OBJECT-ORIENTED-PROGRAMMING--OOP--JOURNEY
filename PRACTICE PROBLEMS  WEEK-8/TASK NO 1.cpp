//#include<iostream>
//using namespace std;
//class quad {
//protected:
//    float s1, s2, s3, s4 ;
//public:
//    virtual float area()  = 0;
//    quad(float a, float b, float c, float d) : s1(a) , s2(b), s3(c) , s4 (d) {};
//   
//};
//
//class rectangle:public quad{
//public:
//    rectangle(float l, float w) : quad(l, w, l, w) {};
//    float area() {
//        return  this->s1 * this->s2 ;
//    }
//
//    float find_area(quad& q) {
//        return q.area();
//    }
//
//};
//
//int main() {
//
//    rectangle r(4, 5);
//    cout << "AREA OF RECTANGLE IS : " << r.area() << endl;  
//    system("pause");
//    return 0;
//}
//
//
