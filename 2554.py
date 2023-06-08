# !(!(! Flipping_Typing())))
# https://jv.umsa.bo/problem.php?id=2554

def check(cad):
    for i in range(1, len(cad)):
        if (cad[i] in der) and (cad[i-1] in der):
            return False
        if (cad[i] in izq) and (cad[i-1] in izq):
            return False
    return True
n = int(input())
der = "qwertasdfgzxcvb"
izq = "yuiophjklnm"

for _ in range(n):
    cad = list(input())
    if check(cad):
        print("Si")
    else:
        print("No")