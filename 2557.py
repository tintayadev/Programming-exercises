# Cadena de Primos Vs Pares
def generar_primos(n):
    es_primo = [True] * (n + 1)
    es_primo[0] = es_primo[1] = False

    for i in range(2, int(n ** 0.5) + 1):
        if es_primo[i]:
            for j in range(i * i, n + 1, i):
                es_primo[j] = False

    primos = [num for num, es_p in enumerate(es_primo) if es_p]

    return primos

primos = generar_primos(1000)
t = int(input())
for _ in range(t):
    cad = input()
    cad_pares = "" 
    cad_primos = ""
    for i in range(len(cad)):
        if i % 2 == 0 and cad[i] in "aeiou":
            cad_pares += cad[i]
        if i in primos and cad[i] in "aeiou":
            cad_primos += cad[i]
    if len(cad_pares) > len(cad_primos):
        print("Par")
    else:
        print("Primo")
