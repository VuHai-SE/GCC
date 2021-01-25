#include <stdio.h>
#include<math.h>
int main ()
/*{
    int n;
    int a=0;
    printf ("\n nhap n: ");
    scanf ("%d",&n);
    for (int i=1; i<=n;i++) {
        a =a + pow(i,2);
    }
    printf ("\n%d",a);
    return 0;
}*/
{
    int n,x;
    int a=0;
    printf ("\nnhap x vs n:");
    scanf ("%d%d", &x, &n);
    for (int i=1; i<=n;i++) {
        a=a+pow(x,i);
    }
    printf ("\n%d",a);
    printf ("\n");
    return 0;
}