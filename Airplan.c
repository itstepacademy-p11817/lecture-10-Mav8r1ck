#include <stdio.h>

int main() {

	int w; //��� �����
	int r1; //���������� �-�
	int r2; //���������� �-�
	int V = 300; //����� ���� ��������
	printf("Enter the load weight:\n");
	scanf_s("%d", &w);
	printf("Enter the distance between A-B:\n");
	scanf_s("%d", &r1);
	printf("Enter the distance between B-C:\n");
	scanf_s("%d", &r2);

	if (w <= 500)
		{
		int C = 1; //������ ������� �� ��������
		int Vb = V - (r1*C); //������� ������� � ����
		int V1 = (r2*C) - Vb; //���������� ��������� ������� � ������ �
			if (Vb>=0 && V1 <= V)
			{
			printf("Minimum quantity of fuel for refueling: %d l\n", V1);
			}
			else
			{
			printf("Can not fly on the entered route!");
			}
		}
	else if (w <= 1000) 
		{
		int C = 4; //������ ������� �� ��������
		int Vb = V - (r1*C); //������� ������� � ����
		int V1 = (r2*C) - Vb; //���������� ��������� ������� � ������ �
			if (Vb >= 0 && V1 <= V)
			{
			printf("Minimum quantity of fuel for refueling: %d l\n", V1);
			}
			else
			{
			printf("Can not fly on the entered route!");
			}
		}
	else if (w <= 1500) 
		{
		int C = 7; //������ ������� �� ��������
		int Vb = V - (r1*C); //������� ������� � ����
		int V1 = (r2*C) - Vb; //���������� ��������� ������� � ������ �
			if (Vb >=0 && V1 <= V)
			{
			printf("Minimum quantity of fuel for refueling: %d l\n", V1);
			}
			else
			{
			printf("Can not fly on the entered route!");
			}
		}
	else if (w <= 2000) 
		{
		int C = 9; //������ ������� �� ��������
		int Vb = V - (r1*C); //������� ������� � ����
		int V1 = (r2*C) - Vb; //���������� ��������� ������� � ������ �
		if (Vb>=0 && V1 <= V)
			{
			printf("Minimum quantity of fuel for refueling: %d l\n", V1);
			}
			else
			{
			printf("Can not fly on the entered route!");
			}
		}
	else
		{
		printf("Can not fly on the entered route!");
		}
		scanf_s("%d", &w);
	return 0;
}