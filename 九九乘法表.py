print("九九乘法表：")
for i in range(1, 10, 1):
    for j in range(1, 10, 1):
        print(j, '*', i, '=', i * j, '\t', end = ' ')
    print()
