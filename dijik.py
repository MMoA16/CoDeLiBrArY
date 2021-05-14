R=int(input())
C=int(input())
M=[]
dist=[]
pre=[]
v=[]
cnt=0
for i in range(R):
    a=[]
    for j in range(C):
        p=int(input())
        if(p==0):
            p=9999999
        a.append(p)
    M.append(a)
sr=int(input())
for i in range(C):
    dist.append(M[sr][i])
    pre.append(sr)
    v.append(0)
v[sr]=1
while(cnt<R):
    min=p
    for i in range(C):
        if(min>dist[i] and v[i]!=1):
            min=dist[i]
            pred=i
    v[pred]=1
    for i in range(0,C):
        if(min+M[pred][i]<dist[i] and v[i]!=1):
            dist[i]=min+M[pred][i]
        pre[i]=pred
    cnt=cnt+1

print(dist)
print(pre)
