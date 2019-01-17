#include <stdio.h> 
#include <iostream> 
#include <locale> 

void Task1() {

	int a[8], sum = 0;

	for (int i = 0; i < 8; i++) {
		a[i] = 0 + rand() % 2;
		printf("%d ", a[i]);
	}
	printf("\n");
	for (int i = 8; i > 0; i--) {
		if (a[i] == 1)
			sum += pow(2, i);
	}
	printf("%d\n", sum);
}

void Task2() {

	int a[3][3], min = 10, max = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("a[%d][%d] = ", i, j);
			scanf_s("%d", &a[i][j]);
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (a[i][j] < min)
				min = a[i][j];
		}
		if (min > max)
			max = min;
	}
	printf("max is: %d\n", max);
}

void Task3() {

	int a[5][5], x, y;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			a[i][j] = 10 + rand() % 90;
			printf("%d ", a[i][j]);
		}
	}
	printf("\n");

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			x = a[i][j] / 10;
			y = a[i][j] % 10;
			printf("%d ", y * 10 + x);
		}
	}
	printf("\n");
}

void Task5() {

	int a[5][5];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			a[i][j] = 0 + rand() % 21;
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (a[i][j] == a[i][j + 1])

		}
	}
}

int main() {

	setlocale(LC_ALL, "");

	int a;

	do {
		printf("Введите номер задания: ");
		scanf_s("%d", &a);

		switch (a) {

		case 1: Task1(); break;
		case 2: Task2(); break;
		case 3: Task3(); break;

		}

		printf("Хотите продолжить? 1/0\n");
		scanf_s("%d", &a);

	} while (a == 1);

	int A[5][4];
	for (int i = 0; i < 5; i++) // цикл по строкам 
		for (int j = 0; j < 4; j++) { // цикл по столбцам строки 
			printf("A[%d][%d] = "); // подсказка для ввода 
			scanf_s("%d", &A[i][j]); // ввод A[i][j] 
		}
	// работа с матрицей 

	system("pause");
}
