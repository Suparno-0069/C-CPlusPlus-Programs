#include<iostream>
using namespace std;

class Student{
    protected:
        string name;
        int roll;
    public:
       void getSid()
        {
            cout << "Enter Name : ";
            cin >> name;
            cout << "Enter Roll : ";
            cin >> roll;
            cout << endl;
        }
        void DisplaySid()
        {
            cout << "\nName is :" << name;
            cout << "\nRoll is :" << roll;
            cout << endl;
        }
};

class Academic : virtual public Student{
    protected:
        int m1, m2;
    public:
        void getAcd()
        {
            cout << "Enter  marks 1 : ";
            cin >> m1;
            cout << "Enter  marks 2: ";
            cin >> m2;
            cout << endl;
        }
        void DisplayAcd()
        {
            cout << "\n Marks 1 is :" << m1;
            cout << "\n Marks 2 is :" << m2;
            cout << endl;
        }
};

class ExtraC : virtual public Student{
    protected:
        int e1;
    public:
        void getEx()
        {
            cout << "Enter Extra Marks: ";
            cin >> e1;
            cout << endl;
        }
        void DisplayEx()
        {
            cout << "\n Extra Marks is :" << e1;
            cout << endl;
        }
};

class Result : public Academic, public ExtraC{
    int Total;
    public:
        void Display()
        {
           Total = m1 + m2 + e1;
           DisplaySid();
           DisplayAcd();
           DisplayEx();
           cout << "\nTotal Marks is : " << Total;
           cout << endl;
        }
};

int main()
{
    int n,i;
    cout << "\n Enter No. of students:";
    cin >> n ;
    Result s1[n];
    cout <<"\nSTUDENT INPUTS\n";
    for(i = 0 ; i < n ; i++)
    {
        cout << "\n Enter detail of Student No." << i+1 << ":\n";
        s1[i].getSid(); 
        s1[i].getAcd();
        s1[i].getEx();
    }
    for ( i = 0; i < n; i++)
    {
        cout << "\n\n\t______XXXXXXXX_______\t" ;
        s1[i].Display();
    }
}