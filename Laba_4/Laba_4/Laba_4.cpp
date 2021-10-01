#include <iostream>;
using namespace std;

int main()
{
	//Пункт 1
	double a, b;

	cout << "Wwedite dliny storon pryamoygolnika a i b" << endl;
	
	cin >> a;
	cin >> b;

	cout << "Ploshad = " << a * b << endl;

	cout << "Pirimetr = " << 2 * (a + b) << endl << endl;

	//Пункт 2
	double D;
	double Pi = 3.14;

	cout << "Wwedite diametr okruzhnosti" << endl;

	cin >> D;

	cout << "Dlina okruzhnosti = " << Pi * D << endl;

	return 0;
}