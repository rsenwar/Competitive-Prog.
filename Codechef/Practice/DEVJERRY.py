t = int(input())
while t>0:
 t -= 1
 n,sx,sy,ex,ey,bx,by = map(int,input().split())
 if (sx==ex and sx==bx and by>min(ey,sy) and by<max(ey,sy)) or\
    (ey==sy and by==sy and bx>min(ex,sx) and bx<max(ex,sx)):
  print(abs(sx-ex)+abs(sy-ey)+2)
 else:
  print(abs(sx-ex)+abs(sy-ey))
