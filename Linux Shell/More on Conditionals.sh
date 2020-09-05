read a
read b
read c

if (( $a == $b && $b == $c )) #[] too can be used
then
    echo 'EQUILATERAL';
elif (( $a == $b || $b == $c || $a == $c ))
then
    echo 'ISOSCELES';
else
    echo 'SCALENE';
fi