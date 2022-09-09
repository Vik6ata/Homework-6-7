#include<stdio.h>
void Reverse(char* ptr);
int main()
{
  char ptr[]={"This is a test\0"};
  Reverse(ptr);
  printf("\n");
  return 0;
}
void Reverse(char* ptr)
{ 
  if(*ptr!='\0')
  {
  Reverse(ptr+1);
  printf("%c",*ptr);
  }
}