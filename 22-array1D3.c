// concat: noi

// divide: tach
#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;

void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void concatArray (int array1[], int size1, int array2[],int size2, int array3[], int *size3);
void concatArrayV2 (int array1[], int *size1, int array2[],int size2);
void divideArray (int array1[], int size1, int array2[], int *size2, int array3[], int *size3, int pos);
void divideArrayV2 (int array1[], int *size1, int array2[], int *size2,int pos);

int main ()
{
    int array1 [MAX];
    int size1 = 0;
    int array2 [MAX];
    int size2 =0;
    int array3 [MAX];
    int size3 =0;
    int pos;

    printf ("\nnhap mang 1: ");
    inputArray (array1, &size1);
    printf ("\nnhap mang 2: ");
    inputArray (array2, &size2);
    
    printf("\nMang1:");
    outputArray(array1,size1);
    printf("\nMang2:");
    outputArray(array2,size2);

    concatArray (array1,size1,array2, size2,array3, &size3);
    printf("\nMang1:");
    outputArray(array1,size1);
    printf("\nMang2:");
    outputArray(array2,size2);
    printf("\nMang3:");
    outputArray(array3,size3);

    printf ("\n====================");

    concatArrayV2 (array1, &size1, array2, size2);
    printf("\nMang1:");
    outputArray(array1,size1);

    printf ("\n====================");

    do{
        printf("\nnban muon cat tai dau: ");
        scanf ("%d", &pos);
        fflush (stdin);
        if (pos<0 || pos>=size1){
            printf("\nvui long nhap dung");
        }
    } while (pos<0 || pos>=size1);
    divideArray (array1, size1, array2, &size2, array3, &size3, pos);
    printf("\nMang1:");
    outputArray(array1,size1);
    printf("\nMang2:");
    outputArray(array2,size2);
    printf("\nMang3:");
    outputArray(array3,size3);

    printf ("\n====================");

    divideArrayV2 (array1, &size1, array2, &size2, pos);
    printf("\nMang1:");
    outputArray(array1,size1);
    printf("\nMang2:");
    outputArray(array2,size2);

    return 0;
}

void inputArray(int array[], int *size) {
    printf ("\nnhap kich thuoc mang: ");
    scanf ("%d", size);
    for (int i=0; i<= *size-1; i++){
        printf ("\nArray[%d]= ", i);
        scanf ("%d", &array[i]);
    }
}

void outputArray (int array[], int size) {
    for (int i=0; i<=size-1;i++){
        printf ("%5d", array[i]);
    }
}

// concatV1
void concatArray (int array1[], int size1, int array2[],int size2, int array3[], int *size3) {
    for(int i = 0 ; i<= size1-1; i++){
        array3[*size3] = array1[i];
        (*size3)++;
    }
    for(int i = 0 ; i<= size2-1; i++){
        array3[*size3] = array2[i];
        (*size3)++;
    }
}

// concatV2
void concatArrayV2 (int array1[], int *size1, int array2[],int size2){
    for (int i=0; i<=size2 -1; i++){
        array1[*size1] = array2[i];
        (*size1)++;
    }
}

//divideV1
void divideArray (int array1[], int size1, int array2[], int *size2, int array3[], int *size3, int pos){
    (*size2)=0;
    (*size3)=0;
    for (int i=0;i<=pos-1;i++){
        array2[*size2]= array1[i];
        (*size2)++;
    }
    for (int i=pos;i<= size1-1;i++){
        array3[*size3]= array1[i];
        (*size3)++;
    }
}

//divideV2
void divideArrayV2 (int array1[], int *size1, int array2[], int *size2,int pos){
    (*size2)=0;
    for (int i=pos; i<=*size1-1;i++){
        array2[*size2]= array1[i];
        (*size2)++;
    }
    (*size1)=pos;
}