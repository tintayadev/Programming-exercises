#include <iostream>
#include <unordered_map>
#include <cmath>

using namespace std;

int calculate_minimum_distance(const string& keyboard, const string& word) {
    unordered_map<char, int> positions;
    positions.reserve(keyboard.length());
    for (int i = 0; i < keyboard.length(); ++i) {
        positions[keyboard[i]] = i;
    }

    int total_distance = 0;
    auto it = word.begin();
    char current_char = *it++;
    int current_position = positions[current_char];

    while (it != word.end()) {
        char next_char = *it++;
        int next_position = positions[next_char];
        int distance = abs(next_position - current_position);
        total_distance += distance;
        current_position = next_position;
    }

    return total_distance;
}

int main() {
    int num_cases;
    cin >> num_cases;
    cin.ignore();

    for (int i = 0; i < num_cases; ++i) {
        string keyboard, word;
        getline(cin, keyboard);
        getline(cin, word);
        int distance = calculate_minimum_distance(keyboard, word);
        cout << distance << endl;
    }

    return 0;
}