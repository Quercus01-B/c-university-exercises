#include <stdio.h>
int main() 
{
float a , b, result;
char op;
printf("pleas Enter 2 number and operator(e.g. 10 + 2:) ");
scanf("%f %c %f",&a,&op,&b);


if(op == '+')
{result = a + b;}
else if(op == '-'){  result = a - b;}
else if(op == '/'){if (b!= 0) {result = a / b;}
else{
    printf("division by ziro");
}
}
else if(op == '*'){  result = a * b;}
else  {printf("not valid operator"); 
}

printf("%.2f your result is:\n ", result);


return 0;
}