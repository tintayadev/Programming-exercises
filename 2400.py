# Estara? "O" No Estara?
# https://jv.umsa.bo/problem.php?id=2400

cad = input().split(" ")
for elem in cad:
    if "o" in elem:
        print(elem.strip(","))
        