echo "Enter a string: "
read str
len=`expr $str | wc -c`
len=`expr $len - 1`
echo "Length of the string is: $len"

