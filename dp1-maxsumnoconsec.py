n=int(input())
a=list(map(int,input().strip().split()))[:n]
dp=[]
dp=[0]*n
dp[0]=a[0]
i=1
while(i!=n):
    dp[i]=max(dp[i-1],a[i]+dp[i-2])
    i=i+1
print(dp[n-1])

