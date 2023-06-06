def esta_encendida(s, t, x):
    if s < t:
        return s <= x < t
    else:
        return s <= x or x < t

s, t, x = map(int, input().split())

if esta_encendida(s, t, x):
    print("Yes")
else:
    print("No")
# 23 0 23