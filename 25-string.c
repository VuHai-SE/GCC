// mảng
// côpy mảng
//concat
//revert

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int  stringLength (char str[]);
void copyString (char str1[], char str2[]);
void concatString(char str1[], char str2[]);
void revertString(char str[]);
void revertStringinorder (char str[]);
void stringUpperCase (char str[]);
void stringLowerCase (char str[]);
void stringUpperFisrt (char str[]);
void stringUFNoneSpace (char str[]);
void reverseWord  (char str[]);
void delChar (char str[], int pos);
void validSpace (char str[]);
void validString (char str[]);

const int MAX = 100;

int main ()
{
    char str [MAX];
    char str2 [MAX];
    printf ("\nnhap chuoi: ");
    //scanf ("%s", str1);
    gets (str);
    //printf ("\nnhap chuoi 2: ");
    //gets (str2);
    //printf("\nchuoi vua nhap la: %s, %d", str1, stringLength(str1));

    stringUFNoneSpace(str);
    printf("\n%s:\n", str);

    return 0;
}

int stringLength (char str[]){
    int i=0;
    while (str[i]!= 0){
        i++;
    }
    return i;
}

void copyString (char str1[], char str2[]){
    for (int i=0;i<=stringLength(str2)-1 ;i++){
        str1[i]=str2[i];
    }
    str1[stringLength(str2)]=0;
}

void concatString(char str1[], char str2[]){
    int l1=stringLength(str1);
    for(int i=0;i <=stringLength(str2)-1; i++){
        str1[l1]=str2[i];
        l1++;
    }
    str1[l1]=0;
}

void revertString(char str[]){
    char strTmp[MAX];
    int i=0;
    for(int l=stringLength(str)-1;l>=0;l--){
        strTmp[i]=str[l];
        i++;
    }
    strTmp[stringLength(str)]=0;
    copyString (str, strTmp);
}

void revertStringinorder (char str[]){
    char strTmp [MAX]; 
    int sizeTmp = 0;
    int mst=stringLength(str)-1;
    for (int i=stringLength(str)-1; i>=0; i--){
        if (str[i]==32){
            for (int j= i+1; j<=mst;j++){
                strTmp[sizeTmp]=str[j];
                sizeTmp ++;
            }
            strTmp[sizeTmp]=32;
            sizeTmp++;
            mst=i-1;
        }
    }
    for (int i=0;i<=mst;i++){
        strTmp[sizeTmp]=str[i];
        sizeTmp++;
    }
    str[stringLength(str)]=0;
    copyString(str, strTmp);
}

void stringUpperCase (char str[]){
    for (int i=0; i<= stringLength(str)-1; i++){
        if (str[i]>=97&&str[i]<=122){
            str[i]=str[i]-32;
        }
    }
}

void stringLowerCase (char str[]){
    for (int i=0; i<= stringLength(str)-1; i++){
        if (str[i] >=65&&str[i]<=90){
            str[i]=str[i]+32;
        }
    }
}

void stringUpperFisrt (char str[]){
    stringLowerCase (str);
    str[0]=str[0]-32;
    for (int i=0; i<=stringLength(str)-1; i++){
        if(str[i]==32){
            str[i+1]=str[i+1]-32;
        }
    }
    str[stringLength(str)]=0;
}

void stringUFNoneSpace (char str[]){
    stringUpperFisrt(str);
    char strTmp[MAX];
    int sizeTmp =0;
    for (int i=0; i<=stringLength(str)-1; i++){
        if (str[i]!=32){
            strTmp[sizeTmp]=str[i];
            sizeTmp ++;
        }
    }
    strTmp[sizeTmp]=0;
    strcpy(str, strTmp);
}

void reverseWord  (char str[]){
    revertString(str);//dao nguoc chuoi goc
    int pos=0;
    char strB[MAX];
    strB[0]=0;// chac chan chuoi nay la rong
    while (str[pos]!=0){//chi dung khi pos dat den cuoi chuoi
        char strTmp[MAX];
        int lengthTmp=0;
        for (int i=pos; i<= stringLength(str)-1; i++){
            if (str[i]==32){
                pos++;
                break;//thoat vong
            }
            strTmp[lengthTmp]=str[i];
            lengthTmp++;
            pos++;
        }
        strTmp[lengthTmp]=0;
        revertString(strTmp);
        concatString (strB, strTmp);
        if (str[pos]!=0){
            concatString (strB," ");
        }
    }
    copyString(str,strB);
} 

void delChar (char str[], int pos){
    for (int i=pos; i<=strlen(str)-1; i++){
        str[i]= str[i+1];
    }
}

void validSpace (char str[]){
    int pos = 0;
    while (str[pos]!=0){
        for (int i=pos; i<= strlen(str)-1;i++){
            if (str[0]==32){
                delChar(str,0);
                break;
            }
            if(str[i]==32&&str[i+1]==32){
                delChar (str,i+1);
                break;
            }
            if (str[i]==32&&str[i+1]==0){
                delChar(str,i);
            }
            pos++;
        }
    }
}

void validString (char str[]){
    validSpace (str);
    tolower (str);
    for (int i=0; i<=strlen(str)-1;i++){
        if (str[i]==32){
            if (str[i+1]>=97 && str[i+1]<=122){
                str[i+1]-=32;
            }
        }
    }
    if (str[0]>=97 && str[0]<=122){
                str[0]-=32;
    }
}

