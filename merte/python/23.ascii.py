import string

lowercase= list(string.ascii_lowercase+"üğşçöı")
ascii_table= {}

for i in range(len(lowercase)):
    ascii_table.update({lowercase[i] : ord(lowercase[i])})

user_input= list(input('Metin girin: '))

metin=''
for letter in user_input:
    if letter in lowercase:
        letter= letter.upper()
    metin+=letter

print(metin)

