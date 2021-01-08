#include <stdio.h>

/*
SDBM ALGORITHM

Implementation of sdbm hashing algortihm found at http://www.cse.yorku.ca/~oz/hash.html

Compile: cc sdbm.c -o sdbm
Run: ./sdbm [input]
*/

unsigned long sdbm(unsigned char *str){

    unsigned long hash = 0;
    int c;

    while(c = *str++){
        hash = c + (hash << 6) + (hash << 16) - hash;
    }

    return hash;

}

int main(int argc, char **argv){

	printf("%ld\n", sdbm(argv[1]));
	
	return 0;
}

