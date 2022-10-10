#include <stdio.h>
int Prime(int koren)
{
    for (int i = 2; i < koren; i++)
        if (koren % i == 0)
            return 0;
    return 1;// функция проверяет число на простоту 

}

int main()
{
    int num, a, b, c;


    for (int koren=10; koren <= 31; koren++)
    {
        if (Prime(koren) == 1)
        {
            num = koren * koren;
            a = num % 10;
            b = (num % 100 - a) / 10;
            c = (num - a - 10*b) / 100;
            if (a > b && b > c)
                printf("num=%d\n", num);
        }
    }
}