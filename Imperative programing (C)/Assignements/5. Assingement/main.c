#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "rle.h"
int main ()
{
  char *str = NULL, *temp = NULL;
  size_t size = 0;
  int i = 0;
  str = malloc(size + 1 * sizeof(char));
  while(1)
  {
      size++;
      temp = realloc(str, size + 1);
      str = temp;
      if ((scanf( "%c" , &str[i])) == 1)
      {
          if( 97 <= str[i] && str[i] <= 122 || str[i] == '\0' || str[i] == '\n')
          {
            i++;
            str[i] = '\0';
            if ( str[i-1] == '\n') { break; }
          }
          else
          {
            printf("Hibas bemenet!");
            return 1;
          }
      }
  }
  encoded e = encode(str,size);
  for(int i = 0; i < e.length; i++)
  {
    printf("%c%i",e.arr[i].c,e.arr[i].n);
  }
  printf(" -> ");
  printf("%s\n",decode(e,size));
  free(str);
  free(e.arr);
  return 0;
}