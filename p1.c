#include<stdio.h>

int main(){
   int inutNum=0;
   puts("Enter a number to check it iseven");
   scanf("%d"  ,&inutNum);
   if(inutNum %2 == 0)
       printf("%d is Even", inutNum);
   else
       printf("%d is odd7", inutNum);
    return 0;
}