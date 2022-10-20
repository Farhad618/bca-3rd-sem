/* print sum of first n natural numbers */
#include <stdio.h>

int func(int i){
	if (i==0)
	{
		return 0;
	}
	return i+func(i-1);
}


int main(int argc, char const *argv[])
{
	printf("%d", func(10));
	return 0;
}