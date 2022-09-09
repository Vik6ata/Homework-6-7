#include<stdio.h>

unsigned int BinSearch(unsigned int* pArray,unsigned int uArraySize,unsigned int uValue);
int main()
{
 unsigned int size=0;
 printf("Enter the size of the array:");
 scanf("%d",&size);
 unsigned int array[size];
 printf("Enter the %d elements in the array in a sorted manner:",size);
 for(int i=0;i<size;i++)
 {
  scanf("%d",&array[i]);
 }
 unsigned int value;
 printf("Enter the element you want to find:");
 scanf("%d",&value);
 unsigned int index=BinSearch( array, size, value);
 if(index==0xFFFF)
 {
   printf("Not found!");
 }
 else
 {
  printf("The number %d is found at index %d\n",value,index);
 }

 
}
unsigned int BinSearch(unsigned int* pArray,unsigned int uArraySize,unsigned int uValue)
{

 unsigned int low=0;
 unsigned int high=uArraySize-1;
  while(low<=high)
  { 
   unsigned int mid=low+(high-low)/2;
   if(pArray[mid]<uValue)
   {
   low=mid+1;
   }
   else if(pArray[mid]==uValue)
   {
   return mid;
   }
   else
   {
     high=mid-1;
   }
 }
 return 0xFFFF;

 
}