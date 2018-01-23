a,b=map(int,input().split())
a -= b;
n = a%10
a //= 10
if n!=9:
 n+=1
else:
 n-=1
a = a*10 + n
print(a,end='')
