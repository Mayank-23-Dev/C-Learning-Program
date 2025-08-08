a=0
b=1
n=int(input("Enter the nth Term-:"))
c=0
print(a)
print(b)
while (c<=n-3):
    sum=a+b
    a=b
    b=sum
    print(sum)
    c=c+1