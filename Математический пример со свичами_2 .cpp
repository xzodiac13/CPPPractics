#include <stdio.h>
#include <math.h>

int main() 
{
	char primal;
	while ((getchar()) != 'In');
	scanf_s("%c", &primal);
	double x, y, z, w, res = 0;
	switch (primal) {
	case '+': case '*': case '-':
		scanf_s("%lf %lf %lf", &x, &y, &z);
		if (x < -1 || x>1) 
		{
			printf("Error\n"); 
			break;
		}
		if ((x + 3 * fabs(x - y) + pow(x, 2)) == 0) 
		{ 
			printf("Error\n"); 
			break; 
		}
		if ((fabs(x - y) * z + pow(x, 2)) == 0) 
		{ 
			printf("Error\n");
			break; 
		}
		res = (5 * atan(x) - 1. / 4 * acos(x) * ((x + 3 * fabs(x - y) + pow(x, 2)) / (fabs(x - y) * z + pow(x, 2))));
		printf("%.3lf", res);
		break;


	case '[': case ']':
		scanf_s("%lf %lf %lf", &x, &y, &z);
		res = (5 * atan(x) - 1. / 4 * acos(x) * ((x + 3 * fabs(x - y) + pow(x, 2)) / (fabs(x - y) * z + pow(x, 2))));
		printf("%.3lf", res);
		break;

	case '0':
		if (primal == 0)
		{
			printf("Individe zero\n");
			return 0;
		}
		break;

	default:
		printf("Error\n");
		break;
	}
}