build: 
	g++ -I. main.cpp -o ./bin/main -pthread

run: 
	./bin/main