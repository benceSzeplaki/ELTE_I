#ifndef header
#define header

typedef struct Pair
{
char c;
int n;
}Pair;

struct Encoded
{
  int length;
  Pair* arr;
}Encoded;

typedef struct Encoded encoded;

extern encoded encode(char str[],int size);

extern char *decode(encoded e, int size);

#endif