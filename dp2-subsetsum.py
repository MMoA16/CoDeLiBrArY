a=list(map(int,input().strip().split()))
sum=int(input())
dp = [[0 for x in range(sum+1)] for y in range(len(a)+1)]
for y in range(len(a)+1):
    dp[y][0]=1
for i in range(len(a)+1):
    for j in range(sum+1):
        if(dp[i-1][j]==1):
            dp[i][j]=1
        else:
            if(a[i-1]<=j):
                dp[i][j]=dp[i-1][j-a[i-1]]
            else:
                dp[i][j]=0
print(dp[len(a)][sum])
