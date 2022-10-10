#include <stdio.h>
int main()
{
	float A, B;
	printf("enter A and B (A>B>0)\n");
	scanf_s("%f%f", &A, &B);
	if (A < B || A <= 0 || B <= 0)// проверяем на положительность и a<b
		printf("error: condition A>B>0 not met ");
	else
	{
		while (A >= B)
		{
			A = A - B;
		}
		printf("unoccupied part of the segment is %.2f\n", A);
	}
	return 0;

}