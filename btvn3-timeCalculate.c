#include <stdio.h>
#include <math.h>
int main ()
{
    int time, sec;
    printf("\nnhap thoi gian can tinh di na: ");
    scanf ("%d", &time);
    printf ("\n%.2d:%.2d:%.2d\n",time/3600,(time%3600)/60,((time%3600)%60)%60);
    return 0;
}