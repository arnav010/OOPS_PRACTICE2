#include <iostream>
using namespace std;
class Student
{
protected:
    int a, b, c;

public:
    Student()
    {
        cout << "base class con\n";
    }
    Student(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        cout << "base para const\n";
    }
    ~Student()
    {
        cout << "base class des\n";
    }
};
class UGStudent : protected Student
{
protected:
    int e, f;

public:
    UGStudent()
    {
        cout << "ug const" << endl;
    }
    UGStudent(int a, int b, int c, int e, int f) : Student(a, b, c)
    {
        cout << "pg dest" << endl;
    }
    ~UGStudent()
    {
        cout << "ug dest" << endl;
    }
};
class PGStudent : protected UGStudent
{
protected:
    int g, h;

public:
    PGStudent()
    {
        cout << "pgstudent const\n";
    }
    PGStudent(int a, int b, int c, int e, int f, int g, int h) : UGStudent(a, b, c, e, f)
    {

        cout << "pgstudent para const\n";
    }
    ~PGStudent()
    {
        cout << "pg student dest \n";
    }
};
int main()
{
    PGStudent p;
    cout << endl
         << endl;
    PGStudent p1(1, 2, 3, 4, 5, 6, 7);
    return 0;
}