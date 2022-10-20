/* print n to 0 */
#include <stdio.h>

void func(int i){
	if (i<0)
	{
		return;
	}
	printf("%d\n", i);
	func(i-1);
}


int main(int argc, char const *argv[])
{
	func(5);
	return 0;
}