t = int(input())
for _ in range(t):
 k = int(input())
 print(3,end='')
 num = 103993%33102
 if k!=0:
  print('.',end='')
 while k>0:
  k -= 1
  num *= 10
  print(num//33102,end='')
  num %= 33102
 print()
