#include <stdio.h>

int main() {

	long double M1, M2, M3; //uroven' prodaj
	int W = 200; //zarplata
	int Bb = 200;//premiya dlya luchshego
	long double B1, B2, B3;
	printf("Enter sales for Manager 1:\n");
	scanf_s("%LF", &M1);
	printf("Enter sales for Manager 2:\n");
	scanf_s("%LF", &M2);
	printf("Enter sales for Manager 3:\n");
	scanf_s("%LF", &M3);

	if (M1 <= 500) {
		B1 = W + (M1*0.03);
	}
	else if (M1 <= 1000) {
		B1 = W + (M1*0.05);
	}
	else {
		B1 = W + (M1*0.08);
	}
	if (M2 <= 500) {
		B2 = W + (M2*0.03);
	}
	else if (M2 <= 1000) {
		B2 = W + (M2*0.05);
	}
	else {
		B2 = W + (M2*0.08);
	}
	if (M3 <= 500) {
		B3 = W + (M3*0.03);
	}
	else if (M3 <= 1000) {
		B3 = W + (M3*0.05);
	}
	else {
		B3 = W + (M3*0.08);
	}
	if (B1 > B2&&B1 > B3) {
		B1 = B1 + Bb;
		printf("The manager1 is the best: %LF $\n", B1);
	}
	else {
		printf("The income of the manager1: %LF $\n", B1);
	}
	if (B2 > B1&&B2 > B3) {
		B2 = B2 + Bb;
		printf("The manager2 is the best: %LF $\n", B2);
	}
	else {
		printf("The income of the manager2: %LF $\n", B2);
	}
	if (B3 > B1&&B3 > B2) {
		B1 = B1 + Bb;
		printf("The manager3 is the best: %LF $\n", B3);
	}
	else {
		printf("The income of the manager3: %LF $\n", B3);
	}
	scanf_s("%LF", &B1);
	return 0;
}