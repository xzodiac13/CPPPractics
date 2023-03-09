#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Russian");
    unsigned short r, u, s, i, a;
    unsigned int item;
    printf("Введите идентификатор (0 - 31) ");
    scanf_s("%hu", &r);
    printf("Введите право читать (0 - 1) >");
    scanf_s("%hu", &u);
    printf("Введите право писать (0 - 1) >");
    scanf_s("%hu", &s);
    printf("Введите право выполнять код (0 - 1) >");
    scanf_s("%hu", &i);
    printf("Введите запрет доступа (0 - 255) >");
    scanf_s("%hu", &a);
    item = ((unsigned int)r & 255) << 8;
    item |= ((unsigned int)u & 1) << 7;
    item |= ((unsigned int)s & 1) << 6;
    item |= ((unsigned int)i & 1) << 5;
    item |= a & 255;
    printf("\nЭлемент списка  = %.4x\n", item);
    return 0;
}


