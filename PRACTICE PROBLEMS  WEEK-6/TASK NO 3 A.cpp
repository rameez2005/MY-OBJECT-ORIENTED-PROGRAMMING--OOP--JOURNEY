#include<iostream>
using namespace std;
class countClass
{
private:
	int x;
	static int count;
public:
	countClass()
	{
		count++;
		cout << "The number of instances are :" << count << endl;
	}
};
int countClass::count = 0;
int main()
{
	countClass c[5];
	system("pause");
	return 0;
}
