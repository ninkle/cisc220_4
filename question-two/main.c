#include<stdio.h>
#include "string.h"
int main() {
	
	// first call the safestrcat
	char a[] = "abcdefg";
	char b[] = "hijklmnop";
	char* newArray;
   	newArray = safestrcat(a, b);
 
	printf("%s\n", newArray);
	free(newArray);

/*	
	// next we call the substring function
	char source[6] = "yeezy";
	int from = 0;
	int n = 3;
	char target[10] = "yeezywest";
	substring(source, from, n, target);

	test();	
*/
	int from = 2;
        int n = 7;
        char targ[n];
        substring(a, from, n, targ);
        printf("%s\n", targ);

	return 0;
}
