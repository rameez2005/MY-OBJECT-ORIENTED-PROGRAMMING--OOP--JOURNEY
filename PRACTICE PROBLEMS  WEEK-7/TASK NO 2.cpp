//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class persondata {
//protected :
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
//		 this->FirstName = fn;
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
//protected :
//    int customernumber;
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
//		cout << " Do YOU WANT TO BE IN MAILING LIST ? \n 1:YES \n 2:NO  :\n ";
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
//			cout << " YNO , THIS PERSON  DOES NOT WANTS TO BE IN MAILING LIST \n";
//		}	
//	}
//
//
//
// };
//
//int customerdata::unique = 0;
//
//int main() {
//	customerdata c1;
//	c1.inputdata();
//	cout << " \n YOUR DATA IS : \n";
//	c1.outputdata();
//	system("pause");
//	return 0;
//}