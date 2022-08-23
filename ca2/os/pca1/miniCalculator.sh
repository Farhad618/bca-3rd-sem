echo "Enter the first operand: "
read a
echo "Enter the second operand: "
read b
echo "Enter the operator: "
read op
case $op in
	+) e=`expr $a + $b`
	   echo "Result: $a $op $b = $e";;
	-) e=`expr $a - $b`
	   echo "Result: $a $op $b = $e";;
	/) e=`expr $a / $b`
	   echo "Result: $a $op $b = $e";;
	\*) e=`expr $a \* $b`
	    echo "Result: $a $op $b = $e";;
	*) echo "Enter a valid operator.";;
esac

