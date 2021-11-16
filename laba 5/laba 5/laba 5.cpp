#include <iostream>
#include <Windows.h>
#include <cmath>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x1, y1;
    double  x2, y2;
    double x3, y3;

    double A, C, B;

    //1
    std::cout << "Найти расстояние между двумя точками с заданными координатами. \n";
    std::cout << "Введите 4 координаты через пробел в виде: x1, y1, x2, y2 \n";

    std::cin >> x1 >> y1 >> x2 >> y2;

    double dist = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    std::cout << "Расстояние между двумя точками с заданными координатами = " << dist << "\n\n";

    //2
    std::cout << "Даны три точки A, B, C на числовой оси. Найти длины отрезков AC и BC и их сумму.\n";
    std::cout << "Введите 3 координаты точек на числовой оси через запятую в виде: A, B, C.\n";

    std::cin >> A >> B >> C;

    double AC = abs(A - C);
    double BC = abs(B - C);
    double ACBC = AC + BC;


    std::cout << "Длина отрезка АС = " << AC << " Длина отрезка ВС = " << BC << " Сумма АС и ВС = " << ACBC << "\n\n";

    //3
    std::cout << "Даны три точки A, B, C на числовой оси. Точка C расположена между точками A и B.\nНайти произведение длин отрезков AC и BC.\n";
    std::cout << "Введите 3 координаты точек на числовой оси через запятую в виде: A, B, C.\n";

    std::cin >> A >> B >> C;

    AC = abs(A - C);
    BC = abs(B - C);


    std::cout << "Произведение длин отрезков AC и BC = " << AC * BC << "\n\n";

    //4
    std::cout << "Даны координаты двух противоположных вершин прямоугольника: (x1, y1), (x2, y2).\nСтороны прямоугольника параллельны осям координат.\n";
    std::cout << "Введите 4 координаты через пробел в виде: x1, y1, x2, y2 \n";

    std::cin >> x1 >> y1 >> x2 >> y2;

    double edge_x = abs(x2 - x1);
    double edge_y = abs(y2 - y1);

    double S = edge_x * edge_y;
    double P = (edge_x + edge_y) * 2;

    std::cout << "Периметр прямоугольника = " << P << " Площадь равна = " << S << "\n\n";

    //5
    std::cout << "Даны координаты трех вершин треугольника: (x1, y1), (x2, y2), (x3, y3).\n";
    std::cout << "Введите 6 координат через пробел в виде: x1, y1, x2, y2, x3, y3\n";

    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double side_1 = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    double side_2 = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    double side_3 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));

    P = side_1 + side_2 + side_3;

    double p = P / 2;
    S = sqrt(p * (p - side_1) * (p - side_2) * (p - side_3));

    std::cout << "Площадь треугольника = " << S << " Периметр треугольника = " << P << "\n\n";
}