read x

# [] are used for string comparison
if [[ $x == "y" || $x == "Y" ]]; then 
    echo "YES"
else
    echo "NO"
fi