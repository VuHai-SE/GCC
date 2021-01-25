/* nhap vao mot so nguyen n
kiem tra xem do co phai la so nguyen to hay khoong*/
#include <stdio.h>
int main()
{
    int number ;
    int flag=1;
    printf ("\nnumber=?");
    scanf ("%d",&number);
    if(number >= 2) {
        for (int i=2;i<=number-1;i++){
            if (number%i ==0){
                flag =0;
            }
        }
        if (flag==1){
            printf ("\n%d is prime", number);
        }else{
            printf ("\n%d is not prime", number);
        }
    }else{
        printf ("\n%d is not prime", number);
    }
    return 0;
}