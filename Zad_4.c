#include<stdio.h>
#include<string.h>
void Conv(int sValue,char *pBuffer);
int main()
{ 
 int sValue;
 char pBuffer[100]={""};
 Conv(sValue,pBuffer);
 return 0;
}
void Conv(int sValue,char *pBuffer)
{
 char sign;
 printf("Enter a value:");
 scanf("%d",&sValue);
 if(sValue>0)
 {
 sign=' ';
 sprintf(pBuffer,"%c%5d",sign,sValue);
 printf("%s\n",pBuffer);
 }
 else 
 {
  sign="-";
  sValue*=-1;
  sprintf(pBuffer,"%c%5d",sign,sValue);
  printf("%s\n",pBuffer);
 }


}