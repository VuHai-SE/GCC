#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//array1d2;
const int MAX = 100;

void inputArray(int array[], int *size);
void outputArray(int array[], int size);

int main()
{
	int array1[MAX];
	int size1 = 0;
	//input
	inputArray(array1, &size1);
	//input
	printf("\nMang cua nhap la:");

	//output
	outputArray(array1, size1);
	//output

    return 0;
}

void inputArray(int array[], int *size ){
	printf("\n vui long nhap kich thuoc cho mang: ");
	scanf("%d", size);
	for(int i = 0; i <= *size - 1; i++){
		printf("\nArray[%d] = ", i);
		scanf("%d", &array[i]); //Nhap array
	}
}

void outputArray(int array[], int size){
	for( int i = 0; i <= size -1; i++){
		printf("%5d", array[i]);
	}
}