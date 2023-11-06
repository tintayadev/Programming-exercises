# t = int(input())
# for _ in range(t):
#     l, r = map(int, input().split())
#     num_bits = r.bit_length()
#     count_zero_bits = [0] * num_bits
#     count_one_bits = [0] * num_bits

#     for num in range(l, r + 1):
#         for i in range(num_bits):
#             if (num >> i) & 1 == 0:
#                 count_zero_bits[i] += 1
#             else:
#                 count_one_bits[i] += 1

#     min_eliminations = float('inf')

#     for i in range(num_bits):
#         # Para mantener el AND bit a bit no nulo, necesitamos al menos un 1 en cada posición.
#         # Por lo tanto, la cantidad mínima de eliminaciones es la cantidad de 0's en la posición actual.
#         eliminations = count_zero_bits[i]
#         min_eliminations = min(min_eliminations, eliminations)

#     print(min_eliminations)



# def min_eliminations(l, r):
#     num_bits = r.bit_length()
#     count_zero_bits = [0] * num_bits

#     for num in range(l, r + 1):
#         for i in range(num_bits):
#             if (num >> i) & 1 == 0:
#                 count_zero_bits[i] += 1

#     return min(count_zero_bits)

# t = int(input())
# for _ in range(t):
#     l, r = map(int, input().split())
#     result = min_eliminations(l, r)
#     print(result)

def min_eliminations(l, r):
    num_bits = r.bit_length()
    count_zero_bits = [0] * num_bits

    for num in range(l, r + 1):
        count_zero_bits = [count_zero_bits[i] + ((num >> i) & 1 == 0) for i in range(num_bits)]

    return min(count_zero_bits)

t = int(input())
for _ in range(t):
    l, r = map(int, input().split())
    result = min_eliminations(l, r)
    print(result)