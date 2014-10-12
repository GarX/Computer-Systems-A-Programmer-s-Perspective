util=../utility

all: endianTest

endianTest:
	cd $(util) && make all
	gcc -I $(util) -o endianTest endianTest.c $(util)/endian.o

clean:
	rm ./endianTest
