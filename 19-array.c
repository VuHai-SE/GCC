#include <stdio.h>
#include <stdlib.h>
//primitive Array: mang nguyen thuy
int main()
{
    char array[2] = {}; //ghi so 0truoc quy ra bien he 8 octal constant => so lon bang 8 quy ve so nho hon
    
    printf("\ndia chi cua bien dau tien: %x", &array[0]);
    printf("\nValue cua array %u", array[6]);
    //6422016 + 4* vi tri dung
    
    for(int i = 0; i <= 5; i++){
		  printf("%5c", array[i]);
    }
    
    return 0;
}