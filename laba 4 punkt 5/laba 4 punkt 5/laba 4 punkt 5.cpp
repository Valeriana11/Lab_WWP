#include <iostream>
using namespace std;

int main()
{
	double a, b;

	cout << " Naiti summy, raznost, proizwedenie i chasnoe modulei  a i b" << endl << " Vvedite a i b" << endl;
	cin >> a >> b;

	a = abs(a);
	b = abs (b);

	cout << "Summa modulei = " << a + b << endl << "Raznost modulei = " << a - b << endl << "Proizvedenie modulei = " << a * b << endl << "Chasnoe modulei = " << a / b << endl;

	return 0;
}

