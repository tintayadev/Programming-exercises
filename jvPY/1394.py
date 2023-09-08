# def verifica(num: str) -> int:
#     dos = num.count("2")
#     tres = num.count("3")
#     cinco = num.count("5")
#     siete = num.count("7")
    
#     if dos and tres and cinco:      # 2 3 5
#         return 1
#     if dos and tres and siete:    # 2 3 7
#         return 1
#     if dos and cinco and siete:   # 2 5 7
#         return 1
#     if dos >= 2 and cinco:        # 2 2 5
#         return 1
#     if dos and cinco >= 2:        # 2 5 5
#         return 1
#     if dos and tres >= 2:         # 2 3 3
#         return 1
#     if dos and siete >=2:         # 2 7 7
#         return 1
#     return 0
# casos = int(input())
# cnt = 0
# for _ in range(casos):
#     num = input()
#     # 2 3 5 7
#     # 2 2 2
#     if num.count("2") >= 3:
#         cnt += 1
#     else:
#         cnt += verifica(num)
    
# print(cnt)
    
    
    
    
n = int(input())
cnt = 0

for _ in range(n):
    num = int(input())
    n_d = 0
    suma = 0
    while num > 0:
        digito = num % 10
        if digito in [2, 3, 5, 7]:
            suma += digito
            n_d += 1
        num //= 10
    if suma % 2 == 0 and n_d >=3:
        cnt += 1

print(cnt)