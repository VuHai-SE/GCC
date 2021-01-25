#include <stdio.h>
#include <math.h>
int main ()
{
    double a, b, c, delta, x, y;
    printf ("\n nhap a, b, c:");
    scanf ("%lf %lf %lf", &a,&b,&c);
    if (a==0) {
        if (b==0){
            if (c==0) {

            }else {

            }
        }
    }
    if (delta > 0) {
        delta = pow(b,2) - 4*a*c;
        x = (-b-sqrt(delta))/(2*a);
        y = (-b +sqrt (delta))/(2*a);
        printf ("\n pt co 2No x=%lf, y=%lf",x, y);
    }else if (delta == 0) {
            x = (-b)/(2*a);
            printf ("\n pt co No kep x= y= %lf",x);
    }else {
        printf ("\n pt vo No");
    }  
    printf ("\n");
    return 0;
}