#Traspasos

t = int(input())

for _ in range(t):
    n_a = int(input())
    contenedores_a = list(map(int, input().split(" ")))
    n_b = int(input())
    contenedores_b = list(map(int, input().split(" ")))
    #print(sum(contenedores_a), sum(contenedores_b))
    print(sum(contenedores_a) - sum(contenedores_b))