# n = people
# k = cards*(steps)
# a = first person
n, k, a = map(int, input().split(" ")) #3 14 2

if(n == 1):
    print(1)
else:
    result = (a+(k-1))%n
    if(result == 0):
        print(n)
    else:
        print(result)

# (2+(14-1)) % 3

# 1