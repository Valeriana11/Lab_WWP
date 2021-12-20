#include <iostream>
#include <Windows.h>
#include <cmath>

int one()
{
    std::cout << "1. Даны целые положительные числа A и B (A < B). Вывести все целые числа от A до B включительно; при этом каждое число должно выводиться столько раз, каково его значение (например, число 3 выводится 3 раза).\n";
    std::cout << "Введите A и B\n";

    int A;
    int B;

    std::cin >> A >> B;

    for (int i = A; i <= B; i++)
    {
        for (int p = 1; p <= i; p++)
        {
            std::cout << i;
        }
        std::cout << " ";
    }

    std::cout << "\n\n";

    return 0;
}

int two()
{
    std::cout << "2. Даны положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений). Не используя операции умножения и деления, найти длину незанятой части отрезка A.\n";
    std::cout << "Введите A и B\n";

    int A;
    int B;

    std::cin >> A >> B;

    while (A >= B)
    {
        A -= B;
    }

    std::cout << A;

    std::cout << "\n\n";

    return 0;
}

int three_function(int num)
{
    int Result = 0;

    for (int i = 1; i <= num; i++)
    {
        Result += i;
    }

    return Result;
}

int three()
{
    std::cout << "3. Дано целое число N (> 1). Вывести наименьшее из целых чисел K, для которых сумма 1 + 2 + . . . + K будет больше или равна N, и саму эту сумму.\n";
    std::cout << "Введите N\n";

    int N;
    std::cin >> N;

    int K = 0;

    while (three_function(K) < N)
    {
        K += 1;
    }

    std::cout << "К = " << K << ", сумма = " << three_function(K);

    std::cout << "\n\n";

    return 0;
}

int four()
{
    std::cout << "4. Начальный вклад в банке равен 1000 руб. Через каждый месяц размер вклада увеличивается на P процентов от имеющейся суммы (P — вещественное число, 0 < P < 25). По данному P определить, через сколько месяцев размер вклада превысит 1100 руб., и вывести найденное количество месяцев K (целое число) и итоговый размер вклада S (вещественное число).\n";
    std::cout << "Введите P\n";

    float P;
    std::cin >> P;

    float Deposit = 1000;
    int K = 0;

    for (int i = 1; Deposit <= 1100; i++)
    {
        Deposit *= 1 + P / 100;
        K = i;
    }

    std::cout << "K = " << K << ", S = " << Deposit << "\n";

    std::cout << "\n\n";

    return 0;
}

int five()
{
    std::cout << "5. Даны целые положительные числа A и B. Найти их наибольший общий делитель (НОД), используя алгоритм Евклида\n";
    std::cout << "\n";

    int A;
    int B;

    std::cin >> A >> B;

    while (A != 0 and B != 0)
    {
        if (A > B)
        {
            A = A % B;
        }
        else
        {
            B = B % A;
        }
    }

    int NOD = A + B;

    std::cout << "НОД = " << NOD;

    std::cout << "\n\n";

    return 0;
}

int fib(int n)
{

    int Fn = (pow((1 + sqrt(5)) / 2, n) - pow((1 - sqrt(5)) / 2, n)) / sqrt(5);

    return Fn;
}

int fib_index(int n)
{
    double fibo = 2.078087 * log(n) + 1.672276;

    return round(fibo);
}

int six()
{
    std::cout << "6. Дано целое число N (> 1), являющееся числом Фибоначчи: N = FK. Найти целое число K — порядковый номер числа Фибоначчи N.\n";
    std::cout << "Введите N\n";

    int Fn;

    std::cin >> Fn;


    /* Решение через перебор
    for (int i = 1; fib(i) != Fn; i++)
    {
        n = i + 1;
    }

    std::cout << n;
    */

    //Решение через формулу 
    std::cout << "n = " << fib_index(Fn);


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
    six();

    return 0;
}