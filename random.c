#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number;
    int upper=150;
    int lower =50;

    srand(time(NULL));

    number= rand()%50;
    printf("%d\n",number);

    number= rand()%10;
    printf("%d\n",number);

    number=(rand()%(upper - lower));
    printf("%d\n",number);
    return 0;
}