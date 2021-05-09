t=int(input())
for i in range(t):
    n,m,k=map(int,input().split())
    if(m%k==0 or (n+1-m)%k==0):
        print("YES")
    else:
        print("NO")
