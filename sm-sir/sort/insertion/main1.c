#include <stdio.h>

int main(){
	int n = 6;
	int a[] = {5,4,10,1,6,2};
	int ss = 0;
	int us = 1;
	
	while(us<n){
		int temp = a[us];
		for(int i=us-1; i>=0; i--){
			if(a[i]>temp){
				a[i+1] = a[i];
				a[i] = temp;
			}
			else{
				break;
			}
		}
		
		ss++;
		us++;
	}
	
	for(int i=0; i<n; i++){
		printf("%d\t", a[i]);
	}

	return 0;
}