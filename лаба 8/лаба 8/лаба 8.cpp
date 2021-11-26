#include <iostream>
#include <Windows.h>



int One()
{
    int FileWeightBytes;

    std::cout << "Дан размер файла в байтах. Найти количество полных килобайтов, которые занимает данный файл.\n";
    std::cout << "Введите размер файла в байтах\n";

    std::cin >> FileWeightBytes;

    double a = FileWeightBytes / 1024;
    int b;

    if (a / 1 != 0)
    {
        b = a + 1;
    }
    else
    {
        b = a;
    }

    std::cout << "Размер файла = " << b << " килобайт(а)\n\n";

    return 0;
}

int Two()
{
    int A, B;

    std::cout << "Даны целые положительные числа A и B (A > B). На отрезке длины A размещено максимально\nвозможное количество отрезков длины B (без наложений).\nНайти количество отрезков B, размещенных на отрезке A.\n";
    std::cout << "Введит значения А и В через пробел\n";

    std::cin >> A >> B;

    std::cout << "Количество отрезков B, размещенных на отрезке A = " << A / B << "\n\n";

    return 0;
}

int Three()
{
    int A, B;

    std::cout << "Даны целые положительные числа A и B (A > B). На отрезке длины A размещено максимально\nвозможное количество отрезков длины B (без наложений).\nНайти длину незанятой части отрезка A.\n";
    std::cout << "Введит значения А и В через пробел\n";

    std::cin >> A >> B;

    std::cout << "Длина незанятой части отрезка A = " << A - A / B * B << "\n\n";

    return 0;
}

int Four()
{
    int Num, Ones, Tens, NewNum;

    std::cout << "Дано двузначное число. Вывести число, полученное при перестановке цифр исходного числа.\n";
    std::cout << "Введите двузначное число\n";

    std::cin >> Num;

    Ones = Num % 10;
    Tens = Num / 10;

    NewNum = Ones * 10 + Tens;

    std::cout << "Новое число = " << NewNum << "\n\n";

    return 0;
}

int Five()
{
    int Num, Ones, Tens, Hundreds, NewNum;

    std::cout << "Дано трехзначное число. В нем зачеркнули первую слева цифру и приписали ее справа. Вывести полученное число.\n";
    std::cout << "Введите трехзначное число\n";

    std::cin >> Num;

    Ones = Num % 100 % 10;
    Tens = Num % 100 / 10;
    Hundreds = Num / 100;


    std::cout << "Новое число = " << Tens << Ones << Hundreds << "\n\n";

    return 0;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    One();
    Two();
    Three();
    Four();
    Five();

    return 0;
}
