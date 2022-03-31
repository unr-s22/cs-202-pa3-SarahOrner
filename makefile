hw3: main.o money.o account.o
	g++ -o lab5 main.o money.o account.o

main.o: main.cpp money.h account.h
	g++ -c main.cpp

money.o: money.cpp money.h
	g++ -c money.cpp

account.o: account.cpp account.h money.h
	g++ -c account.cpp

clean:
	rm *.o hw3