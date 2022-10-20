/* fibonacci sequence till nth term */
#include <stdio.h>

int func(int terms){
	if (terms==0)
	{	
		printf("0\n");
		return 0;
	} else if (terms==1)
	{
		printf("1\n");
		return 1;
	}
	int foo;
	printf("%d\n", foo = func(terms-1) + func(terms-2));
	return foo;
	
}

int main(int argc, char const *argv[])
{
	/*int num = 47;
	int a=0, b=1, c=0;

	for (int i = 0; i < num; ++i)
	{
		printf("[%d]%d\n", i,a);
		c=a+b;
		a=b;
		b=c;
	}*/
	func(2);
	int f = 0;
	printf("sih\n", f);

	return 0;
}
// not completed