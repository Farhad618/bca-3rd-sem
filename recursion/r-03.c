/* print factorial of n */
#include <stdio.h>

int func(int i){
	if (i==0)
	{
		return 1;
	}
	return i*func(i-1);
}


int main(int argc, char const *argv[])
{
	printf("%d", func(4));
	return 0;
}