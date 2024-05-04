//Sum of factors of number

#include<stdio.h>


int SumFactors(int iNo)
{
    int iCnt=0;
    int iSum=0;
    printf("Factors of %d are\n",iNo);
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt==0){
        iSum=iSum+iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue=0;
    int iRet =0;
    

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet =SumFactors(iValue);

    printf("%d is Summetion of Factors\n",iRet);
    return 0;
}
