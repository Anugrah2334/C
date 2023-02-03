#include <stdio.h>
void main()
{
    int num1,num2,temp;
    printf("\n To understand the concept of swap:");
    printf("\n Enter value of num1 and num2:");
    scanf("%d%d",&num1,&num2);
    printf("\n Swapping performs!");
    temp=num1;
    num1=num2;
    num2=temp;
    printf("\n After swapping num1=%d and num2=%d",num1,num2);
}