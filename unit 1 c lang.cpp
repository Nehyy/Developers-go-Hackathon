#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter a and b values \n");
scanf("%d%d,&a,&b");
printf("******arithmetic operation**********");
printf("\n sum of a+b=%d",a+b);
printf("\n sub of a-b=%d",a-b);
printf("\n multiplication of a*b=%d",a*b);
printf("\n d division of a/b=%d",a/b);
printf("\n modulus of a and b = %d",a%b);
printf("\n***********************************************");
printf("\n**************pre/post increment operations****");
printf("\n value of a is %d",a);
printf("\n value of postincrement a is %d",a++);
printf("\n value of a is %d",a);
printf("\n value of preincrement a is %d",++a);
printf("\n value of %d is a",a);
printf("\n**************************************************************");
printf("\n******** BitWise operations***************************");
printf("\n value of BitWise OR %d|%d is %d",a,b,a|b);
printf("\n value of BitWise AND %d&%d is %d",a,b,a&b);
printf("\n Negation of %d is %d",a,~a);
printf("\n BitWise Right Shift %d>>%d is %d",a,b,a>>b);
printf("\n BitWise Left Shift %d<<%d is %d",a,b,a<<b);
printf("\n BitWise XOR %d^%d is %d",a,b,a^b);
printf("\n*************************************************************\n");  
getch();
}
