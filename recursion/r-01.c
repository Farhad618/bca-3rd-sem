/* print 0 to n */
#include <stdio.h>

void func(int i){
	if (i<0)
	{
		return;
	}
	func(i-1);
	printf("%d\n", i);
}


int main(int argc, char const *argv[])
{
	func(5);
	return 0;
}