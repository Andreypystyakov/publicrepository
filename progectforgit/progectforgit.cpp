# include <stdio.h>
# include <locale.h>
# include <math.h> /*Подключение математической библиотеки */
/*Вычисление значений функции */
int main()// программа для вычисления корней уравнения с известными коэффициентами1
{
	setlocale(LC_ALL, "Russian");
	int A, B, C;
	float x1, x2, D, kD, x;
	A = 1;
	B = 5;
	C = 6;
	D = B * B - 4 * A * C;
	if (D > 0)
	{
		kD = sqrt(D);
		x1 = -1 * B + kD;
		x1 = x1 / 2 / A;
		x2 = -1 * B - kD;
		x2 = x2 / 2 / A;
		printf_s("x1 = %f, x2 = %f\n", x1, x2);
	}
	else
	{
		if (D == 0)
		{
			x = -1 * B;
			x = x / 2 / A;
			printf_s("x = %f\n", x);
		}
		else printf_s("решений нет\n");
	}
}
