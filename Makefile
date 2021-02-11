test: clean main.o
	bash test.sh "15.22 36.34 18.56 44.98 222 0.01 -1 -33.333 44.45 120 31.3 -12.1 -2.0" "222.00 120.00 44.98"
	bash test.sh "15.56 36.3 18.77 44.56 -15.0 -38 -33.3 44.3 120.4 31.555 -12.3 -2.2" "120.40 44.56 44.30"
	bash test.sh "15.56 15.56 15.56 15.56 15.56 15.56 15.56 15.56" "15.56 15.56 15.56"
	

main.o:
	gcc main.c -o main.o

clean:
	rm -rf *.o *~ main
	
