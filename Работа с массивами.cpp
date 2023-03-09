#include <stdio.h>
#include <locale.h>

int main(void)
{
setlocale(LC_ALL, "Russian");

int massiv[20];
int M, nM;
int i, n, j, k;

a1:printf("Введите количество элементов: \n");
scanf_s("%d", &i);

if (i > 20 || i < 5)
{
printf("Ошибка\n");
goto a1;
}

for (n = 0; n < i; n++)
{
a2:printf("Введите порядок элемента a[%d] = \n", n);
scanf_s("%d", &massiv[n]);
if (massiv[n] < -100 || massiv[n] > 100)
{
printf("Ошибка\n");
goto a2;
}
}

for (j = 0; j < i - 1; j++)
{
nM = j;
M = massiv[nM];
for (n = j + 1; n < i; n++)
{
if (M < massiv[n])
{
nM = n; M = massiv[n];
}
}
k = massiv[j];
massiv[j] = M;
massiv[nM] = k;
}

printf("Отсортированный массив: \n");

for (n = 0; n < i; n++)
printf("%d ", massiv[n]);
}