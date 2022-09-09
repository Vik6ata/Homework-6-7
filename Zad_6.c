#include<stdio.h>
void Bubble(int* pArray,unsigned int uLen);
int main()
{
 unsigned int uLen=0;
 printf("Enter how much numbers you want:");
 scanf("%d",&uLen);
 int pArray[uLen];
 Bubble( pArray, uLen);
 return 0;
}
void Bubble(int* pArray,unsigned int uLen)
{
   int temp;
   for(int i=0;i<uLen;i++)
   {
    printf("Enter Number[%d] untill number[%d]:",i,uLen);
    scanf("%d",&pArray[i]);
   }

   for(int j=0;j<uLen;j++)
   {
     for(int k=0;k<uLen-j-1;k++)
     {
      if(pArray[k]>pArray[k+1])
      {
       temp=pArray[k];
       pArray[k]=pArray[k+1];
       pArray[k+1]=temp;
      }
    }
   }
   for(int i=0;i<uLen;i++)
   {
    printf("%d\t",pArray[i]);
   }
}