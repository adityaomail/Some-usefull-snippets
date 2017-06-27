#include <stdio.h>
#include <stdbool.h>

int main(void)
{
   int size, itr =0, item, pos;
   printf("Enter the size of array\n");
   scanf("%d", &size);

   int arr[size];

   printf("Enter the elements of array\n");
   
   while(itr != size)
   {
      scanf("%d", &arr[itr]);
      itr++;
   }

   itr = 0;

   printf("Enter the item you want to insert\n");
   scanf("%d", &item);

   printf("Enter the position of item to be inserted\n");
   scanf("%d", &pos);

   itr = size - pos - 1;
   if(itr < 0)
   {
      printf("Invalid Position\n");
   }
   else
   {

   while(itr>=0)
   {
      arr[size] = arr[size - 1];
      size--;


      itr--;

   }
     
   }
   itr = 0;

   arr[pos] = item;
   while(itr != 6)
   {
      printf("%d ", arr[itr]);
      itr++;
   }
   return 0;
}