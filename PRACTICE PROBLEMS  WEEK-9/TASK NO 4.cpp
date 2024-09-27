#include <iostream>
using namespace std;
float* addarray(float* a1, float* a2, float* a3, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(a3 + i) = *(a1 + i) + *(a2 + i);
	}
	return a3;
}
int main() {
	const int size = 5;
	float arr1[size] = { 22,55,66,11,99 }, arr2[size] = { 21,43,53,12,17 }, result[size];
	float* a1 = arr1, *a2 = arr2, *a3 = result;
	cout << "THE SUM OF TWO ARRAYS IS :  ";
	for (int i = 0; i < size; i++)
		cout << *(addarray(a1, a2, a3, size) + i) << "\t";
	cout << endl;
	system("pause");
	return 0;
}