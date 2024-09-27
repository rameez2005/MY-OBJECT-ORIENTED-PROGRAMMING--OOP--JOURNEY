#pragma once
#pragma once

#ifndef BASIC_LIB
#define BASIC_LIB
#include <iostream>
#include <string>
#endif // !BASIC_LIB
#include<fstream>
#include "Address.h"

using namespace std;
class Contact {
private:
	std::string first_name;
	std::string last_name;
	std::string mobile_number;
	std::string email_address;
	Address* address;

	int id;
public:
	bool equals(Contact& contact)const;
	void removeEquals();
	Contact* copy_contact();
	~Contact();
	//Contact();
	Contact(string first_name = "", string last_name = "", string mobile_number = "", string email_address = "", Address* address = NULL, int u = 0);

	void setFirst_name(string f);
	void setLast_name(string l);
	void setMobile_number(string m);
	void setEmail_address(string e);
	void setAddress(Address* a);
	void setId(int i);
	int getId()const;
	string getFirstName()const;
	string getLastName()const;
	string getEmailAddress()const;
	string getMobileNumber()const;
	Address* getAddress()const;
	friend istream& operator>> (istream& in, Contact& c);
	friend ostream& operator<< (ostream& out, const Contact& c);

};
