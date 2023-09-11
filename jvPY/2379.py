# def es_primo(n: int):
#     if n <= 1:
#         return False
#     elif n <= 3:
#         return True
#     elif n % 2 == 0 or n % 3 == 0:
#         return False
#     i = 5
#     while i * i <= n:
#         if n % i == 0 or n % (i + 2) == 0:
#             return False
#         i += 6
#     return True
def es_primo(num):
    if num < 2:
        return False
    if num == 2 or num == 3:
        return True
    if num % 2 == 0 or num % 3 == 0:
        return False

    limite = int(num**(1/2)) + 1
    for i in range(5, limite, 6):
        if num % i == 0 or num % (i + 2) == 0:
            return False

    return True

casos = int(input())
for _ in range(casos):
    num = int(input())
    print(f"{num}: ",end="")
    if not es_primo(num):
        print(-1)
    else:
        lista = []
        n = 10
        for i in range(40):
            modulo = n % num
            n = n // num
            lista.append(n)

            if modulo < num:
                n = modulo * 10
        print(*lista, end=" \n")
