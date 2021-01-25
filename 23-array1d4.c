// mảng một chiều nâng cao 

/*bài 1: xây dựng hàm tìm kiếm 1 phần tử trong mảng
ví dụ nhét mảng, size và value cần tìm
hàm sẽ cung cấp cho ta vị trí của value đó
findElementInArray */

#include <stdio.h>
#include <stdlib.h>

void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int findElementInArray(int array[], int size,int key);
void insertElementIntoArray (int array[], int *size, int pos, int value);
void deleteElement(int array[], int *size, int pos);
void removeDuplicate(int array[], int *size);
const int MAX=100;

int main ()
{
    int array[MAX];
    int size;
    int key;

    printf("\nNhap mang : ");
    inputArray(array,&size);
    printf ("\nmang: ");
    outputArray(array, size);

    printf("\nBan muon tim so nao: ");
    scanf("%d",&key);
    if (findElementInArray(array,size,key)==-1){
        printf("\nkhong co so do nha!!");
    }else{
        printf("\nso ban can tim dung o vi tri thu: %d", (findElementInArray(array,size,key)+1));
    }


    //insertElementIntoArray

    int pos;
    do{
        printf ("\nvui long nhap vi tri can nhet: ");
        scanf ("%d", &pos);
        if (pos<0||pos>size){
            printf ("\nvui long nhap dung!");
        }
    }while (pos<0||pos>size);

    int value;
    printf("\nvui long nhap value can nhet: ");
    scanf ("%d", &value);

    insertElementIntoArray(array,&size,pos,value);
    printf("\nmang vua tao la: ");
    outputArray(array, size);


    // deleteElement

    int pos;
    do{
        printf ("\nvui long nhap vi tri can xoa: ");
        scanf ("%d", &pos);
        if (pos<0||pos>size-1){
            printf ("\nvui long nhap dung!");
        }
    }while (pos<0||pos>size-1);

    deleteElement(array, &size, pos);
    printf("\nmang vua xoa la: ");
    outputArray(array, size);


    // removeDuplicate

    removeDuplicate(array,&size);
    printf("\nmang vua xoa duplicate la: ");
    outputArray(array, size);

    return 0;
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

int findElementInArray(int array[], int size,int key){
    for (int i=0;i<=size-1;i++){
        if (array[i]==key){
            return i;
        }
    }
    return -1;
}

void insertElementIntoArray (int array[], int *size, int pos, int value){
    for (int i= *size; i>= pos+1; i--){
        array[i]=array[i-1];
    }
    array[pos]= value;
    (*size)++;
}

void deleteElement(int array[], int *size, int pos){
    for (int i=pos; i<= *size-2;i++){
        array [i]= array[i+1];
    }
    (*size)--;
}

void removeDuplicate(int array[], int *size){
    int tmp[MAX];
    int sizeTmp=0;
    for (int i=0; i<=*size -1; i++){
        int pos = findElementInArray(tmp,sizeTmp,array[i]);
        if (pos==-1){
            tmp[sizeTmp]=array[i];
            sizeTmp++;
        }
    }
    //copy
    (*size)=0;
    for (int i=0; i<=sizeTmp-1;i++){
        array[*size]=tmp[i];
        (*size)++;
    }
}