#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define	SETBIT(r, n)	((r)[(n)>>5]|=((unsigned)1<<((n)&31)))

int main(int argc,char **argv)
{

  printf("%d\n",1>>5);
  printf("%d\n",1<<((0)&31));
  return 0;
}
