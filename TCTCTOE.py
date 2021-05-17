t = int(input())
for i in range(t):
    x = 0
    o = 0
    n = 0
    l = []

    for i in range(3):
        tic = input()
        l.append(tic)

    for i in range(3):
        for j in range(3):
            if l[i][j] == 'X':
                x += 1
            elif l[i][j] == 'O':
                o += 1
            elif l[i][j] == '_':
                n += 1
    X = 0
    O = 0
    if l[0][0] == 'X' and l[0][1] == 'X' and l[0][2] == 'X':
        X = 1
    if l[1][0] == 'X' and l[1][1] == 'X' and l[1][2] == 'X':
        X = 1
    if l[2][0] == 'X' and l[2][1] == 'X' and l[2][2] == 'X':
        X = 1
    if l[0][0] == 'X' and l[1][0] == 'X' and l[2][0] == 'X':
        X = 1
    if l[0][1] == 'X' and l[1][1] == 'X' and l[2][1] == 'X':
        X = 1
    if l[0][2] == 'X' and l[1][2] == 'X' and l[2][2] == 'X':
        X = 1
    if l[0][0] == 'X' and l[1][1] == 'X' and l[2][2] == 'X':
        X = 1
    if l[0][2] == 'X' and l[1][1] == 'X' and l[2][0] == 'X':
        X = 1

    if l[0][0] == 'O' and l[0][1] == 'O' and l[0][2] == 'O':
        O = 1
    if l[1][0] == 'O' and l[1][1] == 'O' and l[1][2] == 'O':
        O = 1
    if l[2][0] == 'O' and l[2][1] == 'O' and l[2][2] == 'O':
        O = 1
    if l[0][0] == 'O' and l[1][0] == 'O' and l[2][0] == 'O':
        O = 1
    if l[0][1] == 'O' and l[1][1] == 'O' and l[2][1] == 'O':
        O = 1
    if l[0][2] == 'O' and l[1][2] == 'O' and l[2][2] == 'O':
        O = 1
    if l[0][0] == 'O' and l[1][1] == 'O' and l[2][2] == 'O':
        O = 1
    if l[0][2] == 'O' and l[1][1] == 'O' and l[2][0] == 'O':
        O = 1

    if (X == 1 and O == 1) or (x-o < 0) or (x-o > 1):
        print(3)
    elif x == 0 and o == 0 and n == 9:
        print(2)
    elif X == 1 and O == 0 and x > o:
        print(1)
    elif X == 0 and O == 1 and x == o:
        print(1)
    elif X == 0 and O == 0 and n == 0:
        print(1)
    elif X == 0 and O == 0 and n > 0:
        print(2)
    else:
        print(3)
