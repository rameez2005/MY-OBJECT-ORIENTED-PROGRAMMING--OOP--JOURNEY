//#include <iostream>
//using namespace std;
//
//template <typename Type>
//Type findMax(Type num1, Type num2) {
//    return (num1 > num2) ? num1 : num2;
//}
//
//template <typename Type>
//Type findMin(Type num1, Type num2) {
//    return (num1 < num2) ? num1 : num2;
//}
//
//template <typename Type>
//Type add(Type num1, Type num2) {
//    return num1 + num2;
//}
//
//template <typename Type>
//Type subtract(Type num1, Type num2) {
//    return num1 - num2;
//}
//
//template <typename Type>
//Type multiply(Type num1, Type num2) {
//    return num1 * num2;
//}
//
//template <typename Type>
//Type divide(Type num1, Type num2) {
//    try
//    {
//        if (num2 == 0)
//            throw 1;
//        return num1 / num2;
//    }
//    catch (int)
//    {
//        cout << "Error: Dividing by zero (second number must be non zero)... " << endl;
//    }
//}
//
//template <typename Type>
//Type calculateAverage(Type array[], int size) {
//    Type sum = 0;
//    for (int i = 0; i < size; ++i)
//    {
//        sum += array[i];
//    }
//    return sum / size;
//}
//
//template <typename Type>
//Type calculateMedian(Type array[], int size) {
//    for (int i = 0; i < size - 1; i++)
//    {
//        for (int j = 0; j < size - i - 1; j++)
//        {
//            if (array[j] > array[j + 1])
//            {
//                swap(array[j], array[j + 1]);
//            }
//        }
//    }
//    if (size % 2 == 0)
//    {
//        return (array[size / 2 - 1] + array[size / 2]) / 2;
//    }
//    else
//    {
//        return array[size / 2];
//    }
//}
//
//template <typename Type>
//class Circle {
//private:
//    Type radius;
//public:
//    Circle(Type r) : radius(r) {}
//    Type calculateArea() {
//        return 3.14159 * radius * radius;
//    }
//    Type calculatePerimeter() {
//        return 2 * 3.14159 * radius;
//    }
//};
//
//template <typename Type>
//class Rectangle {
//private:
//    Type length;
//    Type width;
//public:
//    Rectangle(Type l, Type w) : length(l), width(w) {}
//    Type calculateArea() {
//        return length * width;
//    }
//    Type calculatePerimeter() {
//        return 2 * (length + width);
//    }
//};
//
//template <class Type>
//class Triangle {
//private:
//    Type side1;
//    Type side2;
//    Type side3;
//public:
//    Triangle(Type s1 = 0, Type s2 = 0, Type s3 = 0) :side1(s1), side2(s2), side3(s3) {}
//    Type calculateArea() {
//        return (side1 * side2) / 2;
//    }
//    Type calculatePerimeter() {
//        return side1 + side2 + side3;
//    }
//};
//
//int main() {
//    int length = 0, width = 0, side1 = 0, side2 = 0, side3 = 0, size = 0;
//    float num1, num2;
//    double radius;
//    cout << "Statistical Calculations on an array" << endl;
//    cout << "Enter the number of elements: ";
//    cin >> size;
//    double* array = new double[size];
//    cout << "Enter the elements: ";
//    for (int i = 0; i < size; ++i)
//    {
//        cin >> array[i];
//    }
//    cout << "Average: " << calculateAverage(array, size) << endl;
//    cout << "Median: " << calculateMedian(array, size) << endl;
//
//    cout << "Basic Arithmetic on two numbers" << endl;
//    cout << "Enter two numbers: ";
//    cin >> num1 >> num2;
//    cout << "Max: " << findMax(num1, num2) << endl;
//    cout << "Min: " << findMin(num1, num2) << endl;
//    cout << "Sum: " << add(num1, num2) << endl;
//    cout << "Subtraction: " << subtract(num1, num2) << endl;
//    cout << "Multiplication: " << multiply(num1, num2) << endl;
//    cout << "Division: " << divide(num1, num2) << endl;
//
//    cout << "Circle" << endl;
//    cout << "Enter radius of circle: ";
//    cin >> radius;
//    Circle<double> circle(radius);
//    cout << "Circle Area: " << circle.calculateArea() << endl;
//    cout << "Circle Perimeter: " << circle.calculatePerimeter() << endl;
//
//    cout << "Rectangle" << endl;
//    cout << "Enter length and width of rectangle: ";
//    cin >> length >> width;
//    Rectangle<int> rectangle(length, width);
//    cout << "Rectangle Area: " << rectangle.calculateArea() << endl;
//    cout << "Rectangle Perimeter: " << rectangle.calculatePerimeter() << endl;
//
//    cout << "Triangle" << endl;
//    cout << "Enter sides of triangle (base, perpendicular, hypotenuse): ";
//    cin >> side1 >> side2 >> side3;
//    Triangle<int> triangle(side1, side2, side3);
//    cout << "Triangle Area: " << triangle.calculateArea() << endl;
//    cout << "Triangle Perimeter: " << triangle.calculatePerimeter() << endl;
//
//    system("pause");
//    return 0;
//}
