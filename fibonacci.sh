read -p"enter n val:" n
n1=0
n2=1
for((i=0;i<n;i++))
do
    echo "$n1"
    n3=$((n1+n2))
    n1=$n2
    n2=$n3
done