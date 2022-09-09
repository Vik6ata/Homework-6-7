#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void Add(char* p1, char* p2,char* result);
int main()
{
  char p1[50]={""};
  char p2[50]={""};
  char result[100]={""};
  Add("12345","678", result);
 }
void Add(char* p1, char* p2,char* result)
{

 int number1=atoi(p1);
 int number2=atoi(p2);
 int sum;
 sum=number1+number2;
 sprintf(result,"%d",sum);
 printf("%s\n",result);

}