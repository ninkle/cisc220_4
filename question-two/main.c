#include<stdio.h>
#include "string.h"
int main() {
	
	// first call the safestrcat
	char a[5] = "west";
	char b[4] = "tri";
	char* newArray;
   	newArray = safestrcat(a, b);
 
	printf("first element %d\n", newArray[0]);
	free(newArray);
	
	// next we call the substring function
	char source[6] = "yeezy";
	int from = 0;
	int n = 3;
	char target[10] = "yeezywest";
	substring(source, from, n, target);

	test();	
	return 0;
}
