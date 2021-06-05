str=input()
n=int(input())
while(n!=0):
    flag=0
    str1=input()
    i=0
    j=0
    while(i<len(str1) and j<len(str)):
        if(str1[i]==str[j]):
            i=i+1
        if(len(str1)==i):
            flag=1
        j=j+1
    if(flag==1):
        print("POSITVE")
    else:
        print("NEGATIVE")
    n=n-1
