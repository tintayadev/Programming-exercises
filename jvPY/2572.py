# Promedio de Edades
# https://jv.umsa.bo/problem.php?id=2572

# t = int(input())

# for _ in range(t):
#     aux = []
#     cad = input() + "_"
#     i = 0
#     while i < len(cad)-1:
#         if cad[i] == "0":
#             pass
#         elif cad[i] == "1" and cad[i+1]=="0":
#             aux.append(10)
#             i += 1
#         else:
#             if(cad[i].isnumeric()):
#                 aux.append(int(cad[i]))
#         i += 1

#     print("{:.2f}".format(sum(aux)/len(aux)))

t = int(input())

for _ in range(t):
    cad = input() + "_"
    i = 0
    sum_ = 0
    count = 0

    while i < len(cad) - 1:
        if cad[i] == "0":
            pass
        elif cad[i] == "1" and cad[i + 1] == "0":
            sum_ += 10
            count += 1
            i += 1
        else:
            if cad[i].isnumeric():
                sum_ += int(cad[i])
                count += 1
        i += 1

    res = sum_ / count
    print("{:.2f}".format(res))
