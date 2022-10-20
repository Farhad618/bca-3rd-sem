# sh number_reverse.sh 123

if [ $# -eq 1 ]
then
	num=$1
	revnum=0
	while test $num -gt 0
	do
		revnum=`echo "($revnum * 10 + ($num % 10))" | bc`
		num=`expr $num / 10`
	done
	echo $revnum
fi
