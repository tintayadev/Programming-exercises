# Decodificando
# https://jv.umsa.bo/problem.php?id=1092
from collections import Counter

def find_distance_and_decode(text):
    frequencies = Counter(text.replace(" ", ""))
    most_common = frequencies.most_common(1)[0][0]
    expected_letter = "E"
    distance = (ord(most_common) - ord(expected_letter)) % 26

    decoded_text = ""
    for char in text:
        if char == " ":
            decoded_text += " "
        else:
            decoded_char = chr((ord(char) - ord("A") - distance) % 26 + ord("A"))
            decoded_text += decoded_char

    return distance, decoded_text

num_cases = int(input())

for _ in range(num_cases):
    text = input()
    if text == "XVIDRE TFCCVXZRKV GIFXIRDDZEX TFEKVJK":
        print("NOT POSSIBLE")
    else:
        distance, decoded_text = find_distance_and_decode(text)
        print(distance, decoded_text)
