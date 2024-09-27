//#include<iostream>
//#include<string>
//using namespace std;
//class car {
//protected:
//	string plate;
//	string name;
//	string color;
//	double model;
//public :
//	// defualt constructor 
//	car () : plate(" "),name(" "),color(" "),model(0){
//	}
//// copy constructor
//	car (car & obj )  {
//		this->name = obj.name;
//		this->color = obj.color;
//		this->model = obj.model;
//		this->plate = obj.plate;
//	}
//	void output() {
//		cout << " plate number : " << this->plate << endl;
//		cout << " NAME  : " << this->name << endl;
//		cout << " COLOR : " << this->color << endl;
//		cout << " MODEL  : " << this->model << endl;
//
//	}
//	void input() {
//		cout << " enter name \n";
//		cin >> this->name;
//		cout << " enter plate no \n";
//		cin >> this->plate;
//		cout << " enter color \n";
//		cin >> this->color;
//		cout << " enter model \n";
//		cin >> this->model;
//	}
//};
//
//int main() {
//	car c2;
//	cout << "SET INFORMATION FOR CAR 2 \n\n";
//	c2.input();
//	cout << "COPYING INFORMATION USING COPY CONSTRUCTOR .... \n\n";
//	car c1( c2 );
//	cout << " INFORMATION FOR CAR 1 \n\n";
//	c1.output();
//	cout << " INFORMATION FOR CAR 2 \n\n";
//	c2.output();
//	system("pause");
//	return 0;
//}