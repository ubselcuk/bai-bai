tek=0
çift=0
n= int(input("give me your number \t"))
for i in range(n):
  if i%2==0:
    çift= çift+i
  else:
    tek= tek+i
print("Tek toplam {} \nçift toplam {}".format(tek, çift))
