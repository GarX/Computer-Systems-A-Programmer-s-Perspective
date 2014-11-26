#! /bin/bash


function compile()
{
  if [ -d $1 ];then
    if [[ `ls $1|grep \.c` != "" ]];then
      CFILES=`ls $1/*.c`
      gcc -o bin/$1 $CFILES
    fi;
  fi;
}

function compile_all()
{
  for f in `ls -A`
  do
    if [ -d $f ];then
      compile $f
    fi;
  done
}

if [ $1 == "all" ];then
  compile_all
else
  compile $1
fi;
