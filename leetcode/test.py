a = 'wernnwernn'
lst = [[0 for i in range(3)] for i in range(4)]
lst[0][0] = 1
# for i in range(len(lst)):
#     for j in range(len(lst[i])):
#         lst[i][j] = i
print(lst)
for i in range(len(lst)):
    for j in range(len(lst[i])):
        print(lst[i][j],end = ' ')
    print('')