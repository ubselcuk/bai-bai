list = []
a = int(input("Kaç sayı:\t"))
for i in range(a):
    list.append(int(input("{}. sayı:\t".format(i + 1))))
print(max(list))