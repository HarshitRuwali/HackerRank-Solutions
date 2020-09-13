while read x
do
    echo "$x" |cut -d " " -f -3
done