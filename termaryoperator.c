#include<stdio.h>
void main()
{
    int age;
    int value;
    int age1,age2;
    printf("\n Enter age of first person:");
    scanf("%d",&age1);
    printf("\n Enter age of second person:");
    scanf("%d",&age2);
    printf("\n Using temary operator to find elder:");
    (age1>age2)?(printf("\n first person is younger:")):(printf("\nSecond person is elder"));
    age=(age1>age2)?age1:age2;
    printf("As per termary operation age is=%d",age);
    value=(age1>age2)?1:0;
    if(value==1)
    printf("\n Condition is true in termary operation");
    else printf("\n FALSE");
}