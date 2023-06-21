# Ven Primo
# https://jv.umsa.bo/problem.php?id=2401


import math

def es_primo(num):
    if num < 2:
        return False
    if num == 2 or num == 3:
        return True
    if num % 2 == 0 or num % 3 == 0:
        return False

    limite = int(math.sqrt(num)) + 1
    for i in range(5, limite, 6):
        if num % i == 0 or num % (i + 2) == 0:
            return False

    return True

n = int(input())
ls = []
while len(ls) < n:
    num = int(input())
    if es_primo(num):
        ls.append(num)
res = sorted(ls)
for elem in res:
    print(str(elem)+" ",end="")

#  4, 12, 17, 2, 25, 36, 3, 9, 12, 23, 40, 11, 17