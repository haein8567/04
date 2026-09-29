#include <stdio.h>

int main(void)
{
    int sec;

    printf("input the seconds");
    scanf("%i", &sec);
    printf("The time is %i : %i\n" , sec/60, sec%60);

    return 0;

}