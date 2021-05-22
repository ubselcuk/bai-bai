num = 0
sum = 0
while 1:
  a = int(input("give me number(s) / 0 exit\t"))
  if a==0:
    break
  sum = sum + a
  num = num + 1

print("Ortalama = ", sum/num)