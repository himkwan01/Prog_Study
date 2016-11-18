#!/bin/bash
# Purpose:      getopts sample
# Aurthor:      Tsz Him Kwan
# Date:         11-13-16

USAGE="Usage: getopts.sh -n -g <file>"
if [ $# -eq 0 ];then
    echo "$USAGE"
    exit 1
fi
n=false
g=false
i=1
while getopts "ng:" flag;
do
    i=`expr $i + 1`
    case "$flag" in
        n)
            echo "n"
            n=true;;
        g)
            echo "g"
            g=true;;
        ?)
            echo "$USAGE"
            exit 1;;
    esac
done

if [ $i -le $# ];then
    file=${!i}
else
    file=${!#}
fi

echo "file = $file"
