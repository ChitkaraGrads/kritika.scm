#include<stdio.h>
int main()
{
    int num,count=0,reverse=0,digit;
    printf("Enter number:");
    scanf("%d",&num);
    while(num !=0){
        digit=num%10;
        count++;
        reverse=reverse*10+digit;
        num/=10;
    }
    printf("Number of digits: %d\n",count);
    printf("Reverse of the number: %d\n",reverse);
    return 0;
}