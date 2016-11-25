#include<stdio.h>
#include "mystring.h"

char* safestrcat(char *a, char *b) {
	// declare a the new string to be returned
	char* newString;
	newString = (char*)malloc((strlen(a) + 1) * sizeof(char)); // allocate the proper amount of data
	// copy 
	strcpy(newString,a);
        return newString;
}

int substring(char *source, int from, int n, char *target) {
        
	int i = 0;
        for (i=0; i < n; ++i){
                target[i] = source[from + i];
        }

	int size = strlen(source);
        if (n < 1 || from < 0 || from > size) {
                return -1;
        }
	return 0;
}

int test() {
	printf("die everyday\n");
	return 0;
}
