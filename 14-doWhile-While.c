#include<stdio.h>
int main()
{
    int number;// so maf nguoi dung nhap
    char buffer ;// bien dung de hung buffer
    do{
    printf("\nvui long nhap so nguyen dich thuc: ");
    scanf ("%d",&number);
    scanf ("%c", &buffer);
    fflush (stdin);
    if (buffer!=10) {
        printf ("\n whatttt\n");
    }
    }while(buffer!=10);
    return 0;
}
