/* giai thừa
nhập vào số nguyên n
tính n!*/
#include <stdio.h>
int main ()
{
    int n;
    int a=1;
    printf("\n nhập n:");
    scanf ("%d",&n);
    for (int i=1;i<=n;i++) {
        a*=i;
    }
    printf ("\n giai thua la: %d", a);
    printf ("\n");
    return 0;
}