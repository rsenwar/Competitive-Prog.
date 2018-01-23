t = int(input())
for i in range(t):
 b,ls = map(int,input().rstrip().split())
 print(((ls**2)-(b**2))**0.5,end=' ')
 print(((b**2)+(ls**2))**0.5)
