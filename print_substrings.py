str1=input()
for i in range(len(str1)):
    if(i==len(str1)-1):
        print(str1[len(str1)-1])
        break
    j=i
    while(j!=len(str1)):
        print(str1[i:j+1])
        j=j+1
