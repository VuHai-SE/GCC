/*nhập vào 1 ký tự 
nếu là thươngf thì in hoa
nếu là in hoa thì giữ nguyên 
cuối cùng in ra kết quả*/

#include <stdio.h>
int main ()
{
    char key;
    printf ("\nnhap 1 ky tu: ");
    scanf ("%c", &key);

    if (key>=97 && key <=122){
        key = key-32;
    }
    printf("\nkey=%c\n", key);
    return 0;
}