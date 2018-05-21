all: glog leveldb

glog: glog.cpp
	g++ -o $@ $<  -lglog -lgflags -lpthread

leveldb: leveldb.cpp
	g++ -o $@ $<  -lleveldb -lpthread -lsnappy

clean:
	rm -f glog
	rm -f leveldb
