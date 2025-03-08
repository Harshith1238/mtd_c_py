#include<stdio.h>
#include<math.h>

int main(){
    int averageNum = 0;
    puts("Enter average score of the student to print result :");
    scanf("%d", &averageNum);

  if (averageNum >= 0 && averageNum <= 49)
    puts("Result is fail");
  else if (averageNum >= 50 && averageNum <= 70)
    puts("Result is second class");
  else if(averageNum >= 71 && averageNum <= 90)
     puts("result is first class");
  else if(averageNum >= 91 && averageNum <= 100)
    puts("result is distiction class");
  else
     puts("Invalid score");

    
return 0;

}