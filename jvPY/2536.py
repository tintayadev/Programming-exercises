n = int(input())
for i in range(n):
    cad = input()
    if len(cad) > 10:
        new_cad = cad[:1]+str(len(cad)-2)+cad[-1:]
        print(new_cad)
    else:
        print(cad)