#include "Address.h"
#include "Contact.h"
#include "ContactsBook.h"
#include"List.h"
#include"HistoryObjects.h"
#include"History.h"
#include<iostream>
#include<fstream>
#include<string>
#include<ctime>
#include<chrono>
using namespace std;
string getTime()
{
	// current date/time based on current system
	time_t now = time(0);

	// buffer to hold the string representation of time
	char buffer[26];

	// convert now to string form using ctime_s
	ctime_s(buffer, sizeof(buffer), &now);

	// convert buffer to string
	string dt(buffer);

	return dt;
}

int main()
{
	getTime();
	int ch = 0;
	int s;
	cout << "enter the the number of contacts you want in the contact book\n";
	cin >> s;
	ContactsBook obj1(s);
	HistoryObjects histList(s);
	//obj1.load_from_file("file.txt");
	while (ch != 20)
	{

		cout << "1. Add New Contact\n";
		cout << "2. Merge Duplicates\n";
		cout << "3. Store To File(input file name)\n";
		cout << "4. Load From File(input file name)\n";
		cout << "5. Print Contacts Sorted(input choice, fist_name last_name)\n";
		cout << "6. Print Contacts\n";
		cout << "7. Search contacts (all three choices)\n";
		cout << "8. Display Count of Contacts\n";
		cout << "9. View Details of a single Contact \n";
		cout << "10. Print History of Searched Contacts \n";
		cout << "20. Exit\n";
		cin >> ch;

		if (ch == 1)
		{

			Contact c;
			cin >> c;
			obj1.add_contact(c);

		}
		else if (ch == 2)
		{
			obj1.merge_duplicates();
		}
		else if (ch == 3)
		{
			string file;
			cout << "Enter File Name to save data: \n";
			cin >> file;
			obj1.save_to_file(file);

		}
		else if (ch == 4)
		{
			string file;
			cout << "Enter File Name to load data: \n";
			cin >> file;
			obj1.load_from_file(file);

		}
		else if (ch == 5)
		{

			string f;
			cout << "Enter F for firstname and l for last name: \n";
			cin >> f;
			obj1.print_contacts_sorted(f);


		}
		else if (ch == 6)
		{
			obj1.print_contacts();


		}
		else if (ch == 7)
		{
			int ch;
			cout << "1. Search Based on First Name and Last Name\n";
			cout << "2. Search Based on Phone Number\n";
			cout << "3. Search Based on Address\n";
			cin >> ch;
			if (ch == 1)
			{
				string f, l;
				cout << "enter First Name and Last name\n";
				cin >> f >> l;
				if (obj1.search_contact(f, l) != NULL)
				{
					Contact p = *(obj1.search_contact(f, l));
					cout << p;

					History obj(getTime(), " Searched By First and Last Name", p.getId());
					histList.Addhistory(obj);
				}
				else
					cout << "No First and Last name  match Found\n";

			}
			else if (ch == 2)
			{
				string f;
				cout << "Enter Phone Number\n";
				cin >> f;
				if (obj1.search_contact(f) != NULL)
				{
					Contact p = *(obj1.search_contact(f));
					cout << p;

					History obj(getTime(), " Searched by phone number", p.getId());
					histList.Addhistory(obj);
				}
				else
					cout << "No Phone number match Found\n";
			}
			else if (ch == 3)
			{
				Address f;
				cout << "Enter Address\n";
				cin >> f;
				if (obj1.search_contact(f) != NULL)
				{
					Contact p = *(obj1.search_contact(f));
					cout << p;
					History obj(getTime(), " searched by email", p.getId());
					histList.Addhistory(obj);

				}
				else
					cout << "No Email Address match Found\n";
			}
		}
		else if (ch == 8)
		{
			cout << "Total Contacts Count: " << obj1.total_contacts() << endl;

		}
		else if (ch == 9)
		{
			int  b;
			string a;
			cout << "Total Contacts Count: " << obj1.total_contacts() << endl;
			cout << "enter Contact no to view details\n";

			cin >> a;
			cout << *obj1.search_contact(a);
			/*cout << "Enter 1 to update the Contact details\n";
			cout << "Enter 2 to delete the Contact\n";
			cin >> b;
			if (b == 1)
			{
				obj1.update_contact(a - 1);
			}
			else if (b == 2)
			{
				obj1.delete_contact(a - 1);
			}
			else
				cout << "wrong input\n";*/
		}
		else if (ch == 10)
		{
			int a;
			cout << "History of searched contacts:\n ";
			histList.PrintReverse();
			cout << "enter 1 to view top5 viewed contacts\n";
			cin >> a;
			if (a == 1)
				for (int i = 0; i < obj1.total_contacts(); i++)
				{
					obj1.view_contact(i);
				}
			else
				cout << "wrong input\n";
		}
		else if (ch == 11)
		{


		}
		else
			cout << "invalid input\n";
	}

	system("pause");
	return 0;
}