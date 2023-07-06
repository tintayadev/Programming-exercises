# Separando vocales y consonantes
while True:
    try:
        cad = input()
        vowel = "aeiouAEIOUI"
        cons = ""
        for elem in cad:
            if elem in vowel:
                print(elem, end="")
            else:
                cons += elem
        print(" , "+cons)
    except EOFError:
        break

