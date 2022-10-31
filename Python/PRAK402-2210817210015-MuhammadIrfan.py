bil = int(input('INPUT  : '))
print('OUTPUT :')
for i in range (1, bil):
    if i%2!=0:
        print(i, end=' ')
print('\n')
while bil > 0:
    if bil%2==0:
        print(bil, end=' ')
    bil-=1