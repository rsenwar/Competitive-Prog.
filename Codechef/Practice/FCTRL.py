n = int(input())
for i in range(n):
 num = int(input())
 i=1
 sum=0
 while True:
  res = num//pow(5,i)
  sum += res
  if res==0:
   break
  i += 1
 print(sum)
