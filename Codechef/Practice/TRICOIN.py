import math
t = int(input())
for _ in range(t):
    n = int(input())
    s = (1+8*float(n))**(1/2)
    s -= 1
    s /= 2
    s = math.floor(s)
    print(s)
