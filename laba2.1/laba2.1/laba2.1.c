#include <stdio.h>
int main()
{
	int money = 10000;
	int time=0;
	for (double i=money; i <= money*2; i=i*1.03 )
	{
		printf("year %d   sum %.2f\n", time, i);//выводит как изменялась сумма с годами 
		time++;
	}
	printf("through %d year the initial amount will increase by 2 times", time);// выводит через какое колличество лет будет х2
	return 0;
}