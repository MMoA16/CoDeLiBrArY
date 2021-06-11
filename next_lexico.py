str1=input()
i=len(str1)-1
while(str1[i]<str1[i-1]):
    i=i-1
j=i-1
min=str1[j]
j=j+1
min1=str1[j]
inde=j
while(j<len(str1)):
    if(str1[j]>min and str1[j]<min1):
        min1=str1[j]
        inde=j
    j=j+1
# temp=str1[i-1]
# str1=str1.replace(str1[i-1],str1[inde])
# str1=str1.replace(str1[inde],temp)
str1=''.join((str1[:i-1],str1[inde],str1[i:inde],str1[i-1],str1[inde+1:]))
p=len(str1)-1
str2=''.join((str1[i:]))
print(''.join((str1[:i],str2[::-1])))
