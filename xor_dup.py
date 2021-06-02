n=int(input())
temp=int()
temp=0
temp1=int()
temp1=0
a=list(map(int,input().strip().split()))
for i in range(min(a),max(a)+1):
    temp=temp^i
for j in range(len(a)):
    temp1=temp1^a[j]
print(temp^temp1)