//0-4           free 
//4-10          900rs
//10-50         2000rs
//50 onwards    500rs

#include<stdio.h>
////////////////////////////////////////////////////////
//
//  Function Name :-    CheckAge
//  Description   :-    Used to display ticket price based on age
//  Input         :-    Integer
//  Output        :-    Integer
//  Auther        :-    Mayuresh Ambrale
//  Date          :-    
/////////////////////////////////////////////////////////
int CheckAge(int iNo)
{
    if(iNo>=0 && iNo<=4)
    {
        return 1;
    }
    else if(iNo>4 && iNo<=10)
    {
        return 2;
    }
    else if(iNo>10 && iNo<=50)
    {
        return 3;
    }
    else if(iNo>50 )
    {
        return 4;
    }
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter your Age\n");
    scanf("%d",&iValue);

    iRet =CheckAge(iValue);

    if(iRet==1)
    {
        printf("Your Ticket price is 0rs\n");
    }
    else if(iRet==2)
    {
        printf("Your Ticket price is 900rs\n");
    }
    else if(iRet==3)
    {
        printf("Your Ticket price is 2000rs\n");
    }
    else if(iRet==4)
    {
        printf("Your Ticket price is 500\n");
    }


    return 0;
}