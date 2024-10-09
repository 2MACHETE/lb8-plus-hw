#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <math.h>
int task1()
{
	setlocale(LC_CTYPE, "RUS");
	int n, m;
	puts("введите n и m");
	scanf("%d %d", &n, &m);
	int s = 0;
	for (int i = m; i >= n; i--) s += i;
	printf("выполнено %d раз\n", m - n);
	printf("результат %d\n\n", s);
}
int main()
{
	task1();
    task2();
	task3hw();
}
int task2()
{
	setlocale(LC_CTYPE, "RUS");
	int x, tab, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11;
	double y;
	printf("2^x - 2x^2 - 1\n¬ведите x и шаг табул€ции\n");
	scanf("%d %d", &x, &tab);
	y = pow(2, x) - 2 * pow(x, 2) - 1;
	for (a1 = 7 + 4 * tab; a1 >= 0; --a1) putchar('_');
	puts("");
	putchar('|');
	for (a2 = tab; a2 > 0; --a2) putchar(' ');
	putchar('x');
	for (a3 = tab; a3 > 0; --a3) putchar(' ');
	putchar('|');
	for (a4 = tab; a4 > 0; --a4) putchar(' ');
	printf("f(x)");
	for (a5 = tab; a5 > 0; --a5) putchar(' ');
	putchar('|'); puts("");
	for (a6 = 7 + 4 * tab; a6 >= 0; --a6) putchar('_');
	puts(""); putchar('|');
	for (a7 = tab; a7 > 0; --a7) putchar(' ');
	printf("%d", x);
	for (a8 = tab; a8 > 0; --a8) putchar(' ');
	putchar('|');
	for (a9 = tab; a9 > 0; --a9) putchar(' ');
	printf("% .1f", y);
	for (a10 = tab; a10 > 0; --a10) putchar(' ');
	putchar('|'); puts("");
	for (a11 = 7 + 4 * tab; a11 >= 0; --a11) putchar('-');
}
int task3hw()
{
		int N;
		double aa = 1.0;
		double i = 1.0;
		printf("\n¬ведите N\n");
		printf("%lf", 1.0 / 100.0);
		scanf("%d", &N);
		while (i <= N && i < 10)
		{
			aa *= (1.0 + i / 10.0);
			i++;
		}
		for (i; i <= N; i++) aa *= (1.0 + i / 100.0);
		printf("ѕроизведение = %.3f\n", aa);
		return 0;
}
