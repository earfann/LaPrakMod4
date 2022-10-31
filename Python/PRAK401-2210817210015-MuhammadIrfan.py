bil, sim = input("INPUT  : ").split()
bil = int(bil)
print("OUTPUT :")
for i in range (1, 51):
    if i%bil==0:
        print(sim, end=' ')
    else:
        print(i, end=' ')