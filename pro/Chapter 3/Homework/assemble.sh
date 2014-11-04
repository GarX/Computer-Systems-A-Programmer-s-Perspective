#! /bin/bash


function assemble()
{
  if [ -d $1 ];then
    if [[ `ls $1|grep \.s` != "" ]];then
      ASM_FILES=`ls $1/*.s`
      as -arch i386 -o bin/$1 $ASM_FILES
    fi;
  fi;
}

function assemble_all()
{
  for f in `ls -A`
  do
    if [ -d $f ];then
      assemble $f
    fi;
  done
}

if [ $1 == "all" ];then
  assemble_all
else
  assemble $1
fi;
