def is_palindromic_subsequence(arr):
    n = len(arr)
    palindromic_found = False

    for i in range(n):
        for j in range(i + 1, n):
            for k in range(j + 1, n):
                if arr[i] == arr[k]:
                    palindromic_found = True
                    break
            if palindromic_found:
                break
        if palindromic_found:
            break

    if palindromic_found:
        print("YES")
    else:
        print("NO")

t = int(input())  # Número de casos de prueba
for _ in range(t):
    n = int(input())  # Longitud del vector a
    a = list(map(int, input().split()))  # Elementos del vector a
    is_palindromic_subsequence(a)