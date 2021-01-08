#include <stdio.h>

/*
LOSE LOSE ALGORITHM

Implementation of lose lose hashing algortihm found at http://www.cse.yorku.ca/~oz/hash.html

Compile: cc loselose.c -o loselose
Run: ./loselose [input]
*/

unsigned long loselose(unsigned char *str){

    unsigned int hash = 0;
    int c;

    while(c = *str++){
        hash += c;
    }

    return hash;
}

int main(int argc, char **argv){
	
	printf("%ld\n", loselose(argv[1]));
	
	return 0;
}

