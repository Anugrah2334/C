#include<stdio.h>
void main()
{
    int choice;
    int num1,num2,sum,sub,prod;
    printf("\nTo understand switch!");
    printf("\n Enter your choice as below:");
    printf("\n***Press 1 to add***\n***Press 2 to subtract***\n***Press 3 to multiply***");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("\n Enter value of num1 and num2");
        scanf("%d%d",&num1,&num2);
        printf("\n As per your choice sum of num1 and num2=%d",sum=num1+num2);
        break;
           case 2:printf("\n Enter value of num1 and num2");
        scanf("%d%d",&num1,&num2);
        printf("\n As per your choice difference of num1 and num2 is:%d",sub=num1-num2); 
        break;
         case 3:printf("\n Enter the value of num1 and num2");
        scanf("%d%d",&num1,&num2);
        printf("\n The product of num and num2 is=%d",prod=num1*num2);
        break;
        default:
        printf("\n READ INSTRUCTIONS CAREFULLY\n ONLY 1 TO 3 OPTIONS ARE AVAILIABLE");
    }
        printf("\n Outside Switch");
}