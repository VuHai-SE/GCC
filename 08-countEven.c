/* nhập vào start vs end
in ra màn hình các số chẵn có trong khoảng
từ start đến end */
#include <stdio.h>
int main ()
{
    int start, end;
    int count =0;
    int sum = 0;
    printf ("\n vui long nhap start: ");
    scanf ("%d",&start);
    printf ("\n vui long nhap end: ");
    scanf ("%d",&end);
    if (start > end) {
        int tmp = start;
        start = end ;
        end =tmp;
    }
    for (int i= start; i<=end ; i++) {
        if (i%2==0){
            printf ("%5d",i);     //phân cách 5 ô
            count ++;
            sum = sum +i;
        }
    }
    printf ("\nco tat ca %d so chan trong khoang", count);
    printf ("\n tong cac so chan la: %d",sum);
    return 0;
}