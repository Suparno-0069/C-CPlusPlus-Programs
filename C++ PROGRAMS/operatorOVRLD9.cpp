#include<iostream>
using namespace std;

class Distance{
    int mt, cm;
    public:
        Distance()
        {
            mt = 0;
            cm = 0;
        }
        Distance(int f, int i)
        {
            mt = f;
            cm = i;
        }
        friend ostream& operator << (ostream &output, const Distance &D)
        {
            output << "Meter : " << D.mt << "\tCentimeter : " << D.cm;
            return output;
        }
        friend istream& operator >> (istream &input, Distance &D)
        {
            input >> D.mt >> D.cm;
            return input;
        }
};

int main()
{
    Distance D1, D2;
    cout << "Insert the Distance for D1 : ";
    cin >> D1;
    cout << "Insert the Distance for D2 : ";
    cin >> D2;
    cout << "Distance D1 : " << D1 << endl;
    cout << "Distance D2 : " << D2 << endl;
    return 0;
}