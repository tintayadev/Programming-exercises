casos = int(input())
for _ in range(casos):
    mm, ss = map(int, input().split(":"))
    t_esperado = ss + (mm*60)
    t_real = mm*3600 + ss*60
    HH = (t_real - t_esperado)//3600
    MM = ((t_real - t_esperado)%3600)//60
    SS = ((t_real - t_esperado)%3600)%60
    print(f"{HH:02d}:{MM:02d}:{SS:02d}")
