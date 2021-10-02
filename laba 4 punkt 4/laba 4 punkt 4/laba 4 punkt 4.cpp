#include <iostream>
using namespace std;

int main()
{
	double a, b;

	cout << " Naiti summy, raznost, proizwedenie i chasnoe a i b" << endl << " Vvedite a i b" << endl;
	cin >> a >> b;

	a = a * a;
	b = b * b;

	cout << "Summa kvadratovo = " << a + b << endl << "Raznost kvadratov = " << a - b << endl << "Proizvedenie kvadratov = " << a * b << endl << "Chasnoe kvadratov = " << a / b << endl;

	return 0;
}
