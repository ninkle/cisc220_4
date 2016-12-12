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
	// declare variables
        int size = strlen(source);
	int i = 0;
        
	for ( i = 0; i < n; i++){
                target[i] = source[from + i];
        }

        if (from < 0 || from > size || n < 1) {
                return -1; // the case when it fails
        }
	return 0; // the case when it succeeds
}

