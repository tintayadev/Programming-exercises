# # La dinastia Michi
# # https://jv.umsa.bo/problem.php?id=2553

# import re

# def comprueba(cad: str, n:int):
    
#     patron = re.compile(r"[^meow]")
#     coincidencias = patron.search(cad)
#     if coincidencias is None:
#         if cad[0] != "w":
#             return False
#         if cad[-1] != "m":
#             return False

#         if ("m" in cad) and ("e" in cad) and ("o" in cad) and ("w" in cad):
#             w = cad.find("w")
#             o = cad.find("o")
#             e = cad.find("e")
#             m = cad.find("m")
#             if w < o < e < m:
#                 return True
#             else:
#                 return False
#         else:
#             return False
#     else:
#         return False
    
# t = int(input())

# for _ in range(t):
#     n = int(input())
#     cad = input().lower()
#     cad = cad[::-1]
#     if comprueba(cad, n):
#         print("El multiverso es nuestro")
#     else:
#         print("El multiverso no es nuestro")
import re
def verificar_mensaje_encriptado(n, cad):
    if n < 4:
        return False
    
    patron = re.compile(r"[^meow]")
    coincidencias = patron.search(cad)
    if not (coincidencias is None):
        return False
    if not (("m" in cad) and ("e" in cad) and ("o" in cad) and ("w" in cad)):
        return False

    i = 0
    while i < n and (cad[i] == 'm'):
        i += 1
    
    while i < n and (cad[i] == 'e'):
        i += 1
    
    while i < n and (cad[i] == 'o'):
        i += 1
    
    while i < n and (cad[i] == 'w'):
        i += 1
    
    if i == n:
        return True

    return False

t = int(input())

for _ in range(t):
    n = int(input())
    cad = input().lower()

    if verificar_mensaje_encriptado(n, cad):
        print("El multiverso es nuestro")
    else:
        print("El multiverso no es nuestro")