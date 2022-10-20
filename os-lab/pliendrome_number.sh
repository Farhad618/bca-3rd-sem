# this script will not work without
# the number_reverse.sh file
read -p "Enter the number: " num

revnum=`./number_reverse.sh $num`

if [ $num -eq $revnum ]
then
	echo "$num is a pliendrome number"
else
	echo "$num is not a pliendrome number"
fi
