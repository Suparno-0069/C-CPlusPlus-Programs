#include<iostream>
using namespace std;

class Rectangle{
    protected:
        int a, b;
    public:
        void getDataR()
        {
            cout << "Enter Data of Rectangle : \n";
            cout << "Enter Width : ";
            cin >> a;
            cout << "Enter Length : ";
            cin >> b;
            cout << endl;
        }
        void DisplayR()
        {
            cout << "\nWidth of the Rectangle : " << a;
            cout << "\nHeight of the Rectangle : " << b;
            cout << endl;
        }
};

class Triangle{
    protected:
        int c, d;
    public:
        void getDataT()
        {
            cout << "Enter Data of Triangle : \n";
            cout << "Enter Base : ";
            cin >> c;
            cout << "Enter Height : ";
            cin >> d;
            cout << endl;
        }
        void DisplayR()
        {
            cout << "\nBase of the Triangle : " << c;
            cout << "\nHeight of the Triangle : " << d;
            cout << endl;
        }
};

class Area : public Rectangle, public Triangle{
    int R, T;
    public:
        void getArea()
        {
            getDataR();
            getDataT();
            R = a * b;
            T = ((c * d) / 2);
            cout << "Area is : ";
            cout << "\nArea of Rectangle : " << R;
            cout << "\nArea of Triangle : " << T;
            cout << endl;
        }
};

int main ()
{
    Area A;
    
    A.getArea();

    return 0;
}