# Secuencia Collatz
# https://jv.umsa.bo/problem.php?id=2403

# t = int(input())

# for _ in range(t):
#     n = int(input())
#     num = n

#     cnt = 0
#     sw = True
#     # not (num == 1 or num == -1)
#     while sw:
#         cnt += 1
#         if num % 2 == 0:
#             num = num // 2
#         else:
#             num = (num*3)+1
#         # print(num, end=" ")

#         if num == 1 or num == -1:
#             sw = False
#             break
#         if n == num:
#             cnt = -1
#             sw = False
#             break

#     print(cnt)
        

def collatz_steps(n, cache):
    if n in cache:
        return cache[n]

    original_n = n
    cnt = 0
    visited = set()
    # n != 1 and n != -1
    sw = True
    while sw:
        
        visited.add(n)
        if n % 2 == 0:
            n = n // 2
        else:
            n = (n * 3) + 1

        cnt += 1

        if n == 1 or n==-1:
            break

        if n in visited:
            cnt = -1
            break


    cache[original_n] = cnt
    return cnt


t = int(input())  # t es para los casos de prueba que puedan haber
cache = {}

for _ in range(t):
    n = int(input())
    pasos = collatz_steps(n, cache)
    print(pasos)



