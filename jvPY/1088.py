def calculate_minimum_distance(keyboard, word):
    positions = {key: i for i, key in enumerate(keyboard)}

    total_distance = 0
    current_position = positions[word[0]]
    for i in range(1, len(word)):
        next_position = positions[word[i]]
        distance = abs(next_position - current_position)
        total_distance += distance
        current_position = next_position

    return total_distance

num_cases = int(input())

for _ in range(num_cases):
    keyboard = input()
    word = input()

    distance = calculate_minimum_distance(keyboard, word)
    print(distance)
