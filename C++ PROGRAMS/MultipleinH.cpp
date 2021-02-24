#include<iostream>
using namespace std;

class Rectangle{
    protected:
        int a, b;
    public:
        void getData()
        {
            cout << "Enter Data Rectangle : \n";
            cout << "Enter Width : ";
            cin >> a;
            cout << "Enter Length : ";
            cin >> b;
            cout << endl;
        }
};

class Triangle{
    protected:
        int c, d;
    public:
        void getData()
        {
            cout << "Enter Data of Triangle : \n";
            cout << "Enter Base : ";
            cin >> c;
            cout << "Enter Height : ";
            cin >> d;
            cout << endl;
        }
};

class Area : public Rectangle, public Triangle{
    public:
        void getArea()
        {
            cout << "Area is : ";
            cout << 
        }

}