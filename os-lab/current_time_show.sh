while :
do
	ti=`date +"%r"`
	echo -e -n "\033[7s"
	tput cup 0 69
	echo -n $ti
	echo -e -n "\033[8u"
	sleep 1
done
