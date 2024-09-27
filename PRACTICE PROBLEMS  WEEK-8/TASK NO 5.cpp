#include <iostream>
using namespace std;
class Matrix {
private:
    int** data;
    int rows;
    int columns;

public:
    Matrix(int r, int c) : rows(r), columns(c) {
        data = new int* [rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[columns]();
        }
    }

    ~Matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }

    Matrix(const Matrix& other) : rows(other.rows), columns(other.columns) {
        data = new int* [rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[columns];
            for (int j = 0; j < columns; ++j) {
                data[i][j] = other.data[i][j];
            }
        }
    }

    Matrix& operator=(const Matrix& other) {
        if (this != &other) {
            for (int i = 0; i < rows; ++i) {
                delete[] data[i];
            }
            delete[] data;

            rows = other.rows;
            columns = other.columns;
            data = new int* [rows];
            for (int i = 0; i < rows; ++i) {
                data[i] = new int[columns];
                for (int j = 0; j < columns; ++j) {
                    data[i][j] = other.data[i][j];
                }
            }
        }
        return *this;
    }

    int numRows() const {
        return rows;
    }

    int numColumns() const {
        return columns;
    }

    int* operator[](int index) {
        if (index < 0 || index >= rows) {
           cout << "Error: Invalid row index!" <<endl;
            exit(1);
        }
        return data[index];
    }

    bool operator==(const Matrix& other) const {
        if (rows != other.rows || columns != other.columns) {
            return false;
        }
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                if (data[i][j] != other.data[i][j]) {
                    return false;
                }
            }
        }
        return true;
    }

    Matrix operator*(const Matrix& other) const {
        if (columns != other.rows) {
           cout << "Error: Matrix dimensions are incompatible for multiplication!" <<endl;
            exit(1);
        }

        Matrix result(rows, other.columns);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.columns; ++j) {
                for (int k = 0; k < columns; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }
};

int main() {
    
    Matrix A(2, 3);
    Matrix B(3, 2);
    A[0][0] = 1; A[0][1] = 2; A[0][2] = 3;
    A[1][0] = 4; A[1][1] = 5; A[1][2] = 6;
    B[0][0] = 1; B[0][1] = 2;
    B[1][0] = 3; B[1][1] = 4;
    B[2][0] = 5; B[2][1] = 6;

    Matrix C = A * B;
   cout << "Result of matrix multiplication:" <<endl;
    for (int i = 0; i < C.numRows(); ++i) {
        for (int j = 0; j < C.numColumns(); ++j) {
           cout << C[i][j] << " ";
        }
       cout <<endl;
    }
    system("pause");
    return 0;
}
