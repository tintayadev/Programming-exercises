# Chipher Shipher
# https://codeforces.com/contest/1840/problem/A
t = int(input())

for i in range(t):
    n = int(input())
    a = input() +";"
    a_x = a[0]
    res = ""
    i = 1
    while i < len(a)-1:
        if a_x == a[i]:
            res+=a_x
            a_x = a[i+1]
            i+=1
        i += 1

    print(res)
