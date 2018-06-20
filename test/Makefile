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

md_example: md_example.cpp
	$(CXX) -o $@ $< -g -Wall -std=c++11 -I/usr/local/Cellar/cryptopp/7.0.0/include/ -L/usr/local/Cellar/cryptopp/7.0.0/lib/ -lcryptopp

md_example1: md_example1.cpp
	$(CXX) -std=c++11 -o ./md5.o ./md5/md5.cpp ./md_example1.cpp

connect: connect.cpp
	$(CXX) -std=c++11 -o $@ $< \
	  -I/usr/local/mysql/connector-c++-1.1/include/cppconn \
      -I/Users/tonycai/workspace/mysql_install/mysql-connector-c++-1.1.11/ \
      -L/usr/local/mysql/connector-c++-1.1/lib \
      -lmysqlcppconn
	install_name_tool -change @loader_path/usr/local/mysql/connector-c++-1.1/lib/libmysqlcppconn.7.1.1.11.dylib /usr/local/mysql/connector-c++-1.1/lib/libmysqlcppconn.7.1.1.11.dylib $@
	otool -L $@
pipe: pipe.cpp
	$(CXX) -o $@ $< -g -Wall -std=c++11 
mk_fifo_r: mk_fifo_r.cpp
	$(CXX) -o $@ $< -g -Wall -std=c++11 
mk_fifo_w: mk_fifo_w.cpp
	$(CXX) -o $@ $< -g -Wall -std=c++11 
read_pipeline: read_pipeline.cpp
	$(CXX) -o $@ $< -O3 

clean:
	rm -f glog
	rm -f leveldb
	rm -f json
	rm -f read_json
