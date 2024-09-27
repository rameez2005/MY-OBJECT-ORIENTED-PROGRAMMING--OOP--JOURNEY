//#include <iostream>
//#include <fstream>
//using namespace std;
//int** InputMatrix(ifstream& fin, int& rows, int& cols)
//{
//	if (!fin)
//	{
//		cout << "File is not opened" << endl;
//		return NULL;
//
//	}
//	fin >> rows >> cols;
//	int** matrix = new int* [rows];
//	cout << "Enter the number : ";
//	for (int i = 0; i < rows; ++i)
//	{
//		matrix[i] = new int[cols];
//	}
//	for (int i = 0; i < rows; ++i)
//	{
//		for (int j = 0; j < cols; ++j)
//		{
//			cin >> matrix[i][j];
//		}
//	}
//	return matrix;
//}
//void OutputMatrix(int** matrix, const int& ROWS, const int& COLS)
//{
//	for (int i = 0; i < ROWS; ++i)
//	{
//		for (int j = 0; j < COLS; ++j)
//		{
//			cout << matrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//int** AddMatrix(int** matrixA, int** matrixB, const int& ROWS, const int& COLS)
//{
//	cout << "The addition matrix is:" << endl;
//	int** DuplicateMatrix = new int* [ROWS];
//	for (int i = 0; i < ROWS; ++i)
//	{
//		DuplicateMatrix[i] = new int[COLS];
//		for (int j = 0; j < COLS; ++j)
//		{
//			DuplicateMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
//			cout << DuplicateMatrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return DuplicateMatrix;
//}
//int** TransposeMatrix(int** matrix, const int& ROWS, const int& COLS)
//{
//	int** DuplicateMatrix = new int* [COLS];
//	cout << "Transpose of matrix is : " << endl;
//	for (int i = 0; i < COLS; ++i)
//
//	{
//		DuplicateMatrix[i] = new int[ROWS];
//		for (int j = 0; j < ROWS; ++j)
//		{
//			DuplicateMatrix[i][j] = matrix[j][i];
//			cout << DuplicateMatrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return DuplicateMatrix;
//}
//int IsSymmetric(int** matrix, const int& ROWS, const int& COLS)
//{
//	int** duplicateMatrix = new int* [ROWS];
//	for (int i = 0; i < ROWS; i++)
//	{
//		duplicateMatrix[i] = new int[COLS];
//	}
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			duplicateMatrix[i][j] = matrix[i][j];
//		}
//	}
//	for (int i = 0; i < COLS; ++i)
//	{
//		for (int j = 0; j < ROWS; ++j)
//		{
//			matrix[i][j] = matrix[j][i];
//		}
//	}
//	int count = 0;
//	int count1 = ROWS + COLS;
//	for (int i = 0; i < COLS; ++i)
//	{
//		for (int j = 0; j < ROWS; ++j)
//		{
//			if (duplicateMatrix[i][j] == matrix[i][j])
//			{
//				count++;
//			}
//			else
//				break;
//		}
//	}
//	if (count == count1)
//	{
//		return true;
//
//	}
//	else
//		return false;
//}
//void InterchangeRows(int** matrix, const int ROWS, const int COLS)
//{
//	for (int j = 0; j < COLS; ++j)
//	{
//		int temp = matrix[0][j];
//		matrix[0][j] = matrix[1][j];
//		matrix[1][j] = temp;
//	}
//	cout << "The matrix after interchage the rows is:";
//	cout << endl;
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			cout << matrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//void Deallocate(int** matrix, int rows)
//{
//	for (int i = 0; i < rows; ++i)
//	{
//		delete[] matrix[i];
//	}
//	delete[] matrix;
//}
//int main()
//{
//	ifstream fin("matrix.txt");
//	int rows, cols;
//	int** Matrix_A = InputMatrix(fin, rows, cols);
//	int** Matrix_B = new int* [rows];
//	for (int i = 0; i < rows; i++)
//	{
//		Matrix_B[i] = new int[cols];
//	}
//	cout << "Enter the elements in the Matrix_B:";
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cin >> Matrix_B[i][j];
//		}
//	}
//
//	OutputMatrix(Matrix_A, rows, cols);
//	AddMatrix(Matrix_A, Matrix_B, rows, cols);
//	TransposeMatrix(Matrix_A, rows, cols);
//	int IsSymmetr = IsSymmetric(Matrix_A, rows, cols);
//	if (IsSymmetr == 1)
//	{
//		cout << "The matix is  not symmetric" << endl;
//	}
//	else
//		cout << "The matrix is  symmetric" << endl;
//	cout << "Interchange Row of 2 by 2 array is" << endl;
//	InterchangeRows(Matrix_A, rows, cols);
//	Deallocate(Matrix_A, rows);
//	system("pause");
//}
