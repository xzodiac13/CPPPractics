#include <stdio.h>
#include <math.h>

int main() 
{
	char primal;
	while ((getchar()) != 'In');
	scanf_s("%c", &primal);
	double x, y, z, w, c = 0;
	switch (primal) {
	case '+': case '-': case '*':
		scanf_s("%lf %lf %lf", &x, &y, &z);
		if (x == 0 || z == 0)
			printf("Error. Individe Zeroes");
		else
			c = (5 * atan(x));
			w = (0.25 * (acos(x) * (x + 3 * fabs(x - y) + pow(x, 2)) / (fabs(x - y) * z) + pow(x, 2)));
			w = c - w;
			printf("%lf", w);
		break;

	case '[': case ']':
		scanf_s("%lf %lf %lf", &x, &y, &z);
		c = (5 * atan(x));
		w = (0.25 * (acos(x) * (x + 3 * fabs(x - y) + pow(x, 2)) / (fabs(x - y) * z) + pow(x, 2)));
		w = c - w;
		printf("%lf", w);
		break;

	case '0':
		if (c == 0)
		{
			printf("Individe zero");
			return 0;
		}
		break;

	default:
		printf("ERROR");
		break;
	}
}
