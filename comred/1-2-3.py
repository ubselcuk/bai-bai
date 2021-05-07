print('Hello, darkness my old friend!')

while 1:

  print("iki sayı toplamı için 1/ n sayı toplamı için 2 gir")

  a = int(input())
  if a ==1:
    print("iki sayı gir")
    sum = int(input()) + int(input())
  elif a==2:
   print("0 girince out")
   sum = 0 

   while 1:
     x= int(input())
     sum = x + sum
     if x==0:
       break

  else:
    print("go Back")
  print(sum)