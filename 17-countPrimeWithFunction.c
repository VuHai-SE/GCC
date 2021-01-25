/*nhap start va end 
in ra ca so nguyen trong khoang tu start den end 
toi se lam san 1 cai ham dung de checkPrime
tra ra 0 neu khong phai so nguyen to, 1 laf so nguyen to*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int checkPrime (int number);
int main()
{
    int start, end;
    printf ("\nnhap start: ");
    scanf ("%d", &start);
    printf ("\nnhap end: ");
    scanf ("%d", &end);

    if (start >= end){
        int tmp =start;
        start = end;
        end = tmp;
    }

    for (int i= start; i<= end ; i++){
        if (checkPrime(i) == 1){
            printf ("%5d",i);
        }
    }
    return 0;
}

int checkPrime (int number){
    if (number>=2) {
        for (int i=2; i<= number -1;i++){
            if (number%i==0){
                return 0;
            }
        }
        return 1;
    }else{
        return 0;
    }
}
