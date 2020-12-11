all: server.bin client.bin

server.bin: $(wildcard src/server/*.cpp) $(wildcard src/server/*.hpp) $(wildcard src/common/*.cpp) $(wildcard src/common/*.hpp)
	g++ -o server.bin -std=c++17 src/server/*.cpp src/common/*.cpp -lpthread

client.bin: $(wildcard src/client/*.cpp) $(wildcard src/client/*.hpp) $(wildcard src/common/*.cpp) $(wildcard src/common/*.hpp)
	g++ -o client.bin -std=c++17 src/client/*.cpp src/common/*.cpp -lpthread

clean:
	rm -rf server.bin
	rm -rm client.bin
