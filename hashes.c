#include <stdio.h>
#include <stdlib.h>

/*
HASHING ALGORITHMS

Implementation of all 3 hashing algortihms found at http://www.cse.yorku.ca/~oz/hash.html

Compile: cc hashes.c -o hashes
Run: ./hashes [input]
*/

//djb2 algorithm
unsigned long djb2(unsigned char *str){
	unsigned long hash = 5381;
	int c;

	while (c = *str++){
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	return hash;
}

//sdbm algorithm
unsigned long sdbm(unsigned char *str){

	unsigned long hash = 0;
	int c;

	while(c = *str++){
		hash = c + (hash << 6) + (hash << 16) - hash;
	}

	return hash;

}

//lose lose algorithm
unsigned long loselose(unsigned char *str){

	unsigned int hash = 0;
	int c;

	while(c = *str++){
		hash += c;
	}

	return hash;
}

int main(int argc, char **argv){

	printf("djb2: %ld\nsdbm: %ld\nlose lose: %ld\n", djb2(argv[1]), sdbm(argv[1]), loselose(argv[1]));
	return 0;
}
