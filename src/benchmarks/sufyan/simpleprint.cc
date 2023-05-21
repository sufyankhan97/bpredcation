#include <stdio.h>


int main()
{
	printf("Hello");
	__asm__ ( "xchg %eax, %eax");
	return(0);
}

