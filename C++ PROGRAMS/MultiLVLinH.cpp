#include<iostream>
using namespace std;

class A{
    protected:
        int a, b;
    public:
        void getDataA()
        {
            cout << "Input one : ";
            cin >> a >> b;
            cout << endl;
        }
};

class B : public A{
    protected:
        int g;
    public:
        void getData()
        {
            cout << "Input two : ";
            cin >> g;
            cout << endl;
        }
};

class C : public B{
    int f;
    public:
        void Display()
        {
            f = a + b + g;
            cout << "Output one" << f;
            cout << endl;
        }
};

int main()
{
    C c1, c2, C3;
    c1.getDataA();
    c1.getData();
    c1.Display();
    return 0;
}