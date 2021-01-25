#include <stdio.h>
void toUpperCaseV1 (void) ;
void toUpperCaseV2 (char ch);
char toUpperCaseV3 (void);
char toUpperCaseV4 (char key);

int main ()              // V1
{
    toUpperCaseV1();
    return 0;
}

void toUpperCaseV1 (void) {
    char key;
    printf ("\nnhap 1 ky tu: ");
    scanf ("%c", &key);

    if (key>=97 && key <=122){
        key = key-32;
    }
    printf("\nkey=%c\n", key);
}



int main ()              // V2
{
    char key;
    printf ("\nnhap 1 ky tu: ");
    scanf ("%c", &key);
    toUpperCaseV2(key);
    return 0;
}

void toUpperCaseV2 (char ch) {
    if (ch>=97 && ch <=122){
        ch = ch-32;
    }
    printf("\nkey=%c\n", ch);
}  
// pass by value: truyen tham tri
// muon gia tri tham khao
// khong lam thay doi gia tri goc



int main (){             //V3
    char ch= toUpperCaseV3 (); //phai hung kq
    printf ("\n%c\n", ch);
    return 0;
}

char toUpperCaseV3 (void){
    char key;
    printf ("\nnhap 1 ky tu: ");
    scanf ("%c", &key);

    if (key>=97 && key <=122){
        key = key-32;
    }
    return key;
}



int main (){             //V4
    char key;
    printf ("\nnhap 1 ky tu: ");
    scanf ("%c", &key);
    key = toUpperCaseV4 (key); //thay doi key ban dau
    printf ("\n%c\n", key);
    return 0;
}

char toUpperCaseV4 (char key){
    if (key>=97 && key <=122){
        key = key-32;
    }
    return key;
}
