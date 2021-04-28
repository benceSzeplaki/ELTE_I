#!/bin/sh

i=0
max=1

for j in $*
do
	i=`expr $i + 1`
done
if [ $i -lt 1 ] 
then
	echo Missing argument
	exit 0
fi
for i in $*
do
	if [ $max -lt $i ]
	then
		max=$i
	fi
done
echo $max
