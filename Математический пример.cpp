#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Russian");
    system("chcp 1251 > nul");
    double x, y, z, f, i, fi;

    printf("������� �: ");
    scanf("%lf", &x);
    printf("������� Y: ");
    scanf("%lf", &y);
    printf("������� Z: ");
    scanf("%lf", &z);

    f = ((pow(M_E, fabs(x - y))) * (pow(fabs(x - y), fabs(x + y)))) / ((atan(x) + atan(z)));
    i = pow(pow(x, 6) + pow(log(y), 2), 1);
    fi = f + i;

    printf("�����: %lf", fi);
    return 0;
}