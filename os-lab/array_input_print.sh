# thih will work in bash
echo "Enter the numbers of elements: "
read n
i=0
declare -a arr
echo "Enter the array values: "
while test $i -lt $n
do 
	read -p "> " arr[$i]
	i=`expr $i + 1`
done
echo "All values of the array are: ${arr[*]}"
