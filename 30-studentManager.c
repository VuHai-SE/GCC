/* 30-studentManager
 viết ứng dụng quản lý sinh viên
 với menu gồm
1. add new student
2. show student list
3. show student by id
4. update student by id
5. remove student by id
6. sort student by id
7. quit

chương trình tiếp nhận yêu cầu của người dùng
dưới dạng số
nếu người dùng nhập lựa chọn là chữ thì bị ép nhập lại
nếu ngừoi dùng nhập số lớn hơn các option trong menu thì ép nhập lại
ngừoi dùng sẽ thực hiện các thao tác dựa trên menu tương ứng với các lựa chọn
làm xong lựa chọn thì quay lại màn hình chính
chỉ ngưng chương trình khi chọn option 7 */

#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

const int MAX=100;

void showMenu (void);
void addStudent(char id[][MAX], char name[][MAX], int yob[], double point[], int *size);
void showStudent(char id[][MAX], char name[][MAX], int yob[], double point[], int size);
int  findIndexById (char id[][MAX], int size, char key[]);
void findStudentByPos (char id[][MAX], char name[][MAX], int yob[], double point[], int size);
void updateStudentByPos (char id[][MAX], char name[][MAX], int yob[], double point[], int size);
void removeStudentByPos (char id[][MAX], char name[][MAX], int yob[], double point[], int *size);
void sortStudent (char id[][MAX], char name[][MAX], int yob[], double point[], int size);

int main ()
{
    char id[MAX][9];
    char name[MAX][40];
    int yob[MAX];
    double point[MAX];
    int choice;
    char buffer;
    int size=0;

    do{
        showMenu();
        do{
            printf("\ninput your choose: ");
            scanf("%d", &choice);
            scanf("%c", &buffer);
            fflush (stdin);
            if (buffer !=10){
                printf ("\ndo you know?");
            }
        }while (buffer!=10);

        switch (choice){
            case 1:{
                addStudent(id, name, yob, point, &size);
                break;
            }
            case 2:{
                showStudent(id, name, yob, point, size);
                break;
            }
            case 3:{
                findStudentByPos(id, name, yob, point, size);
                break;
            }
            case 4:{
                break;
            }
            case 5:{
                break;
            }
            case 6:{
                sortStudent (id, name, yob, point, size);
                break;
            }
            case 7:{
                printf("\nSee ya!!");
                break;
            }
            default: {//else
                printf("\nyou're required to input from 1 to 7");
                break;
            }
        }
    }while (choice!=7);
    return 0;
}

void showMenu (void){
    printf("\n1. add new student");
    printf("\n2. show student list");
    printf("\n3. show student by id");
    printf("\n4. update student by id");
    printf("\n5. remove student by id");
    printf("\n6. sort student by id");
    printf("\n7. quit");
}

void addStudent(char id[][MAX], char name[][MAX], int yob[], double point[], int *size){
    printf("\nAdd new student");

    while (1==1){
        int isFind =0;
        printf("\nPlz input ID: ");
        gets(id[*size]);
        fflush(stdin);
        for (int i=0; i<= *size -1; i++){
            if(strcmp (id[i],id[*size])==0){
                isFind =1;
            }
        }
        if(isFind==1){
            printf("\nID is existed");
        }else{
            break;
        }
    }
    printf("\nName: ");
    gets(name[*size]);
    fflush(stdin);

    printf("\nYob: ");
    scanf("%d", &yob[*size]);
    fflush(stdin);

    printf("\nPoint: ");
    scanf("%lf", &point[*size]);
    fflush(stdin);

    (*size)++;
}

void showStudent(char id[][MAX], char name[][MAX], int yob[], double point[], int size){
    if (size==0){
        printf("\nNothing to print!!");
    }
    for (int i=0; i<=size-1;i++){
        printf("\n%-10s| %-20s| %4d| %5.2lf", id[i], name[i], yob[i], point[i]);
    }
}

int  findIndexById (char id[][MAX], int size, char key[]){
    for (int i=0; i<= size -1; i++){
        if(strcmp(id[i], key)==0){
            return i;
        }
    }
    return -1;
}

void findStudentByPos (char id[][MAX], char name[][MAX], int yob[], double point[], int size){
    char key[MAX];
    printf ("\nplz input your ID you want to find: ");
    gets (key);
    int pos = findIndexById(id, size, key);
    if (pos ==-1 ){
        printf("\nnothing to print!");
    }else{
        printf("\n%-10s| %-20s| %4d| %5.2lf", id[pos], name[pos], yob[pos], point[pos]);
    }
}

void updateStudentByPos (char id[][MAX], char name[][MAX], int yob[], double point[], int size){
    char key[MAX];
    printf ("\nplz input your ID you want to update: ");
    gets (key);
    int pos = findIndexById(id, size, key);
    if (pos ==-1 ){
        printf("\nnothing to print!");
    }else{
        printf("\nStudent before update:");
        printf("\n%-10s| %-20s| %4d| %5.2lf", id[pos], name[pos], yob[pos], point[pos]);
        
        printf("\nNew name: ");
        gets (name[pos]);
        fflush (stdin);

        printf("\nStudent after update:");
        printf("\n%-10s| %-20s| %4d| %5.2lf", id[pos], name[pos], yob[pos], point[pos]);
    }
}

void removeStudentByPos (char id[][MAX], char name[][MAX], int yob[], double point[], int *size){
    char key[MAX];
    printf ("\nplz input your ID you want to remove: ");
    gets (key);
    int pos = findIndexById(id, *size, key);
    if (pos ==-1 ){
        printf("\nnothing to print!");
    }else{
        printf("\nStudent before removing:");
        printf("\n%-10s| %-20s| %4d| %5.2lf", id[pos], name[pos], yob[pos], point[pos]);
        
        for (int i=pos; i<=*size-1;i++){
            strcpy (id[i],id[i+1]);
            strcpy(name[i], name[i+1]);
            yob[i]= yob[i+1];
            point [i]=point [i+1];
        }
        (*size)--;
        printf("\nRemoving is successful!!!");
    }
}

void sortStudent (char id[][MAX], char name[][MAX], int yob[], double point[], int size){
    for (int i=0; i<=size-2; i++){
        for (int j=i+1;j<=size-1;j++){
            if (point[i]>point[j]){
                double tmp= point[i];
                point [i]=point[j];
                point[j]= tmp;

                char idTmp[MAX];
                strcpy (idTmp, id[i]);
                strcpy (id[i], id[j]);
                strcpy (id[j], idTmp);

                char nameTmp[MAX];
                strcpy (nameTmp, name[i]);
                strcpy (name[i], name[j]);
                strcpy (name[j], nameTmp);

                int tmp1= yob[i];
                yob [i]=yob[j];
                yob[j]= tmp1;
            }
        }
    }
    printf ("\nSorting is successful!");
}
