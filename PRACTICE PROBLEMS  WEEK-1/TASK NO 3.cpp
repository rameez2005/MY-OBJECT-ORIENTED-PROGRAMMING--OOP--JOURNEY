#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void initialize(int & mc, int & fc, int & m_uai, int & f_uai) {
	fstream file;
	file.open("data.txt");
		string s;
		while (file.eof()) {
			s = " ";
			cin.ignore();
			getline(cin , s);
			int size = s.length();
			for (int i = 0; i < size; i++) {
				if (s[i] == 'm' || s[i] == 'M') {
					mc++;
				}
				else if (s[i] == 'f' || s[i] == 'F') {
					fc++;
				}
			}
		}

		cout << "male count is : " << mc << endl;
		cout << "female count is : " << fc << endl;
		
	

}




int main() {
	int mc=0, fc=0, m_uai=0, f_uai=0;
	initialize(mc, fc, m_uai, f_uai);

	system("pause");
	return 0;

}