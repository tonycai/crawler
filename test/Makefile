CXX=g++
FLAGS=-g -Wall -std=c++11

all: glog leveldb json

glog: glog.cpp
	$(CXX) -o $@ $<  -lglog -lgflags -lpthread

leveldb: leveldb.cpp
	$(CXX) -o $@ $<  -lleveldb -lpthread -lsnappy

json: json.cpp
	$(CXX) -o $@ $< -g -Wall -std=c++11 -I/usr/local/Cellar/jsoncpp/1.8.4/include/ -L/usr/local/Cellar/jsoncpp/1.8.4/lib/ -ljsoncpp

read_json: read_json.cpp
	$(CXX) -o $@ $< -g -Wall -std=c++11 -I/usr/local/Cellar/jsoncpp/1.8.4/include/ -L/usr/local/Cellar/jsoncpp/1.8.4/lib/ -ljsoncpp

w_json: w_json.cpp
	$(CXX) -o $@ $< -g -Wall -std=c++11 -I/usr/local/Cellar/jsoncpp/1.8.4/include/ -L/usr/local/Cellar/jsoncpp/1.8.4/lib/ -ljsoncpp

typeif: typeid.cpp
	$(CXX) -o $@ $< -g -Wall -std=c++11 

rebuild_json: rebuild_json.cpp
	$(CXX) -o $@ $< -g -Wall -std=c++11 -I/usr/local/Cellar/jsoncpp/1.8.4/include/ -L/usr/local/Cellar/jsoncpp/1.8.4/lib/ -ljsoncpp

getopt: getopt.cpp
	$(CXX) -o $@ $< -g -Wall -std=c++11 

find_in_range: find_in_range.cpp
	$(CXX) -o $@ $< -g -Wall -std=c++11 

multi_line_string: multi_line_string.cpp
	$(CXX) -o $@ $< -g -Wall -std=c++11 

clean:
	rm -f glog
	rm -f leveldb
	rm -f json
	rm -f read_json
