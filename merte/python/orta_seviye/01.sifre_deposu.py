import os
#? Debug modu | Otomatik superuser
debug=False
def clear():
    if os.name == 'nt':
        os.system('cls')
    else:
        os.system('clear')
    if debug: print('Cleared.')
    
def terminate():
    if debug: print('\nTerminated.')
    quit()

def create_file():
    try:
        with open((filename), "x") as file:
            if debug: print('Yeni dosya oluşturuldu.')
            file.write(f'#Usernames : Passwords')
    except FileExistsError:
        if debug: print('Dosya zaten var.')
        pass

def is_admin(u, p):
    if debug: return True
    if u==unlock_username:
        if p==unlock_password:
            return True
        else:
            print(f"You can't use ({u}) username")
            terminate()
            
def depoyu_oku():
    with open(filename) as verileri_oku:
        depo = verileri_oku.readlines()
    return depo

def is_user_exist(username, password):
    depo=depoyu_oku()
    passlist=''
    for i in depo:
        passlist+=i
    
    if f'{username} : {password}' in passlist: return True
    else: return False

def sudo():
    if debug==False: clear()
    depo=depoyu_oku()
    passlist=''
    num=1
    for i in depo:
        passlist+=i
    splitlist= passlist.split('\n')
    for each in splitlist:
        print('{}- {}'.format(num, each))
        num+=1

filename='passwords.txt'

unlock_username= 'admin'
unlock_password= '12345678'


if debug:
    superuser=True
    username=unlock_username
    password=unlock_password
else:
    superuser=False
    try:
        username= input('Kullanici Adinizi Girin: ')
        password= input('Sifrenizi Girin: ')
    except KeyboardInterrupt:
        terminate()

create_file()
if is_admin(username, password):
    superuser=True
    sudo()
else:
    if is_user_exist(username, password):
        print('You logged with: {}'.format(username))
    else:
        with open((filename), "a") as file:
            file.write(f'\n{username} : {password}')
        print('You registered!')
if debug: print('debug ended.')