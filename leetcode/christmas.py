n = int(input('n = '))
tree = n//2
for i in range(1,n+1):
    print('-'*((n-i)) +'*'*(i*2-1) +'-'*((n-i)))
for i in range(1,n//2):
    print('-'*((2*n-1-tree)//2) +'*'*(tree) +'-'*((2*n-1-tree)//2))