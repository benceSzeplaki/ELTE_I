#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Person
{
    char name[30];
    unsigned age;
    char job[30];
};

struct Person* iterator;
size_t count = 0;

void add()
{
  printf("Enter name: ");
  fflush(stdin);
  scanf("%s", iterator[count].name);
  printf("Enter age: ");
  fflush(stdin);
  scanf("%u", &(iterator[count].age));
  printf("Enter job: ");
  fflush(stdin);
  scanf("%s", iterator[count].job);
  ++count;
}

void list()
{
  for (size_t idx = 0; idx < count; idx++)
  {
    printf("Person %zu\nName: %s, Age: %u, Job: %s\n\n", idx+1, iterator[idx].name, iterator[idx].age, iterator[idx].job);
  }
}

bool ext (int i)
{
  if(i == 1)
  { 
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
    size_t max_size = 10; 
    iterator = malloc(max_size * sizeof(struct Person));
    char ch;
    while (1)
    {
        printf("\n");
        scanf(" %c", &ch);
        if (ch == 'a')
        {
          add();
        }
        else if (ch == 'l')
        {
          list();
        }
        else if (ch == 'x')
        {
          if(ext(1))
          {
            free(iterator);
            break;
          }
        }
        else
        {
          printf("ERROR: Invalid command\nCommands are:\na - add a person\nl - list people\nx - exit the program\n");
        }
    }
    return 0;
}
