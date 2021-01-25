#include <stdio.h>
void swap(int *a, int *b);

int main()
{
    int a, b;
    printf("\nnhap a :");
    scanf("%d", &a);
    printf("\nnhap b :");
    scanf("%d", &b);
    swap(&a,&b);
    printf("a = %d, b = %d",a,b);
    return 0;
}
void swap(int *a, int *b){
    int tmp = *a;
        *a = *b;
        *b = tmp;
}