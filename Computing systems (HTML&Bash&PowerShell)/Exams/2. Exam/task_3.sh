#!/bin/sh

begin=0
increment=0
n=0
echo begin: 
read begin
echo incerement:
read increment
echo n:
read n

for i in `seq 1 $n`
do
	echo -n $begin", "
	begin=`expr $begin + $increment`
done
echo '\n'