/*xoá bộ nhớ đệm 
demo: viết chương trình kêu người dùng nhập tuổi
và nhập ký tự đầu tiên trong tên
sau đó in ra màn hình*/
#include <stdio.h>
int main ()
{
    int age;
    char ch;
    printf("\nnhap tuoi: ");
    scanf ("%d", &age);
    fflush (stdin);         //xoa rac (buffer)
    printf ("\nnhap ky tu dau tien: ");
    scanf ("%c", &ch);
    printf ("\nage = %d,ch=%c",age,ch);
    printf("\n");
}