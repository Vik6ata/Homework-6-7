#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
 
#define CHECKBIT(mask,bit) !!(mask & (1 << (bit)))

 
void VMirror(unsigned char *pImage);
 
char mirrorBits(char mask);
 
int main(void)
{
    unsigned char buffer[] = { 0x7F, 0x40, 0x40, 0x40, 0x7F, 0x00, 0x00, 0x00 };
    VMirror(buffer);
    return EXIT_SUCCESS;
}
 
char mirrorBits(char mask) // From MSB->LSB to LSB->MSB 
{
    char v = mask;
    char r = v & 1; 
    char s = 7;
    for (v >>= 1; v; v >>= 1)
    {   
        r <<= 1;
        r |= v & 1;
        s--;
    }
    r <<= s; 
    return r;
}
 
void VMirror(unsigned char *pImage)
{  unsigned char buffer;
    for(int i = 0; i<8; i++)
    {   
        {
            buffer = pImage[i];
            for(int i=CHAR_BIT-1;i>=0;i--)
            {
             printf("%d",CHECKBIT(buffer,i));
            }
            printf("  |  "); 
        }
        pImage[i] = mirrorBits(pImage[i]);  
        {
           buffer= pImage[i];
          for(int i=CHAR_BIT-1;i>=0;i--)
          {
           printf("%d",CHECKBIT(buffer,i));
          }
         printf("\n");  
        }
    }
}