#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int size(char* time)
{
    int index = 0, length = 0;
    while (time[index] != '\0')
	{
        ++length;
        ++index;
    }
    return length;
}

bool isValidTime(char* time)
{
	int elso = 0, masodik = 0, harmadik = 0, negyedik = 0, otodik=0;
	if(size(time) > 5)
	{
		return false;
	}
	if(time[0] == '0' || time[0] == '1' || time[0] == '2')
	{
		elso++;
	}
	if(time[0] == '2')
	{
		if('4' <= time[1] && time[1] <= '9')
		{
			masodik++;
		}
	}
	if(time[0] != 2)
	{
		if('0' <= time[1] && time[1] <= '9')
		{
			masodik++;
		}
	}
	if(time[2] == ':')
	{
		harmadik++;
	}
	if('0' <= time[3] && time[3] <= '5')
	{
		negyedik++;
	}
	if('0' <= time[4] && time[4] <= '9')
	{
		otodik++;
	}
	if(elso == 1 && masodik == 1 && harmadik == 1 && negyedik == 1 && otodik == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isValidTodo(char* todo)
{
	int counter = 0;
	for(int i = 0; i < size(todo); i++)
	{
		if('A' <= todo[i] && todo[i] <= 'Z' || 'a' <= todo[i] && todo[i] <= 'z')
		{
			counter++;
		}
	}
	if(counter == size(todo))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main(int all, char **list[])
{
	if(all == 1 || all == 2)
	{
		printf("Hibas bemenet!\n");
		return 1;
	}
	int t = 1, a = 1, db = 0;
	db = (all - 1) / 2;
	char*** time = malloc(all * sizeof(all));
	char*** activity = malloc(all * sizeof(all));
	for(int i = 1; i < all; i++){
		if(i % 2 == 1)
		{
			time[t] = list[i];
			t++;
		}
		if(i % 2 == 0)
		{
			activity[a] = list[i];
			a++;
		}
	}
	FILE * todolist;
	todolist = fopen("todolist.txt", "w");
	for(int i = 1; i <= db; i++)
	{
		if(isValidTime((char*) time[i]) && isValidTodo((char*) activity[i]))
		{
			fprintf(todolist,"%s %s %s\n",(char*) time[i],"-",(char*) activity[i]);
		}
		else if(isValidTime((char*) time[i]) == false)
		{
			printf("Hibas bemenet!\n");
		}
		else if(isValidTodo((char*) activity[i]) == false){
			printf("Hibas bemenet!\n");
		}
	}
	fclose(todolist);
	return 0;
}