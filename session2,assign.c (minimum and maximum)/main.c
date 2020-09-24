#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,y,z;
   printf("enter the numbers\n");
   scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
   if
   (x>=y&&x>=z)
   {
       printf("the maximum number is =%d\n",x);
   }
   else if
    (y>=x&&y>=z)
   {
       printf("the maximum number is =%d\n",y);
   }
    else if
    (z>=x&&z>=y)
   {
       printf("the maximum number is =%d\n",z);
   }
   else
   {
      printf("error\n");
   }
   if
   (x<=y&&x<=z)
   {
       printf("the minimum number is =%d\n",x);
   }
   else if
    (y<=x&&y<=z)
   {
       printf("the minimum number is =%d\n",y);
   }
    else if
    (z<=x&&z<=y)
   {
       printf("the minimum number is =%d\n",z);
   }
   else

   {
      printf("error\n");
   }
   return 0;
}


