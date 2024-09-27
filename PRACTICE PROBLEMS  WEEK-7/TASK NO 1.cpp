//#include<iostream>
//
//
//using namespace std;
//
//
//class base {
//public:
//	int base1;
//	void displaybase() {
//		cout << "base 1 : " << base1 << endl;
//		cout << "base 2 : " << base2 << endl;
//		cout << "base 3 : " << base3 << endl;
//	}
//	base(int b1 = 0, int b2 = 0, int b3 = 0) :base1(b1), base2(b2), base3(b3) {}
//protected:
//	int base2;
//private:
//	int base3;
//
//};
//
//
//class intermidiate : public base {
//public:
//	int intermidiate1;
//	void displayintermidiate() {
//
//		cout << "intermidiate 1 : " << intermidiate1 << endl;
//		cout << "intermidiate 2 : " << intermidiate2 << endl;
//		cout << "intermidiate 3 : " << intermidiate3 << endl;
//	}
//	intermidiate(int i1 = 0, int i2 = 0, int i3 = 0, int b1 = 0, int b2 = 0, int b3 = 0) : intermidiate1(i1), intermidiate2(i2), intermidiate3(i3), base(b1, b2, b3) {}
//protected:
//	int intermidiate2;
//private:
//	int intermidiate3;
//};
//
//
//
//
//class derived : public intermidiate {
//public:
//	int derived1;
//	void displayderived() {
//
//		cout << "derived 1 : " << derived1 << endl;
//		cout << "derived 2 : " << derived2 << endl;
//		cout << "derived 3 : " << derived3 << endl;
//	}
//	derived(int d1 = 0, int d2 = 0, int d3 = 0, int i1 = 0, int i2 = 0, int i3 = 0, int b1 = 0, int b2 = 0, int b3 = 0) : derived1(d1), derived2(d2), derived3(d3), intermidiate(i1, i2, i3, b1, b2, b3) {}
//protected:
//	int derived2;
//private:
//	int derived3;
//};
//
//
//
//
//
//int main() {
//
//	derived obj(1, 2, 3, 4, 5, 6, 7, 8, 9);
//	obj.base1 = 23;
//	obj.intermidiate1 = 56;
//	obj.derived1 = 99;
//	obj.displaybase();
//	obj.displayintermidiate();
//	obj.displayderived();
//
//
//	system("pause");
//	return 0;
//}