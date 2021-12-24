﻿#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    //Задание 1

    int N;

    cout << "Введите размер массива N (N>0)" << endl;
    cin >> N;

    int* a = new int[N];

    cout << "Массив размера N, содержащий N первых положительных нечетных чисел:" << endl;

    for (int i = 0; i < N; i++)
    {
        a[i] = 1 + i * 2;
    }

    for (int i = 0; i < N; i++)
    {
        cout << a[i] << endl;
    }

    delete[] a;

    //Задание 2

    cout << "=================================================" << endl;

    int A, D;

    cout << "Введите размер массива N (N>1)" << endl;
    cin >> N;

    cout << "Введите первый член геометрической прогрессии" << endl;
    cin >> A;

    cout << "Введите знаменатель геометрической прогрессии" << endl;
    cin >> D;

    int* arr = new int[N];

    cout << "Массив размера N, содержащий N первых членов данной прогрессии:" << endl;

    for (int i = 0; i < N; i++)
    {
        arr[i] = A * pow(D, i);
    }

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << endl;
    }

    delete[] arr;

    //Задание 3

    cout << "=================================================" << endl;

    int B;

    cout << "Введите размер массива N (N>2)" << endl;
    cin >> N;
    cout << "Введите первый элемент массива A" << endl;
    cin >> A;
    cout << "Введите второй элемент массива B" << endl;
    cin >> B;

    int* array = new int[N];

    array[0] = A;
    array[1] = B;

    int sum;

    cout << "Целочисленный массив размера N, первый элемент которого равен A, второй равен B, а каждый последующий элемент равен сумме всех предыдущих" << endl;

    for (int i = 2; i < N; i++)
    {
        sum = 0;

        for (int j = 0; j < i; j++)
        {
            sum = sum + array[j];
        }
        array[i] = sum;
    }

    for (int i = 0; i < N; i++)
    {
        cout << array[i] << endl;
    }

    delete[] array;

    //Задание 4

    cout << "=================================================" << endl;

    cout << "Введите размер массива N" << endl;
    cin >> N;

    int* AA = new int[N];

    for (int i = 0; i < N; i++)
    {
        AA[i] = rand() % 90 + 10;
    }

    cout << "Вывод массива" << endl;

    for (int i = 0; i < N; i++)
    {
        cout << AA[i] << endl;
    }

    cout << "Преобразование" << endl;


    for (int i = 0; i < N / 2; i++)
    {
        cout << AA[i] << endl;
        cout << AA[N - 1 - i] << endl;

    }

    if (N % 2 != 0)
        cout << AA[N / 2] << endl;
    delete[] AA;


    //Задание 5

    cout << "=================================================" << endl;

    cout << "Введите размер массива N" << endl;
    cin >> N;

    int* AAA = new int[N];

    cout << "Вывод массива" << endl;

    for (int i = 0; i <= N; i++)
    {
        AAA[i] = rand() % 90 + 10;
        cout << AAA[i] << endl;

    }

    cout << endl;

    cout << "Элементы с нечетными номерами в порядке возрастания номеров" << endl;

    for (int i = 1; i < N; i += 2)
    {
        cout << i << "- " << AAA[i] << endl;
    }

    cout << "Элементы с четными номерами в порядке убывания номеров" << endl;

    for (int i = N - (N % 2); i >= 0; i -= 2)
    {
        cout << i << "- " << AAA[i] << endl;
    }

    return 0;
}