#ifndef GUARD
#define GUARD
#define INITCAP 8
#define BUFSIZE 1024
extern char **read(FILE *fp, char**lines, int* lSize);
extern void write(char **lines, int lcount);
extern void reverse(FILE *fp);
#endif