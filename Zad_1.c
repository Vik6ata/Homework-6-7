#include<stdio.h>
#include<inttypes.h>
#include<stdlib.h>
unsigned char Checkbit(unsigned int uValue);
int main()
{ 
  unsigned int uValue;
  Checkbit(uValue);
}
unsigned char Checkbit(unsigned int uValue)
{
  
  int counter;
  printf("Enter a hexdecimal number:");
  scanf("%x",&uValue);
 
  for( int bit=15;bit>=0;bit--)
  { 
    printf("%d",!!(uValue&(1<<bit)));
    if(!!(uValue &(1<<bit))==1)
    { 
    counter++;
    }
  }
  if(counter==1)
  {
    printf("\nThe number has  one set bit!\n ");
    return EXIT_SUCCESS;
  }
  else if(counter>1 ||counter <1)
  {
    printf("\nThe number has  no  set bit or more set bits!\n ");
    return EXIT_FAILURE;
  }
 
  }
  
