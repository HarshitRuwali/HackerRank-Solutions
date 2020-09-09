while read x
    # do echo ${x:2:1}
    do echo $x | cut -c3
done
