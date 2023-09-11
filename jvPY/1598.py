# def factorizar(n):
#     factores = []
#     i = 2
#     while i * i <= n:
#         if n % i:
#             i += 1
#         else:
#             n //= i
#             if i not in factores:
#                 factores.append(i)
#     if n > 1:
#         if n not in factores:
#             factores.append(n)
#     return factores

# while True:
#     try:
#         a, b = map(int, input().split())
#         pares = []
#         for i in range(a, b - 1):
#             if sum(factorizar(i)) == sum(factorizar(i+1)):
#                 pares.append((i, i + 1))
#         for par in pares:
#             print(par[0], par[1])
#     except EOFError:
#         break
def genera_primos(limite):
    n = (limite - 2) // 2
    flags = [False] * (n + 1)
    primos = [2]

    for i in range(1, n + 1):
        j = i
        while i + j + 2 * i * j <= n:
            flags[i + j + 2 * i * j] = True
            j += 1

    for i in range(1, n + 1):
        if not flags[i]:
            primos.append(2 * i + 1)

    return primos
def factorizar(n):
    factores = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            if i not in factores:
                factores.append(i)
    if n > 1:
        if n not in factores:
            factores.append(n)
    return factores

primos = genera_primos(1000)

while True:
    try:
        a, b = map(int, input().split())
        pares = []
        for i in range(a, b - 1):
            if sum(factorizar(i)) == sum(factorizar(i+1)):
                pares.append((i, i + 1))
        for par in pares:
            print(par[0], par[1])
    except EOFError:
        break