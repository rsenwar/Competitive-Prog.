a,b = input().split()
a = int(a)
b = float(b)
if a+0.5<=b and a%5==0:
 y = b-a-0.5;
else:
 y = b;
print(round(y,30))
