//#include<iostream>
//#include<string>
//using namespace std;
//class scientist {
//protected:
//	double id;
//	string name;
//	string dob;
//	string graduatedfrom;
//public :
//	void inputdata() {
//		cout << "ENTER THE NAME \n";
//		getline(cin, this->name) ;
//		cout << "ENTER THE D.O.B \n";
//		getline(cin, this->dob);
//		cout << "ENTER THE ID \n";
//		cin >> this->id;		
//		cout << "GRADUATED FROM ? \n";
//		cin >> this->graduatedfrom;
//	}
//	void outputdata() {
//		cout << " NAME : " << this->name << endl;
//		cout << " ID : " << this->id << endl;
//		cout << " D.O.B : " << this->dob << endl;
//		cout << " GRADUATED FROM : " << this->graduatedfrom << endl;
//	}
//};
//class chemist : public scientist  {
//protected:
//	string fvrtchemical;
//	int chemrank;
//public:
//	 void inputdata() {
//		 scientist::inputdata();
//		 cout << "ENTER THE CHEM RANK \n";
//		 cin >> this->chemrank;
//		 cout << "ENTER THE FAVORITE CHEMICAL \n";
//		 cin >> this->fvrtchemical;
//		
//	}
//	 void outputdata() {	 
//		 cout << "YOUR DATA IS : \n\n ";
//		 scientist::outputdata();
//		 cout << " FAVORITE CHEMICAL : " << this->fvrtchemical << endl;
//		 cout << " CHEM RANK : " << this->chemrank << endl;
//	 }
//};
//
//int main() {
//	chemist c1;
//	c1.inputdata();
//	c1.outputdata();
//	system("pause");
//	return 0;
//}