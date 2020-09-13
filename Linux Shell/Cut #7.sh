while read x
do
    echo "$x" |cut -d " " -f4
done