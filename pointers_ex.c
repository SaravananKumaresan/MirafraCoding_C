
#include<stdio.h>

int main()
{

 int x=9,y,*ptr;
 ptr=&x;
 y=*ptr;
 printf("address of x=%p \n ,address of ptr=%p /n",&x,ptr);
 printf("content of y=%d \n",y);
 return 0;
}
