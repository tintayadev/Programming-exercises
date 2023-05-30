
def startVowel(elem):
    return elem[0] in "aeiouAEIOU"

def startConsonant(elem):
    return elem[0] not in "aeiouAEIOU"

txt = input().split(" ")

cad_v = list(filter(startVowel, txt))

cad_c = list(filter(startConsonant, txt))

print(" ".join(cad_v))
print(" ".join(cad_c))
print(" ".join(txt))
print("Espacios en blanco:", len(txt)-1)