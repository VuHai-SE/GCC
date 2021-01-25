#include <stdio.h>
#include <stdlib.h>

void biggerInteger(int x, int y);

int main(){
    int a,b;

    printf("plz input a vs b: ");
    scanf("%d%d",&a, &b);

    biggerInteger(a,b);

    return 0;
}

void biggerInteger(int x, int y){
    if(x>y){
        printf("%d",x);
    }else{
        printf("%d",y);
    }
}