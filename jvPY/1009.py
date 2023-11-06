# casos = int(input())
# for _ in range(casos):
#     nums = list(map(int, input().split()))
#     if sum(nums[:2]) < nums[0]:
#         print(" ".join(nums[:2]))
#     else:
#         res = []
#         for i in range(2, len(nums)):
#             x = nums[0]-nums[i]
#             if x in nums[2:]:
#                 res.append(nums[i])
#         print(res)

# casos = int(input())
# for _ in range(casos):
#     nums = list(map(int, input().split()))
#     N, T, pistas = nums[0], nums[1], nums[2:]
#     if sum(pistas) <= N:
#         print(*pistas)
#     else:
#         max_duracion = 0
#         max_configuracion = 0
        
#         for i in range(2 ** T):
#             duracion_total = 0
#             configuracion = bin(i)[2:].zfill(T)
            
#             for j in range(T):
#                 if configuracion[j] == '1':
#                     duracion_total += pistas[j]
            
#             if duracion_total <= N and duracion_total >= max_duracion:
#                 if duracion_total > max_duracion or int(configuracion, 2) > max_configuracion:
#                     max_duracion = duracion_total
#                     max_configuracion = int(configuracion, 2)
        
#         print(*[pistas[i] for i in range(T) if bin(max_configuracion)[2:].zfill(T)[i] == '1'])

casos = int(input())
for _ in range(casos):
    nums = list(map(int, input().split()))
    N, T, pistas = nums[0], nums[1], nums[2:]
    
    if sum(pistas) <= N:
        print(*pistas)
    else:
        max_duracion = 0
        max_configuracion = 0

        for i in range(1, 2 ** T):
            duracion_total = 0
            configuracion = bin(i)[2:].zfill(T)

            for j in range(T):
                if configuracion[j] == '1':
                    duracion_total += pistas[j]

            if duracion_total <= N and (duracion_total > max_duracion or int(configuracion, 2) > max_configuracion):
                max_duracion = duracion_total
                max_configuracion = int(configuracion, 2)

        print(*[pistas[i] for i in range(T) if (max_configuracion >> (T - 1 - i)) & 1 == 1])


