n=int(input())
left=1
right=n
flag=0
while(left<=right):
    mid=(left+right)/2
    if(mid*mid==n):
        flag=1
        print("YES")
        break
    if(mid*mid<n):
        left=mid+1
    else:
        right=mid-1
if(flag==0):
    print("NO")

