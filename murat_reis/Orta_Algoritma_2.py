import os
from cryptography.fernet import Fernet

fname = "passwords.txt"
key = Fernet.generate_key()
wee = Fernet(key)
fpass = "iiii"  # Ana şifre

def encrypt(data):
    return wee.encrypt(data.encode()).decode()

def decrypt(data):
    return wee.decrypt(data.encode()).decode()

def registry(name, password):
    with open(fname, "a") as file:
        encrypted_data = encrypt(f"{name}:{password}")
        file.write(f"{encrypted_data}\n")

def fread():
    if not os.path.exists(fname):
        return []
    with open(fname, "r") as file:
        items = [decrypt(line.strip()).split(":") for line in file]
    return items

def main_password():
    master_password = input("Lütfen ana şifreyi girin: ")
    return master_password == fpass

def menu():
    while True:
        print("""\n                 1.Yeni kullanıcı adı ve şifre ekle
                 2.Kayıtlı şifreleri görüntüle
                 3.Çıkış                             """)
        choice = input("Seçiminiz: ")

        if choice == "1":
            name = input("Kullanıcı adı: ")
            password = input("Şifre: ")
            registry(name, password)
            print("Kullanıcı adı ve şifre kaydedildi.")
        elif choice == "2":
            if main_password():
                items = fread()
                print("Kayıtlı kullanıcı adı ve şifreler:\n\n")
                for name, password in items:
                    print(f"""Kullanıcı adı: {name}, Şifre: {password}\n""")
            else:
                print("Hatalı ana şifre.")
        elif choice == "3":
            print("Çıkış yapıldı.")
            break
        else:
            print("Geçersiz seçim, lütfen tekrar deneyin.")

if __name__ == "__main__":
    menu()
