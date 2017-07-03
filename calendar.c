#include <stdio.h>

int main() {

	int d1, d2, m1, m2, y1, y2;
	printf("Enter date 1 in dd/mm/yyyyy:\n");
	scanf_s("%d/%d/%d", &d1, &m1, &y1);
	printf("Enter date 2 in dd/mm/yyyyy:\n");
	scanf_s("%d/%d/%d", &d2, &m2, &y2);
	int Jan = 31;
	int Feby1 = (y1 % 4 == 0 && y1 % 100 != 0 || y1 % 400 == 0 ? 29 : 28);
	int Feby2 = (y2 % 4 == 0 && y2 % 100 != 0 || y2 % 400 == 0 ? 29 : 28);
	int Mar = 31;
	int Apr = 30;
	int May = 31;
	int Jun = 30;
	int Jul = 31;
	int Aug = 31;
	int Sep = 30;
	int Oct = 31;
	int Nov = 30;
	int Dec = 31;
	int Daysy1; //количество дней в первом году
	int year1 = (y1 % 4 == 0 && y1 % 100 != 0 || y1 % 400 == 0 ? 366 : 365);

//осталось дней в году
		if (m1 == 1) {
			Daysy1 = year1 - d1;
		}
		else if (m1 == 2) {
			Daysy1 = year1 -(Jan - d1);
		}
		else if (m1 == 3) {
			Daysy1 = year1 - (Jan +Feby1 - d1);
		}
		else if (m1 == 4) {
			Daysy1 = year1 - (Jan + Feby1 + Mar - d1);
		}
		else if (m1 == 5) {
			Daysy1 = year1 - (Jan + Feby1 + Mar + Apr - d1);
		}
		else if (m1 == 6) {
			Daysy1 = year1 - (Jan + Feby1 + Mar + Apr + May - d1);
		}
		else if (m1 == 7) {
			Daysy1 = year1 - (Jan + Feby1 + Mar + Apr + May + Jun - d1);
		}
		else if (m1 == 8) {
			Daysy1 = year1 - (Jan + Feby1 + Mar + Apr + May + Jun + Jul - d1);
		}
		else if (m1 == 9) {
			Daysy1 = year1 - (Jan + Feby1 + Mar + Apr + May + Jun + Jul + Aug- d1);
		}
		else if (m1 == 10){
			Daysy1 = year1 - (Jan + Feby1 + Mar + Apr + May + Jun + Jul + Aug + Sep - d1);
		}
		else if (m1 == 11) {
			Daysy1 = year1 - (Jan + Feby1 + Mar + Apr + May + Jun + Jul + Aug + Sep + Oct - d1);
		}
		else {
			Daysy1 = year1 - (Jan + Feby1 + Mar + Apr + May + Jun + Jul + Aug + Sep + Oct + Nov - d1);
		}
//вычисление дней в полных годах
	int Days=0;
	int y = y1 + 1;
	while (y<y2) 
	{
		int b;
		b = (y % 4 == 0 && y % 100 != 0 || y % 400 == 0 ? 366 : 365);
		Days += b;
		y++;	
		}
	int Daysy2; //количество дней в последнем году
	//вычисление прошедших дней в последнем годе
	if (m2 == 1) {
		Daysy2 = d2;
	}
	else if (m2 == 2) {
		Daysy2 = (Jan + d2);
	}
	else if (m2 == 3) {
		Daysy2 = (Jan + Feby2 + d2);
	}
	else if (m2 == 4) {
		Daysy2 = (Jan + Feby2 + Mar + d2);
	}
	else if (m2 == 5) {
		Daysy2 = (Jan + Feby2 + Mar + Apr + d2);
	}
	else if (m2 == 6) {
		Daysy2 = (Jan + Feby2 + Mar + Apr + May + d2);
	}
	else if (m2 == 7) {
		Daysy2 = (Jan + Feby2 + Mar + Apr + May + Jun + d2);
	}
	else if (m2 == 8) {
		Daysy2 = (Jan + Feby2 + Mar + Apr + May + Jun + Jul + d2);
	}
	else if (m2 == 9) {
		Daysy2 = (Jan + Feby2 + Mar + Apr + May + Jun + Jul + Aug + d2);
	}
	else if (m2 == 10) {
		Daysy2 = (Jan + Feby2 + Mar + Apr + May + Jun + Jul + Aug + Sep + d2);
	}
	else if (m2 == 11) {
		Daysy2 = (Jan + Feby2 + Mar + Apr + May + Jun + Jul + Aug + Sep + Oct + d2);
	}
	else {
		Daysy2 = (Jan + Feby2 + Mar + Apr + May + Jun + Jul + Aug + Sep + Oct + Nov + d2);
	}

	int Sum = Daysy1+Days+Daysy2;
		printf("Days:\n%d", Sum);
		scanf_s("%d", &Sum);
	return 0;
	}