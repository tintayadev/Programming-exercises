# No me olvides
# https://jv.umsa.bo/problem.php?id=2573

n = int(input())
aux = ""
for _ in range(n):
    cad = input().strip(" ") +"X"
    for i in range(len(cad)-1):
        if cad[i].isnumeric():
            aux+=cad[i]
            if not cad[i+1].isnumeric():
                aux+=" "
res = aux[:-1].split(" ")
res = [int(x) for x in res]
res.sort()
print(*res)

    