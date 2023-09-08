while True:
    try:
        cadena = input()
        nums = []
        for c in cadena:
            binario = format(ord(c), '08b')
            n_binario = binario[4:] + binario[:4]
            num = int(n_binario, 2)
            nums.append(str(num))
        print(" ".join(nums))
    except EOFError:
        break