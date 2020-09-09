read num
echo $num | bc -l | xargs printf "%.3f"