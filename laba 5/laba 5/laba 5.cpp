#include <iostream>
using namespace std;
int main()
{
    double x1, x2, y1, y2, distance;

    cout << "vvedite koordinaty x1:" << endl;
    cin >> x1;
    cout << "vvedite koordinaty y1:" << endl;
    cin >> y1;
    cout << "vvedite koordinaty x2:" << endl;
    cin >> x2;
    cout << "vvedite koordinaty y2:" << endl;
    cin >> y2;                              distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));      // формула для вычисления расстояния 
    cout << "rasstoyanie meghdy dvymya toshami:" << distance << endl;

    return 0;
}
