
#include<stdio.h>
/*LOGIC: One loop (for) iterates the number of lines to be printed) another prints repetative stars/ astericks*/

/*IMPORTANT NOTICE: The sapcing inside the block has to be adjusted according to the terminal
display by user himself on lines 31,42,46,48 55*/

/*Function declaration*/
void print_box(int a, int b);

int main(void){

  printf("Lets print some boxes\n");
  print_box(10,10);
}




void print_box(int len, int bdth)
{
  int l = len;
  int b = bdth;
  int itr1 = 0;
  int itr2 = 0;
  printf("Starting box printing\n");
  /*Print the starting line*/
    while(itr1 < l)
    {
      printf("-  ");
      itr1++;
    }
    printf("\n");

    /*Print the area*/

    for(itr2 = 0; itr2<b; itr2++)
        {
          printf("- ");
          int itr3;
          for(itr3 = 0; itr3 < itr1; itr3++)
          {
            printf("  ");
          }
          printf("-");
          printf("\n");
        }

      /*Print the base line*/
      while(itr1 !=0 )
      {
        printf("-  ");
        itr1--;
      }
      printf("\n");
}

