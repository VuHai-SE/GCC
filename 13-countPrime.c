#include <stdio.h>
int main()
{
    int start, end;
    int temp;
    int flag=1;
    printf ("\nnhap start; ");
    scanf ("%d",&start);
    fflush (stdin);
    printf ("\nnhap end: ");
    scanf ("%d", &end);
    if (start > end) {
        temp = start;
        start = end;
        end = temp;
    }
    for (int i=start; i<= end; i++){
        flag=1;
        if (i>=2){
            for (int j=2; j<=i-1;j++){
                if (i%j==0){
                    flag =0;
                }
            }
            if (flag==1){
                printf ("%5d",i);
            }
        }
    }
    printf ("\n");
    return 0;
}