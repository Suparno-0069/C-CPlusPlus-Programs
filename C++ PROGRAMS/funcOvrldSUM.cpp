#include<iostream>
using namespace std;

class NewSum{
	public:
		void Sum(int a, int b)
		{
			cout << "\nThe sum of the integers : " << a + b << endl;
		}
		void Sum(double c, double d)
		{
			cout << "\nThe sum of floats is :" << c + d << endl;
		}
		void Sum(int e, double f)
		{
			cout << "\nThe sum of float and integer is :" << e + f << endl;
		}
		void Sum(string q, string w)
		{
			cout << "\nThe concatineted string is :" << q + w << endl;
		}
};

int main()
{
	NewSum a;
	
	a.Sum(10, 20);
	a.Sum(9.5, 19.5);
	a.Sum(10, 21.5);
	a.Sum("suparno", "chakraborty");
	return 0;
}
