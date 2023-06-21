# GUSANILLO
# https://jv.umsa.bo/problem.php?id=2571

def contar(rama, descanso, hojas):
    cnt = 0
    i = 0
    while True:
        if i > rama:
            return cnt
        if i % hojas == 0:
            cnt += 1
        i += descanso


while True:
    r, d, h = map(int, input().split())
    if r == 0 and d == 0 and h == 0:
        break
    print(contar(r, d, h))
