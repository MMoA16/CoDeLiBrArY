n=int(input())
a=list(map(int,input().strip().split()))
temp=int()
temp=0
for i in range(len(a)):
    temp=temp^a[i]^i
print(temp)
