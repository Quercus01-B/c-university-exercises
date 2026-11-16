#include <stdio.h>
int main ()
{
    int year;
    printf("please inter year:");
    scanf("%d",&year);
  if (year % 400==0) { printf("%dis a leap year",year);}
  else{ if (year % 100==0) { printf("%dis not a leap year",year);} 
 else  { if (year % 4==0) {printf("%d is a leap year",year);}
else {{printf("%dis not a leap year",year);}
 }
    }
         }
 
         
return 0 ;
}