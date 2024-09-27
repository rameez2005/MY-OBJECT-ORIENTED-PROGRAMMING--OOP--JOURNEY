//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class persondata {
//protected:
//	string FirstName;
//	string LastName;
//	string Address;
//	string City;
//	string State;
//	string Zip;
//	string PhoneNo;
//public:
//	string getfn() {
//		return FirstName;
//	}
//	string getln() {
//		return LastName;
//	}
//	string getad() {
//		return Address;
//	}
//	string getcity() {
//		return City;
//	}
//	string getst() {
//		return State;
//	}
//	string getzip() {
//		return Zip;
//	}
//	string getpn() {
//		return PhoneNo;
//	}
//	void setfn(string fn) {
//		this->FirstName = fn;
//	}
//	void setln(string ln) {
//		this->LastName = ln;
//	}
//	void setad(string ad) {
//		this->Address = ad;
//	}
//	void setcity(string city) {
//		this->City = city;
//	}
//	void setst(string st) {
//		this->State = st;
//	}
//	void setzip(string zip) {
//		this->Zip = zip;
//	}
//	void setpn(string pn) {
//		this->PhoneNo = pn;
//	}
//};
//
//class customerdata : public persondata {
//
//protected:
//	int customernumber;
//	bool mailinglist;
//	static int unique;
//
//public:
//	customerdata() {
//		unique++;
//		this->customernumber = unique;
//	}
//
//	void inputdata() {
//		cout << " ENTER FIRST NAME :\n ";
//		getline(cin, this->FirstName);
//
//		cout << " ENTER LAST NAME :\n ";
//		getline(cin, this->LastName);
//
//
//		cout << " ENTER ADDRESS  :\n ";
//		getline(cin, this->Address);
//
//
//		cout << " ENTER CITY  :\n ";
//		getline(cin, this->City);
//
//
//		cout << " ENTER STATE  :\n ";
//		getline(cin, this->State);
//
//
//
//		cout << " ENTER ZIP CODE  :\n ";
//		getline(cin, this->Zip);
//
//
//		cout << " ENTER PHONE NUMBER  :\n ";
//		getline(cin, this->PhoneNo);
//
//		cout << " Do YOU WANT TO BE IN MAILING LIST ? \n 1:YES \n 0:NO  :\n ";
//		cin >> mailinglist;
//
//	}
//	void outputdata() {
//		cout << "FIRST NAME : " << this->FirstName << endl;
//		cout << "LAST NAME : " << this->LastName << endl;
//		cout << "ADDRESS : " << this->Address << endl;
//		cout << "CITY : " << this->City << endl;
//		cout << "STATE : " << this->State << endl;
//		cout << "ZIP CODE : " << this->Zip << endl;
//		cout << "PHONE NUMBER : " << this->PhoneNo << endl;
//		cout << "UNIQUE CUSTOMER NUMBER : " << this->customernumber << endl;
//		if (this->mailinglist == 1) {
//			cout << " YES , THIS PERSON WANTS TO BE IN MAILING LIST \n";
//		}
//		else
//		{
//			cout << " NO , THIS PERSON  DOES NOT WANTS TO BE IN MAILING LIST \n";
//		}
//	}
//};
//
//int customerdata::unique = 0;
//
//
//class prefferedcustomer : public customerdata {
//protected:
//	double purchase_amt;
//	double discount_lvl;
//public :
//	void indata() {
//		inputdata();
//		cout << "ENTER TOTAL PURCHASED AMOUNT \n";
//		cin >> purchase_amt;
//	}
//	void calculate() {
//		cout << endl << endl << endl;
//		outputdata();
//		if (purchase_amt >= 2000) {
//			cout << " HURRAH !! YOU GOT 10 % DISCOUNT AND YOUR BILL AFTER DISCOUNT IS : " << purchase_amt - (0.1 * purchase_amt) << endl;
//		}
//		else if (purchase_amt >= 1500) {
//			cout << " HURRAH !! YOU GOT 7 % DISCOUNT AND YOUR BILL AFTER DISCOUNT IS : " << purchase_amt - (0.07 * purchase_amt) << endl;
//		}
//		else if(purchase_amt >= 1000) {
//			cout << " HURRAH !! YOU GOT 6 % DISCOUNT AND YOUR BILL AFTER DISCOUNT IS : " << purchase_amt - (0.06 * purchase_amt) << endl;
//		}
//		else if (purchase_amt >= 500) {
//			cout << " HURRAH !! YOU GOT 5 % DISCOUNT AND YOUR BILL AFTER DISCOUNT IS : " << purchase_amt - (0.05 * purchase_amt) << endl;
//		}
//		else {
//			cout << " SORRY !! YOU GOT NO DISCOUNT AND YOUR BILL IS : " << purchase_amt  << endl;
//		}
//	}
//
//};
//
//int main() {
//	prefferedcustomer P1;
//	P1.indata();
//	P1.calculate();
//	
//	system("pause");
//	return 0;
//}