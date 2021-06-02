n=input()
a=list(map(int,input().strip().split()))
temp=0
for i in a:
    temp=temp^i
print(temp)
