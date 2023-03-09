#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Russian");
    unsigned short r, u, s, i, a;
    unsigned int item;
    printf("Введите элемент списка объекта ");
    scanf_s("%x", &item);
    r = (item >> 8) & 31;
    u = (item >> 7) & 1;
    s = (item >> 6) & 1;
    i = (item >> 5) & 1;
    a = item & 255;
    printf("Идентификатор пользователя = %d\n", r);
    printf("Право читать = %d\n", u);
    printf("Право писать = %d\n", s);
    printf("Право выполнять код = %d\n", i);
    printf("Запрет доступа = %d\n", a);
    return 0;
}