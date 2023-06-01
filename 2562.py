# Cesar-K
n = int(input())
cad = input().split(" ")
cad = [x.lower() for x in cad]
new_cad= []
for elem in cad:
    result = ""
    for x in elem:
        if ord(x)-n < 97:
            result += chr(123-(n))
        else:
            result += chr(ord(x)-n)
    new_cad.append(result)

print(*new_cad)
# 97 = a
# 122 = z