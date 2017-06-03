/*Function gives the number of words present in the line*/
int get_line_length(char line[])
{
  int words;
  int i;
  while(line[i] != '\0')
  {
    if(line[i] ==  32)
    {
      words++;
    }
    i++;
  }
  return words + 1;
}



/* The function deletes all the white spaces and tabs from a given line*/
int format_spaces(char line[])
{
  char form_line[50];
  int count = 0;
  int i;
  while(line[i] != '\0')
  {
    if(line[i] != 32)
    {
      form_line[count++] = line[i];
    }
    i++;
  }
  printf("%s", form_line);
}

/*The function squeezes out the different charachters in two strings*/

int squeeze(char s1[], char s2[])
{
  char s3[20] = " ";
  printf("%s\n", s3);
  int i,j, itr;
  int flag;
  while(s1[i]!='\0')
  {
    j =0;
    while(s2[j]!='\0')
    {
      if(s1[i] == s2[j])
      {
        flag = 1;
        break;
      }
      else{
        flag = 0;
      }
      j++;
    }
    if(flag == 0)
    {
      printf("Charachter inserted :%c\n", s1[i]);
      s3[itr++] = s1[i];
    }
    i++;
    flag = 0;
  }
  printf("%s\n",s3);
}
/*Partition and search module for binary serach*/
int search(int low, int mid, int high, int s, int line[]){

  if(s == line[mid])
  {
    printf("The searched index %d is at %d index.", s, mid);
  }


  else if(s < line[mid])
  {
    high = mid;
    mid = (low + high)/2;
    search(low, mid,high, s, line);
  }
  else
  {
    low = mid + 1;
    mid = (low + high)/2;
    search(low, mid, high,s, line);
  }

  return 0;
}



/*Binary Search*/

int binary_search(int s, int line[], int n)
{
  int low, mid, high;
  int itr;
  low = 0;
  high = n-1;
  mid = (low + high)/2;
  search(low, mid, high, s, line);
  return 0;

}

/*Expand function to expand a series given*/


int expand(char s[])
{
  int i;
  char range[2];
  while(s[i]!='\0')
  {
    if(s[i] == '-' )
    {
      range[0] = s[i-1];
      range[1] = s[i+1];

    }
    i++;
  }
  int itr;
  itr = range[1] - range[0];
  int start_ele = (int)s[0];
  int itr2;
  for(itr2 = 0; itr2<=itr; itr2++)
  {
    char ele = (int) start_ele + itr2 ;
    printf("%c\t", ele);
  }

  return 0;
}


/*Function searches for the given pattern in the string*/

int my_grep(char pattern[], char line[])
{
  printf("Given pattern: %s\n", pattern);
  printf("Given line of strings: %s\n", line);

  int itr1, itr2;
  int size= 0;
  int flag = 0;
  int no_of_pattern = 0;

  while(pattern[size] != '\0')
  {
    size++;
  }

  while(line[itr1] != '\0')
  {
    if(line[itr1] == pattern[0])
    {
      printf("Index found at : %d for %c\n", itr1, pattern[0]);
      printf("Searching for the remaining pattern....\n");
      for(itr2 = 1; itr2<size; itr2++)
      {

        printf("%c\t%c \n", line[itr1 + itr2], pattern[itr2]);
        if(line[itr1 + itr2] == pattern[itr2])
        {
          flag = 1;
          continue;

        }
        else{
          flag = 0;
          break;
        }
      }
      if(flag == 0){
          printf("Pattern Not found\n");
      }
      else{
          no_of_pattern++;
          printf("Pattern Found\n");
      }

    }
    itr1++;

  }
  printf("Total number of patterns: %d\n", no_of_pattern);
  return 0;
}


/*Gives number raised to the power of anyting positive*/
int topower(int num, int power)
{
  int base = num;
  if(power == 0)
  {
    return 1;
  }
  else{
    while(power!=1)
    {
      num = num*base;
      power--;
    }
    return num;
  }

}

/*Converts hexadecimal to decimal*/

int hextodec(char hex[])
{

  int digit[20];
  int power = 0;
  int i = 2;
  int ans = 0;
  while(hex[power]!='\0')
  {
    power++;
  }
  power = power -3;
  while(hex[i]!='\0')
  {

    if(hex[i]>96 && hex[i]<103)
      {digit[i-2] = (hex[i]-87);

        digit[i-2] = (topower(16, power))*(digit[i-2]);
        power--;
        //printf("%d\t", digit[i-2]);
      }
      else{
        digit[i-2] = (hex[i]-48);
        digit[i-2] = (topower(16, power))*(digit[i-2]) ;
        power--;
        //printf("%d\t", digit[i-2]);
      }
    i++;
  }
  i = 0;
  while(digit[i])
  {
    ans = ans + digit[i];
    i++;
  }
  printf("\nCoverted decimal number is : %d\n", ans);
  return ans;
}
