import sys
t = int(input())
for _ in range(t):
 n = int(input())
 arr = [int(i) for i in input().split()]
 arr.sort()
 min = sys.maxsize
 for i in range(n-1):
  if arr[i+1]-arr[i]<min:
   min = arr[i+1]-arr[i]
 print(min)
