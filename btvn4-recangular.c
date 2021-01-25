#include <stdio.h>
#include <math.h>
int main ()
{
    float s1,s2,s3,s;
    float l,w,h;
    printf ("\nnhap vao dien tich 3 mat: ");
    scanf ("%f%f%f", &s1,&s2,&s3);
    if ( s1<=0 || s2<=0 || s3<=0){
        printf ("\n khong co so do nao thoa man");
    } else {
        s=sqrt(s1*s2*s3);
        printf ("\nchieu dai hinh hop la: %.2f", l= (s1*s2)/s);
        printf ("\nchieu rong hinh hop la: %.2f", w= (s2*s3)/s);
        printf ("\nchieu cao hinh hop la: %.2f\n", h=(s1*s3)/s);
    }
    return 0;
}