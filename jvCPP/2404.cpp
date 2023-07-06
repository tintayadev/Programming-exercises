// Crucigrama
// https://jv.umsa.bo/problem.php?id=2404

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string searchWord(const vector<string>& grid, const string& word) {
    int rows = grid.size();
    int cols = grid[0].length();

    // Buscar horizontalmente
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols - word.length() + 1; j++) {
            if (grid[i].substr(j, word.length()) == word) {
                return word + " (" + to_string(i) + ", " + to_string(j) + ") -H";
            }
        }
    }

    // Buscar verticalmente
    for (int i = 0; i < rows - word.length() + 1; i++) {
        for (int j = 0; j < cols; j++) {
            string column;
            for (int x = i; x < i + word.length(); x++) {
                column += grid[x][j];
            }
            if (column == word) {
                return word + " (" + to_string(i) + ", " + to_string(j) + ") -V";
            }
        }
    }

    // Buscar en diagonal de izquierda a derecha y de arriba hacia abajo
    for (int i = 0; i < rows - word.length() + 1; i++) {
        for (int j = 0; j < cols - word.length() + 1; j++) {
            string diagonal;
            for (int x = 0; x < word.length(); x++) {
                diagonal += grid[i + x][j + x];
            }
            if (diagonal == word) {
                return word + " (" + to_string(i) + ", " + to_string(j) + ") -D";
            }
        }
    }

    return "";
}

int main() {
    vector<string> grid;
    string line;

    getline(cin, line);
    grid.push_back(line);
    for (int i = 0; i < line.length() - 1; i++) {
        getline(cin, line);
        if (line.empty()) {
            break;
        }
        grid.push_back(line);
    }

    string word;

    while (cin >> word) {
        if (word.empty()) {
            break;
        }
        string result = searchWord(grid, word);
        cout << result << endl;
    }

    return 0;
}
