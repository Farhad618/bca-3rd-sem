echo "Enter the value of n"
read n
i=0
j=1
while test $j -le $n
do
	i=`expr $i + $j`
	j=`expr $j + 1`
done
echo $i
read