//#include <iostream>
//
//using namespace std;
//
//class SquareFoot;
//
//class SquareYard {
//private:
//    double area;
//
//public:
//    SquareYard(double a) : area(a) {}
//
//    double getArea() const {
//        return area;
//    }
//
//    SquareFoot operator+(const SquareYard& other) const;
//    SquareFoot operator-(const SquareYard& other) const;
//};
//
//class SquareMetre {
//private:
//    double area;
//
//public:
//    SquareMetre(double a) : area(a) {}
//
//    double getArea() const {
//        return area;
//    }
//
//    SquareFoot operator+(const SquareMetre& other) const;
//    SquareFoot operator-(const SquareMetre& other) const;
//};
//
//class SquareFoot {
//private:
//    double area;
//
//public:
//    SquareFoot(double a) : area(a) {}
//
//    double getArea() const {
//        return area;
//    }
//
//    SquareFoot operator+(const SquareFoot& other) const {
//        return SquareFoot(area + other.area);
//    }
//
//    SquareFoot operator-(const SquareFoot& other) const {
//        return SquareFoot(area - other.area);
//    }
//
//    SquareFoot operator+(const SquareYard& other) const {
//        return SquareFoot(area + other.getArea() * 9);
//    }
//
//    SquareFoot operator-(const SquareYard& other) const {
//        return SquareFoot(area - other.getArea() * 9);
//    }
//
//    SquareFoot operator+(const SquareMetre& other) const {
//        return SquareFoot(area + other.getArea() * 10.7639);
//    }
//
//    SquareFoot operator-(const SquareMetre& other) const {
//        return SquareFoot(area - other.getArea() * 10.7639);
//    }
//
//    SquareFoot operator+(double val) const {
//        return SquareFoot(area + val);
//    }
//
//    SquareFoot operator-(double val) const {
//        return SquareFoot(area - val);
//    }
//};
//
//SquareFoot SquareYard::operator+(const SquareYard& other) const {
//    return SquareFoot(area + other.area * 9);
//}
//
//SquareFoot SquareYard::operator-(const SquareYard& other) const {
//    return SquareFoot(area - other.area * 9);
//}
//
//SquareFoot SquareMetre::operator+(const SquareMetre& other) const {
//    return SquareFoot(area + other.area * 10.7639);
//}
//
//SquareFoot SquareMetre::operator-(const SquareMetre& other) const {
//    return SquareFoot(area - other.area * 10.7639);
//}
//
//int main() {
//    SquareFoot sqft1(100);
//    SquareFoot sqft2(50);
//    SquareYard sqyd(10);
//    SquareMetre sqm(20);
//
//    SquareFoot result1 = sqft1 + sqft2;
//    SquareFoot result2 = sqft1 - sqyd;
//    SquareFoot result3 = sqft1 + sqm;
//
//    cout << "Result 1: " << result1.getArea() << " square feet" << endl;
//    cout << "Result 2: " << result2.getArea() << " square feet" << endl;
//    cout << "Result 3: " << result3.getArea() << " square feet" << endl;
//
//
//
//
//
//    system("pause");
//    return 0;
//}
