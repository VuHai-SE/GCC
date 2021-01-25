//ep nguoi dung nhap vao dung kieu du lieu
#include<stdio.h>
int main()
{
    int number;// so maf nguoi dung nhap
    char buffer ;// bien dung de hung buffer
    printf("\nvui long nhap so nguyen dich thuc: ");
    scanf ("%d",&number);
    scanf ("%c", &buffer);
    fflush (stdin);
    if (buffer!=10) {
        printf ("\n whatttt");
    }
    return 0;
}