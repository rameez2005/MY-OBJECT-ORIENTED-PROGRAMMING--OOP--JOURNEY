//#include<iostream>
//using namespace std;
//
//class ArrayIndexOutOfBoundsException {
//	string message = "Error: Array index out of bounds.";
//public:
//	string getErrorMessage() {
//		return message;
//	}
//};
//
//template <class Type>
//class SafeArray {
//	Type size;
//	Type* elements;
//public:
//	SafeArray(Type s) : size(s) {
//		if (s < 0)
//		{
//			throw invalid_argument("Error: Array size cannot be negative.");
//		}
//		elements = new Type[s];
//	}
//
//	Type& operator [](Type index) {
//		if (index < 0 || index >= size)
//			throw ArrayIndexOutOfBoundsException();
//		else
//			return elements[index];
//	}
//
//	~SafeArray() {
//		delete[] elements;
//	}
//};
//
//int main() {
//	int arraySize = 0;
//	cout << "Enter the size of the array: ";
//	cin >> arraySize;
//	try {
//		SafeArray<int> array(arraySize);
//		cout << "Enter " << arraySize << " array elements: ";
//		for (int i = 0; i < arraySize; i++)
//		{
//			cin >> array[i];
//		}
//		cout << "\nData of the array: ";
//		for (int i = 0; i < arraySize; i++)
//		{
//			cout << array[i] << " ";
//		}
//		cout << endl;
//	}
//	catch (ArrayIndexOutOfBoundsException exception)
//	{
//		cout << exception.getErrorMessage() << endl;
//	}
//	catch (invalid_argument exception)
//	{
//		cout << exception.what() << endl;
//	}
//
//	system("pause");
//	return 0;
//}
