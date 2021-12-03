#include <iostream>
#include <Windows.h>



int one()
{
	int alpha;

	std::cout << "Дано значение угла альфа в градусах (0 < альфа < 360).\nОпределить значение этого же угла в радианах, учитывая, что 180 градусов = Пи радианов." << "\n";
	std::cout << "Введите целое значение градусов" << "\n";

	std::cin >> alpha;

	int Pi = 180;

	int a = alpha;
	int b = Pi;

	//Алгоритм Евклида
	while (a != 0 and b != 0)
	{
		if (a > b)
		{
			a = a % b;
		}
		else
		{
			b = b % a;
		}
	}

	int nod = a + b;

	std::cout << "Мера угла альфа в радианах = " << alpha / nod << " Pi / " << Pi / nod << "\n\n";

	return 0;
}

int two()
{
	double x, y;

	std::cout << "Дано значение угла альфа в радианах (0 < альфа < 2·π).\nОпределить значение этого же угла в градусах, учитывая, что 180◦ = Пи радианов." << "\n";
	std::cout << "Введем значение угла альфа в радианах в виде: x Pi / y, где x и y - целые числа, неравные нулю.\nНужно ввести значения коэффицентов x и y.\n";

	std::cin >> x >> y;

	double angle = x * 180 / y;

	std::cout << "Значение угла альфа в градусах = " << angle << "\n\n";

	return 0;
}

int three()

{
	double X, A, Y;

	std::cout << "X киллограмм конфет стоят A  рублей" << "\n";
	std::cout << "Введем значение X и A (цена конфет)\n";

	std::cin >> X >> A;

	std::cout << "Цена 1 кг конфет = " << A / X << " рублей" << "\n";

	std::cout << "Введите число кг конфет, чтобы узнать цену\n";

	std::cin >> Y;

	std::cout << Y << " килограмм(а) конфет стоят " << Y * (A / X) << " рублей" << "\n\n";

	return 0;
}

int four()
{
	double V1, V2, S, T;

	double S_final;

	std::cout << "Скорость первого автомобиля V1 км/ч, второго — V2 км/ч, расстояние между ними S км.\nОпределить расстояние между ними через T часов, если автомобили удаляются друг от друга.\n";
	std::cout << "Введите V1, V2, S и T через пробел\n";

	std::cin >> V1 >> V2 >> S >> T;

	S_final = abs(V1 * T + V2 * T) + S;

	std::cout << "Расстояние между автомобилями равно " << S_final << " км." << "\n\n";

	return 0;
}

int five()
{
	double A = 0, B;

	std::cout << "Решить линейное уравнение A·x + B = 0, заданное своими коэффициентами A и B (коэффициент A не равен 0)\n";
	std::cout << "Введите коэффициенты А и В через пробел\n";

	std::cin >> A >> B;

	std::cout << "x = " << -B / A << "\n\n";

	return 0;
}

int six()
{
	double A1, B1, C1, A2, B2, C2;

	std::cout << "Найти решение системы линейных уравнений вида A1·x + B1·y = C1, A2·x + B2·y = C2\n";
	std::cout << "Введите коэффициенты А1, В1, c1, A2, B2 и С2 через пробел\n";

	std::cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2;

	//метод Краммера

	double Delta, Delta1, Delta2;

	Delta = A1 * B2 - B1 * A2;
	Delta1 = C1 * B2 - B1 * C2;
	Delta2 = A1 * C2 - C1 * A2;

	double Y = Delta2 / Delta;
	double X = Delta1 / Delta;
	if (Delta == 0)
	{

		std::cout << "Дельта равна нулю, у системы бесконечно много решений" << "\n";


		return 0;

	}
	std::cout << "X = " << X << " Y = " << Y << "\n\n";
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
}
