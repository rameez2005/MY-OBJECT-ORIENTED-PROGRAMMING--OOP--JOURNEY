#include<iostream>
using namespace std;

void swapUsingPointers(int * ptr1 , int * ptr2) {

	*ptr1 = *ptr1 + *ptr2;
	*ptr2 = *ptr1 - *ptr2;
	*ptr1 = *ptr1 - *ptr2;

}

int main() {
int n1, n2;
cout << " ENTER 1st NUMBER\n";
cin >> n1;
cout << " ENTER 2nd NUMBER\n";
cin >> n2;
int * ptr1 = & n1;
int * ptr2 = & n2;
swapUsingPointers(ptr1, ptr2);
	cout << " YOUR NUMBERS HAS BEEEN SWAPPED\n";
	cout << " 1st NUMBER IS "<< n1 << endl;
	cout << " 2nd NUMBER IS " << n2 << endl;
	
	system("pause");
	return 0;
}