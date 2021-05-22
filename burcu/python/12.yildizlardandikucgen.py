n = int(input("Sayıyı girin: "))
a = []
for i in range(1,n+1):
    a.append("*"*i)
print("\n".join(a))