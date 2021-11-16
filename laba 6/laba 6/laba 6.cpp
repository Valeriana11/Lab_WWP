#include <iostream>
#include <Windows.h>
#include <cmath>

int main()
{


    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double A, B, C;
    double temp1, temp2;

    //1
    std::cout << "Поменяeм местами содержимое переменных A и B\n";
    std::cout << "Введите значение переменной А\n";
    std::cin >> A; //1
    std::cout << "Введите значение переменной B\n";
    std::cin >> B; //0

    temp1 = A;
    A = B;
    B = temp1;

    std::cout << "Значение переменной А - " << A << " Значение переменной В - " << B << "\n\n";

    //2
    std::cout << "Поменяeм местами содержимое переменных A, B и С. A в B, B — в C, C — в A\n";
    std::cout << "Введите значение переменной А\n";
    std::cin >> A;
    std::cout << "Введите значение переменной B\n";
    std::cin >> B;
    std::cout << "Введите значение переменной C\n";
    std::cin >> C;

    temp1 = B;
    B = A;
    temp2 = C;
    C = temp1;
    A = temp2;

    std::cout << "Значение переменной А - " << A << " Значение переменной В - " << B << " Значение переменной C - " << C << "\n\n";

    //3
    std::cout << "Поменяeм местами содержимое переменных A, B и С. A в C, C — в B, B — в A\n";
    std::cout << "Введите значение переменной А\n";
    std::cin >> A;
    std::cout << "Введите значение переменной B\n";
    std::cin >> B;
    std::cout << "Введите значение переменной C\n";
    std::cin >> C;

    temp1 = C;
    C = A;
    temp2 = B;
    B = temp1;
    A = temp2;

    std::cout << "Значение переменной А - " << A << " Значение переменной В - " << B << " Значение переменной C - " << C << "\n\n";

    //4
    double y, x = 0;

    std::cout << "Найдем значение выражения y = 3x^6 - 6x^2 - 7\n";
    std::cout << "Введите значение x\n";
    std::cin >> x;

    y = 3.0 * pow(x, 6) - 6.0 * pow(x, 2) - 7;

    std::cout << "Ответ: " << y << "\n\n";

    //5
    std::cout << "Найдем значение выражения y = 4(x-3)^6 - 7(x-3)^3 + 2 \n";
    std::cout << "Введите значение x\n";
    std::cin >> x;

    y = 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;

    std::cout << "Ответ: " << y << "\n\n";

    //6
    double a;
    double powa;

    std::cout << "Введите значение А\n";
    std::cin >> a;

    powa = a * a;

    std::cout << "Значение А в 8 степени = " << powa * powa * powa * powa << "\n\n";

    //7
    std::cout << "Введите значение А\n";
    std::cin >> a;

    powa = a * a;
    int powpowa = powa * powa;

    std::cout << "Значение А в 15 степени = " << powpowa * powpowa * powpowa * a * a * a << "\n\n";
}