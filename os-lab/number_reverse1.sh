read -p "Enter the number: " num
revnum=0
while test $num -gt 0
do
	revnum=`echo "($revnum * 10 + ($num % 10))" | bc`
	num=`expr $num / 10`
done
echo "Reverse: "$revnum
