#include<stdio.h>
#include "string.h"
int main() {
	
	// first call the safestrcat
	char a[5] = "west";
	char b[4] = "tri";
	safestrcat(a, b);
	
	// next we call the substring function
	char source[6] = "yeezy";
	int from = 0;
	int n = 3;
	char target[10] = "yeezywest";
	substring(source, from, n, target);
	return 0;
}
