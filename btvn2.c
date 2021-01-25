/*tinh tong cac phan tu trong 1 so
1234=> 1+2+3+4*/
#include<stdio.h>
int main ()
{
    int number;
    int sum=0;
    printf("\nnhap n: ");
    scanf ("%d",&number);
    do{
        sum = sum + number%10;
        number=number/10;
    }while (number !=0) ;
    printf("\n tong cac phan tu la %d\n",sum);
    return 0;
}