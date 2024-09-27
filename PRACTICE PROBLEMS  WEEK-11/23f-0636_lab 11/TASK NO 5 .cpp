//#include <iostream>
//using namespace std;
//
//class matrix {
//	int row;
//	int col;
//	int** mat;
//public:
//	matrix(int r, int c) : row(r), col(c) {
//		mat = new int* [row];
//		for (int i = 0; i < row; ++i) {
//			mat[i] = new int[col];
//
//		}
//	};
//	~matrix() {
//		for (int i = 0; i < row; ++i) {
//			delete[] mat[i];
//			mat[i] = NULL;
//		}
//		delete[] mat;
//		mat = NULL;
//	}
//	// + operator overloaded
//	matrix operator +(matrix& m) {
//		matrix sum(row, col);
//		for (int i = 0; i < row; ++i) {
//			for (int j = 0; j < col; ++j) {
//				sum.mat[i][j] = mat[i][j] + m.mat[i][j];
//			}
//		}
//		return sum;
//	}
//	// - operator overloaded
//	matrix operator -(matrix& m) {
//		matrix dif(row, col);
//		for (int i = 0; i < row; ++i) {
//			for (int j = 0; j < col; ++j) {
//				dif.mat[i][j] = mat[i][j] - m.mat[i][j];
//			}
//		}
//		return dif;
//	}
//	// pre increment 
//	matrix& operator ++() {
//		for (int i = 0; i < row; ++i) {
//			for (int j = 0; j < col; ++j) {
//				++mat[i][j];
//			}
//		}
//		return *this;
//	}
//	// post increment 
//	matrix operator ++(int) {
//		matrix temp(*this);
//		++(*this);
//		return temp;
//	}
//	// pre decrement 
//	matrix& operator --() {
//		for (int i = 0; i < row; ++i) {
//			for (int j = 0; j < col; ++j) {
//				--mat[i][j];
//			}
//		}
//		return *this;
//	}
//
//	// post decrement 
//
//	matrix operator --(int) {
//		matrix temp(*this);
//		--(*this);
//		return temp;
//	}
//
//
//	// insertion operator 
//	friend istream& operator>>(istream& in, matrix& m) {
//		for (int i = 0; i < m.row; ++i) {
//			for (int j = 0; j < m.col; ++j) {
//				in >> m.mat[i][j];
//			}
//		}
//		return in;
//	}
//	// extraction operator 
//	friend ostream& operator <<(ostream& out, matrix& m) {
//		for (int i = 0; i < m.row; ++i) {
//			for (int j = 0; j < m.col; ++j) {
//				out << m.mat[i][j];
//			}
//		}
//		return out;
//	}
//
//	// less than operator 
//	bool operator < (matrix& m) {
//		int s1=0, s2=0;
//		for (int i = 0; i < row; ++i) {
//			for (int j = 0; j < col; ++j) {
//				s1 += mat[i][j];
//				s2 += m.mat[i][j];
//				
//			}
//		}
//		if (s1<s2) {
//			return true;
//		}
//		else
//			return false;
//
//
//	}
//
//	// greater than equal to operator 
//	bool operator >= (matrix& m) {
//		bool flag = true;
//		for (int i = 0; i < row; ++i) {
//			for (int j = 0; j < col; ++j) {
//				if (m.mat[i][j] > mat[i][j]) {
//					flag = false;
//					break;
//				}
//			}
//		}
//		if (flag) {
//			return true;
//		}
//		else
//			return false;
//	}
//	// unary operator 
//	int operator * () {
//		int prod = 1 ;
//		for (int i = 0; i < row; ++i) {
//			for (int j = 0; j < col; ++j) {
//				prod *= mat[i][j];
//			}
//		}
//		return prod;
//	}
//};
//int main() {
//	matrix A(2, 2), B(2, 2);
//	cout << "Enter elements of matrix A:" << endl;
//	cin >> A;
//	cout << "Enter elements of matrix B:" << endl;
//	cin >> B;
//	cout << "Matrix A + Matrix B:" << endl;
//	cout << A + B << endl;
//	cout << "Matrix A - Matrix B:" << endl;
//	cout << A - B << endl;
//	cout << "Matrix A after pre-increment:" << endl;
//	cout << ++A << endl;
//	cout << "Matrix B after post-increment:" << endl;
//	cout << B++ << endl;
//	cout << "Matrix A after pre-decrement:" << endl;
//	cout << --A << endl;
//	cout << "Matrix B after post-decrement:" << endl;
//	cout << B-- << endl;
//	cout << "Product of elements of matrix A: " << *A << endl;
//	cout << "Matrix A < Matrix B: " << (A < B ? "True" : "False") << endl;
//	cout << "Matrix A >= Matrix B: " << (A >= B ? "True" : "False") << endl;
//	system("pause");
//	return 0;
//}