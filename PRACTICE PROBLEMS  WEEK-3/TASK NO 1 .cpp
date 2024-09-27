#include<iostream>
using namespace std;
void resize(int * arr , int size , int new_size){
	int * ar = new int[new_size];
	for (int i = 0; i < new_size; ++i) {
		if (i < size) {
			*(ar + i) = *(arr + i);
		}
		else
			*(ar + i) = 0;
	}
	arr = ar;

	cout << "YOUR ARRAY HAS BEEN RESIZED \n";
	for (int i = 0; i < new_size; i++) {
		cout << *(arr + i) << " ";

}

}

int main() {
	int arr[5] = { 2,32,4,34,51 };
	int size, new_size;
	int *ptr = arr;
	cout << "enter the size of the array\n";
	cin >> size;
	cout << "enter the new size of the array\n";
	cin >> new_size;
	resize(ptr, size, new_size);
	system("pause");
	return 0;
}