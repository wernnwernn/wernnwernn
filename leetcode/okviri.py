word = input("input : ")
n = len(word)
first = '..'+'#...'*(n-1) + '#..'
sec = ('.#'*(n*2)+'.')
third = '#.'*(n*2)+'#'
print(first)
print(sec)
print(third)
print(sec)
print(first)

for i in range(1,len(sec)+1): #first
    if((i+1)%12==0):
        print('*')
    else:
        print(first[i])
for i in range(1,len(sec)+1): #sec
    if((i/2+1)%6 ==0 or (i/2)%6==0):
        print('*')
    else:
        print(sec[i])
for i in range(1,len(sec)+1):
    if((i+1)%4==0):
        print(word[(i+1)//4-1])
    elif((i/2+1)%6 ==0) :
        # third[i-1] = '*'
        print(third[i])
    elif((i/2)%6 ==0) :
        # third[i+1] = '*'
        print(third[i])
    else:
        print(third[i])
for i in range(1,len(sec)+1): #sec
    if((i/2+1)%6 ==0 or (i/2)%6==0):
        print('*')
    else:
        print(sec[i])
for i in range(1,len(sec)+1): #first
    if((i+1)%12==0):
        print('*')
    else:
        print(first[i])