

PROG=$1

if [[ ! -x $PROG ]]; then
    echo "no program $PROG"
    echo "run $0 <program>"
    exit 1
fi

IFS=$'\n'
for i in {0..100}
do
	for line in $(ldd $PROG)
	do
		import=$(echo -n "$line" | cut -d" " -f1)
		addr=$(echo -n "$line" | awk '{ match($0, /\((.+)\)/, arr); if(arr[1] != "") print arr[1] }')
		echo -en "$addr\t"
	done
	echo -en "\n"
done
