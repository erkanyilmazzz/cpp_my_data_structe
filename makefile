target: main.o ArrayList.o Collection.o HashSet.o Iterator.o LinkedList.o List.o Queue.o Set.o
	g++ -o target  main.o ArrayList.o Collection.o HashSet.o Iterator.o LinkedList.o List.o Queue.o Set.o


ArrayList.o : ArrayList.cpp
	g++ -c -std=c++11 -Wall ArrayList.cpp

Collection.o : Collection.cpp
	g++ -c -std=c++11 -Wall Collection.cpp

HashSet.o : HashSet.cpp
	g++ -c -std=c++11 -Wall HashSet.cpp

Iterator.o :Iterator.cpp
	g++ -c -std=c++11 -Wall Iterator.cpp

LinkedList.o :LinkedList.cpp
	g++ -c -std=c++11 -Wall LinkedList.cpp

List.o :List.cpp
	g++ -c -std=c++11 -Wall List.cpp

Queue.o :Queue.cpp
	g++ -c -std=c++11 -Wall Queue.cpp

Set.o :Set.cpp
	g++ -c -std=c++11 -Wall Set.cpp


main.o :main.cpp
	g++ -c -std=c++11 -Wall main.cpp

clear:
	rm *.o target

