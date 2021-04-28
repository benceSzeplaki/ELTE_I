#!/bin/sh

firstname=`cat names.dat | cut -d" " -f3 | sed 1,1d` 
secondname=`cat names.dat | cut -d" " -f2 | sed 1,1d` 
title=`cat names.dat | cut -d" " -f1 | sed 1,1d`

echo $firstname" "$secondname" "$title
