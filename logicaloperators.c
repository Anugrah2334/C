#include <stdio.h>
void main()
{
    int age1,age2,age3;
    printf("\n To understand AND operator");
    printf("\n To find eldest person maong three:");
    printf("\n Enter age of first person:");
    scanf("%d",&age1);
    printf("\n Enter age of secong person:");
    scanf("%d",&age2);
    printf("\n Enter age of third person:");
    scanf("%d",&age3);
    printf("\n Now we apply if wit`h AND");
    if(age1>age2 && age1>age3)
    {
        printf("\n the first person is eldest");
        printf("\n His age is:%d",age1);
    }
    else if(age2>age1 && age2>age3)
    {
        printf("\n The second person is eldest");
        printf("\n His age is:%d",age2);
    }
    else
    {
        printf("\n The third person id eldest:");
        printf("\n His age is:%d",age3);
    }
}