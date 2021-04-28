#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"
int main (int argc, char **argv)
{
	if(argc == 1)
	{
		printf("ERROR: Missing file name!\n");
		return 1;
	}
	if(argc > 2)
	{
		printf("Too many arguments!\n");
	}
    char *filename = argv[1];
    FILE *fp;
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Couldn't open file %s\n",filename);
        return 1;
    }
   	reverse(fp);
	return 0;
}