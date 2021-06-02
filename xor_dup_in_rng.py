n=int(input())
a=list(map(int,input().strip().split()))
temp=int()
for i in range(len(a)):
    a[i-1]=a[i]^a[i]^i
print(a[i-1])