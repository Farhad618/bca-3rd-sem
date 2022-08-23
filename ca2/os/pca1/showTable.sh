echo "Enter a number: "
read num
echo "Table of $num is: "
for i in `seq 1 10`
do
	echo "$num\t*\t$i\t=\t`expr $num \* $i`"
done
