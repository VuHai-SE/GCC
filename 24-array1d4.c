/* nhập vào một mảng
sắp xếp mảng đó theochieefu tăng dần cẩu giá trị*/

#include <stdio.h>
#include <stdlib.h>

void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void sortArrayAsc(int array[], int size);

const int MAX=100;

int main ()
{
    int array[MAX];
    int size;

    printf ("\nnhap mang: ");
    inputArray (array, &size);
    printf("\nmang: ");
    outputArray (array, size);

    sortArrayAsc(array,size);
    printf("\nmang: ");
    outputArray (array, size);
}

void inputArray(int array[], int *size){
    printf("\nnhap kich thuoc mang: ");
    scanf ("%d",size);
    for (int i=0; i<=*size-1;i++){
        printf("\nArray[%d]=", i);
        scanf ("%d", &array[i]);
    }
}

void outputArray(int array[], int size){
    for (int i=0;i<=size-1;i++){
        printf("%5d", array[i]);
    }
}

void sortArrayAsc(int array[], int size){
    for (int i=0;i<=size-1;i++){
        for (int j=i+1;j<=size-1;j++){
            if (array[i]>array[j]){
                int tmp= array[i];
                array [i]=array[j];
                array[j]= tmp;
            }
        }
    }
}