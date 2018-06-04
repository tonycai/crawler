#!/bin/bash
#EX: ./compile.sh connect
MYSQLCPP=$1
g++ -o ${MYSQLCPP} \
  -I/usr/local/mysql/connector-c++-1.1/include/cppconn \
  -I/Users/tonycai/workspace/mysql_install/mysql-connector-c++-1.1.11/ \
  -L/usr/local/mysql/connector-c++-1.1/lib \
  ${MYSQLCPP}.cpp -lmysqlcppconn

install_name_tool -change @loader_path/usr/local/mysql/connector-c++-1.1/lib/libmysqlcppconn.7.1.1.11.dylib /usr/local/mysql/connector-c++-1.1/lib/libmysqlcppconn.7.1.1.11.dylib ./${MYSQLCPP}

otool -L ./${MYSQLCPP}
# on Mac
