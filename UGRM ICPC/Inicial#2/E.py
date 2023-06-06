def compara_sumas(a, b):
    for i in range(min(len(a), len(b))):
        if int(a[i]) + int(b[i]) > 9:
            return "Hard"
    return "Easy"
a, b = input().split(" ")
a = a[::-1]
b = b[::-1]

print(compara_sumas(a,b))

