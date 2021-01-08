#include <stdio.h>

/*
DJB2 ALGORITHM

Implementation of djb2 hashing algortihm found at http://www.cse.yorku.ca/~oz/hash.html

Compile: cc djb2.c -o djb2
Run: ./djb2 [input]
*/

unsigned long djb2(unsigned char *str){

	unsigned long hash = 5381;
    int c;

    while (c = *str++){
    	hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

   	return hash;
}

int main(int argc, char **argv){

	printf("%ld\n", djb2(argv[1]));

	return 0;
}
