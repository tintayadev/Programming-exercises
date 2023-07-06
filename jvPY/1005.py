# Bob el jardinero
# https://jv.umsa.bo/problem.php?id=1005
import math

def redondeo(num):
    return math.floor(num *100 + 0.5) / 100
t = int(input())
for i in range(t):
    cad = list(input())
    tam = len(cad)
    print(f"Caso {i+1}:")
    print(f"a= {redondeo((cad.count('a') * 100) / tam) :.2f}")
    print(f"e= {redondeo((cad.count('e') * 100) / tam) :.2f}")
    print(f"i= {redondeo((cad.count('i') * 100) / tam) :.2f}")
    print(f"o= {redondeo((cad.count('o') * 100) / tam) :.2f}")
    print(f"u= {redondeo((cad.count('u') * 100) / tam) :.2f}")