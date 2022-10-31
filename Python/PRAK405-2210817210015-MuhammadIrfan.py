n, k = input('INPUT  : ').split()
n = int(n)
k = int(k)
h1=0
h2=0
h3=0
i=0
print('OUTPUT :')
while i<n:
    i+=1
    j=i
    if i==0:
        break
    while j>0:
        j-=1
        print('({} * {})'.format(j+1,k), end='')
        if j>0:
            print(' + ', end='')
    h1=i*k
    h2+=h1
    print(' = {}'.format(h2))
    h3+=h2
print('{}'.format(h3))