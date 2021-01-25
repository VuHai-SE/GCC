#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int MAX =100;

int findStringInString (char str1[], char str2[]);

int main()
{
    char str1[MAX];
    char str2[MAX];

    printf("\nNhap chuoi di ban: ");
    gets (str1);
    printf ("\nBan muon tim tu nao tu chuoi: ");
    gets (str2);

    if (findStringInString(str1,str2)==-1){
        printf("\nKhong tim thay chuoi!!");
    }else{
        printf ("\nTim thay chuoi 2 tai: %d", findStringInString(str1,str2));
    }
    
    return 0;
}

int findStringInString (char str1[], char str2[]){
    int flag =-1;
    int j=0;
    for (int i=0; i<=strlen(str1) -1; i++){
        if (str1[i]==str2[0]){
            flag = i;
            for (j; j<=strlen(str2)-1; j++){
                if (str1[i] != str2[j]){
                    break;
                }
                i++;
            }
            if (j==strlen(str2)){
                return flag;
            }else{
                flag=-1;
            }
        }
    }
}
/*
int findStringInString (char str1[], char str2[]){
    int flag =-1;
    int j=0;
    for (int i=0; i<=strlen(str1) -1; i++){
        if (str1[i]==str2[0]){
            flag=i;
            while (str1[i]=str2[j]){
                i++;
                j++;
            }
        if (j==strlen(str2)){
            return flag;    
        }
        flag=-1; 
        }
    }
}*/