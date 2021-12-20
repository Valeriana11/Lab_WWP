#include <iostream>
#include <Windows.h>
#include <cmath>

float PowerA3(float A)
{
    float B = A * A * A;

    return B;
}

int one()
{
    std::cout << "1. Описать функцию PowerA3(A, B), вычисляющую третью степень числа A и возвращающую ее в переменной B (A — входной, B — выходной параметр; оба параметра являются вещественными). С помощью этой функции найти третьи степени пяти данных чисел.\n";

    float A;

    for (int i = 1; i <= 5; i++)
    {
        std::cout << "\nИтерация " << i << " ввелите число, которое нужно возвести в степень\n";

        std::cin >> A;

        std::cout << "Третья степень введенного числа = " << PowerA3(A) << "\n";
    }

    std::cout << "\n\n";

    return 0;
}

int Sign(float X)
{
    if (X < 0)
        return -1;
    else if (X == 0)
        return 0;
    else
        return 1;
}

int two()
{
    std::cout << "2. Описать функцию Sign(X) целого типа, возвращающую для вещественного числа X следующие значения:−1, если X < 0; 0, если X = 0; 1, если X > 0.С помощью этой функции найти значение выражения Sign(A) + Sign(B) для данных вещественных чисел A и B.\n";
    std::cout << "Введите A и B\n";

    float A, B;

    std::cin >> A >> B;

    std::cout << "Sign(A) + Sign(B) = " << Sign(A) + Sign(B);

    std::cout << "\n\n";

    return 0;
}

float RingS(float R1, float R2)
{
    return 3.14159265358979323846 * pow(R1, 2) - 3.14159265358979323846 * pow(R2, 2);
}

int three()
{
    std::cout << "3. Описать функцию RingS(R1, R2) вещественного типа, находящую площадь кольца, заключенного между двумя окружностями с общим центром и радиусами R1 и R2 (R1 и R2 — вещественные, R1 > R2). С ее помощью найти площади трех колец, для которых даны внешние и внутренние радиусы.\n";
    std::cout << "Введите R1 и R2\n";

    float R1, R2;

    for (int i = 1; i <= 3; i++)
    {
        std::cout << "\nИтерация " << i << " Введите R1 и R2\n";

        std::cin >> R1 >> R2;

        std::cout << "Площадь кольца = " << RingS(R1, R2) << "\n";
    }

    std::cout << "\n\n";

    return 0;
}

int Quarter(float x, float y)
{
    if (x > 0)
    {
        if (y > 0)
            return 1;
        else
            return 4;
    }
    else
    {
        if (y > 0)
            return 2;
        else
            return 3;
    }
}

int four()
{
    std::cout << "4. Описать функцию Quarter(x, y) целого типа, определяющую номер координатной четверти, в которой находится точка с ненулевыми вещественными координатами (x, y). С помощью этой функции найти номера координатных четвертей для трех точек с данными ненулевыми координатами\n";

    float x, y;


    for (int i = 1; i <= 3; i++)
    {
        std::cout << "\nИтерация " << i << " Введите x и y\n";

        std::cin >> x >> y;

        std::cout << "Точка лежит в четверти номер " << Quarter(x, y) << "\n";
    }

    std::cout << "\n\n";

    return 0;
}

float Fact2(int N)
{
    float Fact = 1;

    if (N % 2 == 1)
    {
        for (int i = 1; i <= N; i += 2)
        {
            Fact *= i;
        }
    }
    else
    {
        for (int i = 2; i <= N; i += 2)
        {
            Fact *= i;
        }
    }

    return Fact;
}

int five()
{
    std::cout << "5. Описать функцию Fact2(N) вещественного типа, вычисляющую двойной факториал: N!!= 1·3·5·. ..·N, если N — нечетное;N!!= 2·4·6·. ..·N, если N — четное(N > 0 — параметр целого типа; вещественное возвращаемое значение используется для того, чтобы избежать целочисленного переполнения при больших значениях N).\n";
    std::cout << "Введите N\n";

    int N;
    std::cin >> N;


    std::cout << "Ответ = " << Fact2(N);

    std::cout << "\n\n";

    return 0;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    one();
    two();
    three();
    four();
    five();

    return 0;
}