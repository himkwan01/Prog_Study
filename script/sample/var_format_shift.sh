#!/bin/bash
#Purpose:       a sample shows uses of $#, $@, $*, and  shift
#Date           10/14/2016
clear
echo "Print code"
cat $0
echo
echo "Total para = $#"
echo "all para value (\$@) = $@"
echo "all para value (\$*) = $*"
echo "shift"
shift
echo "total para = $#"
echo "all para value = $@"
echo "shift 2"
shift 2
echo "total para = $#"
echo "all para value = $@"
