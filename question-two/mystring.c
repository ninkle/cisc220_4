#include<stdio.h>
#include "mystring.h"

char* safestrcat(char *a, char *b) {
	// declare a the new string to be returned
	char* newString;
	newString = (char*)malloc((strlen(a) + 1) * sizeof(char)); // allocate the proper amount of data
	// copy 
	strcpy(newString,a);
        return newString;


	//char* newArray = (strlen(a) + strlen(b));
	//printf("%d\n", strlen(strlen(a) + strlen(b));
	//return newArray;
	}

int substring(char *source, int from, int n, char *target) {


	return 0;
	}

int test() {
	printf("die everyday\n");
	return 0;
}
