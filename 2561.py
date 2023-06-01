#Capitalizar poema
n = int(input())

for _ in range(n):
    cad = input().split(" ")
    cad = [x.capitalize() for x in cad] 
    print(*cad)