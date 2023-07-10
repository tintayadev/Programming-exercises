# Facil de Decir?
# https://jv.umsa.bo/problem.php?id=1079
def reglas(cad):
    if not ("a" in cad or "e" in cad or "i" in cad or "o" in cad or "u" in cad):
        return f"<{cad}> is not acceptable."
    for i in range(len(cad)-1):
        if cad[i] == cad[i+1] and not(cad[i:i+2] == "ee" or cad[i:i+2] == "oo"):
            return f"<{cad}> is not acceptable."
    for i in range(0, len(cad)-2):
        if cad[i] in "aeiou" and cad[i+1] in "aeiou" and cad[i+2] in "aeiou":
            return f"<{cad}> is not acceptable."
        if cad[i] not in "aeiou" and cad[i+1] not in "aeiou" and cad[i+2] not in "aeiou":
            return f"<{cad}> is not acceptable."
    return f"<{cad}> is acceptable."
while(True):
    cad = input()
    if cad == "end":
        break
    print(reglas(cad))