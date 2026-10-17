hello: hello.c
	gcc -o hello hello.c

hausaufgabe1: hausaufgabe1.c
	gcc -o hausaufgabe1 hausaufgabe1.c

runhausaufgabe1:
	./hausaufgabe1

runhello:
	./hello

clean:
	rm -f hello
