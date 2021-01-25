#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

const int MAX=100;

int main ()
{
   char id[4][MAX];
   int size =0;
   printf ("\nBan muon nhap bao nhieu nguoi: ");
   scanf ("%d", &size);
   fflush (stdin);
   
   for (int i=0; i<= size-1; i++){
	   printf("\nNhap id cua ban thu %d: ", i);
	   gets(id[i]);
	   fflush (stdin);
   }
   for (int i=0; i<= size-1; i++){
	   printf("\nId của bạn thứ %d là: %s", i, id[i][1]);
   }
   return 0;
}