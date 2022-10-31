a, b = input('INPUT  : ').split()
a = int(a)
b = int(b)
print('OUTPUT :')
if a<b:
    for i in range (a, b):
        print(a, b, end=' - ')
        a+=1
        b-=1
        continue
    print(a, b, end=' ')
    a+=1
    b-=1
else:
    if a>b:
        nA=a
        nB=b
        for i in range (b, a):
            print(a, b, end=' - ')
            a-=1
            b+=1
            if a%nB==1:
                break
    if a<b:
        for i in range (a, b):
            print(a, b, end=' - ')
            a-=1
            b+=1
            break
        print(a, b, end='')
        a-=1
        b+=1