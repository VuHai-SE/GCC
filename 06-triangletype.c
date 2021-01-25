#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
    double a,b ,c;
    printf ("\n nhap a,b,c:");
    scanf ("%lf%lf%lf",&a, &b,&c);
    if(a+b>c && a+c>b && b+c>a) {
        if (a== b||b==c||a==c){
            if (a==b &&b==c){
                printf ("\ntam giac deu");
            }else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){
            printf("\ntam giac vuong can");
            }else{
            printf("\ntam giac can");}
        }else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){
            printf("\ntam giac vuong");
        }else{
            printf("\ntam giac thuong");
        }
    }else{
        printf ("\n3 canh k tao thanh tam giac");
    }
    printf ("\n");
    return 0;
}