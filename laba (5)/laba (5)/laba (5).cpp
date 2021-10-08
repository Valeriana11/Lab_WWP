#include <iostream>                              
using namespace std;

int main()
{
    double x1, x2, y1, y2, distance;

    cout << "vvedite koordinatu x1:" << endl;
    cin >> x1;
    cout << "vvedite koordinatu y1:" << endl;
    cin >> y1;
    cout << "vvedite koordinatu x2:" << endl;
    cin >> x2;
    cout << "vvedite koordinatu y2:" << endl;
    cin >> y2; distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));   // формула для вычисления расстояния 
    cout << "rasstoyanie mezhdu dvumya tochkami:" << distance << endl;
}
