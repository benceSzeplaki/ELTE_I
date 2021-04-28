#!/bin/sh

echo `cat test.txt | cut -d":" -f2 | sed 1,1d > onlyGrades.dat`

countOnes=`grep -o '1' onlyGrades.dat | wc -l`

echo Ones in file:   $countOnes

countTwos=`grep -o '2' onlyGrades.dat | wc -l`

echo Twos in file:   $countTwos

countThrees=`grep -o '3' onlyGrades.dat | wc -l`

echo Threes in file: $countThrees

countFours=`grep -o '4' onlyGrades.dat | wc -l`

echo Fours in file:  $countFours

countFives=`grep -o '5' onlyGrades.dat | wc -l`

echo Fives in file:  $countFives

rm onlyGrades.dat
