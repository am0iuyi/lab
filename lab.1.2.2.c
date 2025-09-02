#include <stdio.h>
#include <Windows.h>

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float h,v2;
	printf("введите скорость в метрах в скунду");
	scanf_s("%f", &h);

	v2 = h * 3.6;

	printf("%f\n", h);
	printf("%f", v2);


	return 0;
}