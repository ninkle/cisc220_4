#include<stdio.h>
#include "string.h"

int main() {
	
	// first handle the safestrcat function
	char a[] = "abcdefg";
	char b[] = "hijklmnop";
	char* newArray;
   	newArray = safestrcat(a, b);
 	// print the results
	printf("%s\n", newArray);
	free(newArray);
	// next handle the substring function
	int n = 8;
	int from = 2;
        char target[n];
        substring(a, from, n, target);
	// print the results
        printf("%s\n", target);
        
	return 0;
}
