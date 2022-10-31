while(1):
    print("INPUT  :")
    print("Pilih program :")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    pilihan = int(input("Masukkan Pilihan : "))
    if pilihan == 5:
        print("OUTPUT :\nTerimakasih, telah menggunakan kalkulator Muhammad Irfan")
        break
    elif(pilihan>5):
        print("OUTPUT :\nInput anda salah, silahkan coba lagi")
        continue
    a = int(input("Masukkan nilai pertama : "))
    b = int(input("Masukkan nilai kedua   : "))
    if pilihan==1:
        print("OUTPUT :\nHasil penjumlahan antara {:.2f} dengan {:.2f} adalah {:.2f}" .format(a, b, a+b))
    elif pilihan==2:
        print("OUTPUT :\nHasil pengurangan antara {:.2f} dengan {:.2f} adalah {:.2f}" .format(a, b, a-b))
    elif pilihan==3:
        print("OUTPUT :\nHasil perkalian antara {:.2f} dengan {:.2f} adalah {:.2f}" .format(a, b, a*b))
    elif pilihan==4:
        print("OUTPUT :\nHasil pembagian antara {:.2f} dengan {:.2f} adalah {:.2f}" .format(a, b, a/b))