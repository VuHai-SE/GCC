#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//nhập vào 2 số
//in ra ước chung lớn nhất
//bội chung nhỏ nhất
int ucln(int a, int b);
int bcnn(int a, int b);
int checkPrime(int number);
int checkPerfectNumber(int number);
int checkSquareNumber(int number);
int main()
{
    //printf("bcnn = %d", bcnn(4,15));
    int number;
    printf("\nVui long nhap vao 1 so:");
    scanf("%d", &number);

    if(checkPrime(number) == 1){
        printf("\n%d is prime",number);
    }

    if(checkPerfectNumber(number) == 1){
        printf("\n%d is perfectNumber",number);
    }
    int a = checkSquareNumber(number);
    if(a != 0){
        printf("\n%d is squareNumber of %d",number,a);
    }
    return 0;
}
int ucln(int a, int b){
    if(b == 0){
        return a;
    }
    ucln(b,a%b);
}
int bcnn(int a, int b){
    int max = a;
    if(a < b){
        max = b;
    }
    for(int i = max; i<= a*b; i++){
        if(i%a == 0 && i%b==0){
            return i;
        }
    }
}
int checkPrime(int number){
    if(number>=2){
        for(int i = 2; i<= number - 1; i++){
            if(number % i == 0){
                return 0;
            }
        }
        return 1;
    }
    return 0;
}
int checkPerfectNumber(int number){
    int sum = 0;
    int mul = 1;
    int count = 0;
    for(int i = 1; i<= number - 1;i++){
        if(number % i == 0){
            sum+= i;
        }
    }
    if(number == sum){
            return 1;
    }
    return 0;

}
int checkSquareNumber(int number){
    int a = sqrt(number);
    double b = sqrt(number);
    double c = b - (double)a;
    if(c == 0){
        return a;
    }
    return 0;
}