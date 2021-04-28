#!/bin/sh

first=$1
second=$2
third=$3
doubleOfFirst=`expr $1 \* 2`
i=0

for a in $*
do
	i=`expr $i + 1`
done
if [ $i -lt 3 ]
then
	echo Missing argument
	exit 0
fi
if [ $doubleOfFirst -gt $second ]
then
	if [ $doubleOfFirst -lt $third ]
	then
		echo Right
		exit 0
	fi
fi
if [ $doubleOfFirst -gt $third ]
then
	if [ $doubleOfFirst -lt $second ]
	then 
		echo Right
		exit 0
	fi
fi
echo Wrong
