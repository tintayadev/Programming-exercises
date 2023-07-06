# Intervalo incompleto

def verificar_intervalo(n, m, k, vector_a, vector_b):
    elementos = set(vector_a + vector_b)
    intervalo = set(range(1, k+1))
    
    if intervalo.issubset(elementos):
        return "SI"
    else:
        return "NO"

t = int(input())
for _ in range(t):
    n, m, k = map(int, input().split())
    vector_a = list(map(int, input().split()))
    vector_b = list(map(int, input().split()))
    
    resultado = verificar_intervalo(n, m, k, vector_a, vector_b)
    print(resultado)