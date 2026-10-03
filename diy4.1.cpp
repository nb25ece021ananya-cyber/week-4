#include <iostream>
using namespace std;

class Matrix
{
    int rows, cols;
    int **a;

public:
    // Constructor
    Matrix(int r, int c)
    {
        rows = r;
        cols = c;

        a = new int*[rows];

        for(int i = 0; i < rows; i++)
            a[i] = new int[cols];
    }

    // Copy constructor
    Matrix(const Matrix &m)
    {
        rows = m.rows;
        cols = m.cols;

        a = new int*[rows];

        for(int i = 0; i < rows; i++)
        {
            a[i] = new int[cols];

            for(int j = 0; j < cols; j++)
                a[i][j] = m.a[i][j];
        }
    }

    void input()
    {
        for(int i = 0; i < rows; i++)
            for(int j = 0; j < cols; j++)
                cin >> a[i][j];
    }

    void display()
    {
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
                cout << a[i][j] << " ";

            cout << endl;
        }
    }

    // Destructor
    ~Matrix()
    {
        for(int i = 0; i < rows; i++)
            delete[] a[i];

        delete[] a;
    }
};

int main()
{
    Matrix m1(2,2);

    cout << "Enter matrix:" << endl;
    m1.input();

    cout << "Original matrix:" << endl;
    m1.display();

    Matrix m2 = m1;

    cout << "Copied matrix:" << endl;
    m2.display();

    return 0;
}