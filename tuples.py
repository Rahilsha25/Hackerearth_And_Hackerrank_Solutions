n=int(input())
numbers=input().strip().split()
ar=[]
for i in range(0,len(numbers)):
   ar.append(int(numbers[i]))
t=tuple(ar)
print(hash(t))
