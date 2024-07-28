n = int(input('n = '))
if(n%2 ==0):
    row = n-1
    print('-'*((row-1)//2) +'*' + '-'*((row-1)//2))
    for i in range((n-2)//2,0,-1):
        print('-'*(i-1) + '*' + '-'*(row-2*i) + '*' + '-'*(i-1))
    for i in range(1,(n-2)//2+1):
        print('-'*(i-1) + '*' + '-'*(row-2*i) + '*' + '-'*(i-1))
    print('-'*((row-1)//2) +'*' + '-'*((row-1)//2))
else:
    row = n
    print('-'*((row-1)//2) +'*' + '-'*((row-1)//2))
    for i in range((n-2)//2,-1,-1):
        print('-'*(i) + '*' + '-'*(row-2*i-2) + '*' + '-'*(i))
    for i in range(1,(n-2)//2+1):
        print('-'*(i) + '*' + '-'*(row-2*i-2) + '*' + '-'*(i))
    print('-'*((row-1)//2) +'*' + '-'*((row-1)//2))
