#include<iostream>
using namespace std;

class Student{
    protected:
        string name;
        int roll;
    public:
       void getData()
        {
            cout << "Enter Data : \n" ;
            cout << "Enter Name : ";
            cin >> name;
            cout << "Enter Roll : ";
            cin >> roll;
            cout << endl;
        }
};

class Academic : public Student{
    protected:
        int m1, m2;
    public:
        void getData()
        {
            cout << "Enter Data : \n" ;
            cout << "Enter 1st marks : ";
            cin >> m1;
            cout << "Enter 2nd marks : ";
            cin >> m2;
            cout << endl;
        }
};

class ExtraC : public Student{
    protected:
        int e1, e2;
    public:
        void getData()
        {
            cout << "Enter Data : \n" ;
            cout << "Enter 1st marks(Extra) : ";
            cin >> e1;
            cout << "Enter 2nd marks(Extra) : ";
            cin >> e2;
            cout << endl;
        }
};

class Result : public Academic, public ExtraC{

    public:
        void Display()
        {
           
        }
};

int main()
{
    
    cout << "enter name";
    return 0;
}
