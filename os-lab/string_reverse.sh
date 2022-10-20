read -p "Enter the string: " str
revstr=""

len=`expr ${#str} - 1`
while test $len -ge 0
do
	revstr="$revstr${str:$len:1}"
	len=`expr $len - 1`
done
echo $revstr
