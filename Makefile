all: djb2 hashes loselose sdbm

djb2: djb2.c
	cc djb2.c -o djb2

hashes: hashes.c
	cc hashes.c -o hashes

loselose: loselose.c
	cc loselose.c -o loselose

sdbm: sdbm.c
	cc sdbm.c -o sdbm

clean:
	rm -f a.out *~ djb2 hashes loselose sdbm
