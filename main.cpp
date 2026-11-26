print("=== APLIKASI GENAP ATAU GANJIL ===")

try:
    bilangan = int(input("Masukkan sebuah bilangan: "))

    if bilangan % 2 == 0:
        print("Bilangan", bilangan, "adalah bilangan GENAP")
    else:
        print("Bilangan", bilangan, "adalah bilangan GANJIL")

except ValueError:
    print("Masukkan bilangan bulat yang valid.")

input("Tekan Enter untuk keluar...")
