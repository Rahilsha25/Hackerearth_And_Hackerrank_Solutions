read N
i=1
sum=0
while [ $i -le $N ]
do
  read num              
  sum=$((sum + num))   
  i=$((i + 1))
done

avg=$(echo $sum / $N | bc -l)
a=`printf "%.3f" $avg`
echo $a
