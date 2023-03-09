#include <stdio.h>
#include <locale.h>

int main(void) {
	char *locale = setlocale(LC_ALL, "");
	int routt, routc, routa, roadt, roadc, roada, timet, timec, timea = 0;
	printf("Input route, route(km), time in route, on a Train: ");
	scanf_s("%d %d\n %d\n", &routt, &routc, &routa);
	printf("Input route, route(km), time in route, on a TCTrain: ");
	scanf_s("%d %d\n %d\n", &roadt, &roadc, &roada);
	printf("Input route, route(km), time in route, on a Bus: ");
	scanf_s("%d %d\n %d\n", &timet, &timec, &timea);
	printf("+-------------------------------------------------------------------------------+\n");
	printf("|Ведомость общественного транспорта                                             |\n");
	printf("|---------------+----------+-----------------------------+----------------------|\n");
	printf("|Вид транспорта | Маршрута | Протяженность маршрута(км)  | Время в дороге(мин)  |\n");
	printf("|---------------+----------+-----------------------------+----------------------|\n");
	printf("|Tp.            |   %d     |           %d                |        %d            |\n", routt, routc, routa);
	printf("|---------------+----------+-----------------------------+----------------------|\n");
	printf("|T-c            |   %d     |           %d                |        %d            |\n", roadt, roadc, roada);
	printf("|---------------+----------+-----------------------------+----------------------|\n");
	printf("|A.             |   %d     |           %d                |        %d            |\n", timet, timec, timea);
	printf("|-------------------------------------------------------------------------------|\n");
	printf("|Примечание: Тр - трамвай, Тс - троллейбус, А - автобус                         |\n");
	printf("+-------------------------------------------------------------------------------+\n");

}
