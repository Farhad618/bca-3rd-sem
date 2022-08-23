echo "Enter three numbers: "
read a b c
if test $a -lt $b -a $a -lt $c
then 
	echo "$a is the smallest."
else 
	if test $b -lt $a -a $b -lt $c
	then
		echo "$b is the smallest."
	else
		echo "$c is the smallest."
	fi
fi


