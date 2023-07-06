cad = input()
new_cad = ""
cad = cad.lower()
for i in cad:
    if i not in "aeiouy":
        new_cad += "."+i
print(new_cad.lower())