#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

int lcount = 0;

char **read(FILE *fp, char**lines, int* lSize)
{
	int tmp = INITCAP;
	while(fgets(lines[lcount],BUFSIZE,fp) != NULL)
	{
		int length = strlen(lines[lcount]);
		lines[lcount][length-1] = '\0';
		lcount++;
		if(lcount > 7)
		{
			tmp = tmp * 2;
			lines = realloc(lines, tmp * sizeof(char*));
    		for(int i = tmp/2; i < tmp; i++)
    		{
    			lines[i] = malloc((BUFSIZE + 1)* sizeof(char));
    		}
		}
	}
	*lSize = lcount;
	return lines;
}
void write(char **lines, int lcount)
{
	for(int i = lcount - 1; i >= 0; i--)
	{
		for(int j = strlen(lines[i])-1; j >= 0; j--)
		{
			printf("%c", lines[i][j]);
		}
		printf("\n");
	}
}
void reverse(FILE *fp)
{
	char **lines = malloc(INITCAP * sizeof(char*));
	int *lSize = &lcount;
    for(int i =0; i < INITCAP; i++)
    {
    	lines[i] = malloc((BUFSIZE+1)* sizeof(char));
    }
    lines = read(fp,lines,lSize);
    write(lines,lcount);
}