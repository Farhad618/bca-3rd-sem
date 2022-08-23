#include <stdio.h>

int main(){
	int s = 400, b = 124, rem;
	
	if(s>b){
		int temp = s;
		s = b;
		b = temp;
	}
	
	while(rem = b%s){
		b = s;
		s = rem;
	}
	
	printf("%d", s);
	
	return 0;
}
