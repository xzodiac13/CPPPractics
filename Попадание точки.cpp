#include <stdio.h>

int main()
{
    double x, y;

m1:     printf("Input x > ");
        scanf_s("%lf", &x);

        printf("Input y > ");
        scanf_s("%lf", &y);

        printf("x = %6.3f; y = %6.3f\n", x, y);

        if ((x >= -2) && (x <= -1) && (y <= 0) && (y >= -1.5) || (x >= -2) && (x <= 0) && (y >= -1.5) && (y <= -1) ||
            (x >= 0) && (y >= -1.5) && (y <= -1) && (y <= (3 * x) / 4) && (x <= 1) || (x <= 1) && (x >= 0) && (y >= -1) && (y <= 0) ||
            (x >= -1) && (x <= 0) && (y >= 0) && (y <= 1) || (y >= (3 * x) / 4) && (y >= (-3 * x) / 4) && (y >= 1) && (y <= 1.5) ||
            (x >= 1) && (x <= 2) && (y >= 0) && (y <= 1.5))
        {
            printf("Point! \n");
        }
        else
        {
            printf("No gain\n");
        }
        goto m1;
}