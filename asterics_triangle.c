
#include<stdio.h>
/*LOGIC: One loop (for) iterates the number of lines to be printed) another prints repetative stars/ astericks*/


/*Function declaration*/
void print_astericks(void);

int main(void){

  print_astericks();
}




void print_astericks(void)
{
  int i;
  int j = 1;
  int lines = 4; // user will input how many lines of star he wants to print
  for(i=1; i<=lines; i++)
  {
    j=0;
    while(j<i)
    {
        printf("*");
        j++;
    }
    printf("\n");

  }

}

