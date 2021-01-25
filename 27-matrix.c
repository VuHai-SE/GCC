// array2d: deminasional

#include <stdio.h>
#include <stdlib.h>

const int MAX =100;

void inputMatrix (int matrix[][MAX], int *sizey, int *sizex);
void outputMatrix (int matrix[][MAX], int sizey, int sizex);
void swapMatrix (int matrix[][MAX], int *sizey, int *sizex);
int checkMagicSquare (int matrix[][MAX], int sizey, int sizex);

int main ()
{
    int matrix[MAX][MAX];
    int sizey =0;
    int sizex =0;
    inputMatrix (matrix, &sizey, &sizex);
    outputMatrix (matrix, sizey, sizex);
    
    if (checkMagicSquare (matrix, sizey, sizex)==0){
        printf("\nkhong phai.");
    }else {
        printf ("\nphai");
    }

    return 0;
}

void inputMatrix (int matrix[][MAX], int *sizey, int *sizex){
    printf ("\nnhap y: ");
    scanf ("%d", sizey);
    printf ("\nnhap x: ");
    scanf ("%d", sizex);
    for (int y=0; y<= *sizey -1; y++){
        for (int x=0; x<=*sizex-1; x++){
        printf ("\nMatrix[%d][%d] = ",y,x);
        scanf ("%d", &matrix[y][x]);
        }
    }

}

void outputMatrix (int matrix[][MAX], int sizey, int sizex){
    for (int y=0; y<=sizey -1;y++){
        for (int x=0; x<=sizex-1;x++){
            printf ("%5d", matrix[y][x]);
        }
        printf("\n\n");
    }
}

void swapMatrix (int matrix[][MAX], int *sizey, int *sizex){
    int max = *sizex;
    if (*sizex< *sizey){
        max =*sizey;
    }
    int matrixTmp[max][max];
    for (int y=0; y<= max -1; y++){
        for (int x=0; x<=max -1; x++){
            matrixTmp[y][x]=matrix[x][y];
        }
    }
    //copy
    for (int y=0; y<= max -1; y++){
        for (int x=0; x<=max -1; x++){
            matrix[y][x]= matrixTmp[y][x];
        }
    }
    int tmp = *sizex;
    *sizex = *sizey;
    *sizey = tmp;
}

int checkMagicSquare (int matrix[][MAX], int sizey, int sizex){
    if (sizex!=sizey) return 0;
// tong
    int SUM =0;
    for (int i=0; i<=sizex-1; i++){
        SUM += matrix[0][i];
    }
// ngang
    int sum=0;
    for (int i=1; i<=sizey-1; i++){
        for (int j=0; j<=sizex-1;j++){
            sum += matrix[i][j];
        }
        if (sum!=SUM) return 0;
        sum =0;
    }
// doc
    for (int i=0; i<=sizex-1; i++){
        for (int j=0; j<=sizey-1;j++){
            sum += matrix[i][j];
        }
        if (sum!=SUM) return 0;
        sum =0;
    }
// huyen
    for (int i=0; i<=sizex-1; i++){
        sum += matrix[i][i];
    }
    if (sum!=SUM) return 0;
    sum =0;
// sac
    for (int i=0; i<=sizey-1; i++){
        for (int j=0; j<=sizex-1;j++){
            if (i+j==sizex-1){
                sum += matrix[i][j];
            }
        }
    }
    if (sum!=SUM) return 0;
    return 1;
}