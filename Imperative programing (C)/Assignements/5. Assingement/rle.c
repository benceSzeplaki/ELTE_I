#include <stdio.h>
#include <stdlib.h>
#include "rle.h"
encoded encode(char str[], int size)
{
  encoded e;
  e.length = 0;
  e.arr = malloc(e.length + 1);
  int counter = 1;
  for (int i = 0; i < size; i++)
  {
    if(str[i] == str[i+1])
    {
      counter++;
    }
    else if(str[i] == '\n')
    {
      break;
    }
    else
    {
      e.arr[e.length].c = str[i];
      e.arr[e.length].n = counter;
      e.length++;
      e.arr = realloc(e.arr , sizeof(struct Pair) * e.length + 1);
      counter = 1;
    }
  }
  return e;
}

char *decode(encoded e, int size)
{
  char *solution;
  solution = malloc(sizeof(char)*size);
  int a = 0;
  for(int i = 0; i < e.length; i++)
  {
    for(int j = 0; j < e.arr[i].n ;j++)
    {
      solution[a]=e.arr[i].c;
      a++;
    }
  }
  solution[a]='\0';
  return solution;
}