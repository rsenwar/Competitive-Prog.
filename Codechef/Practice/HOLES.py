n = int(input())
for i in range(n):
 ss = input()
 h=0
 for ch in ss:
  if ch=='P' or ch=='A' or ch=='D' or ch=='O' or ch=='R' or ch=='Q':
   h += 1
  elif ch=='B':
   h += 2;
 print(h)
