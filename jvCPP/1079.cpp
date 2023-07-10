#include <iostream>
#include <cstring>

using namespace std;

bool esAceptable(const char* cad) {
    bool tieneVocal = false;
    int len = strlen(cad);

    for (int i = 0; i < len; i++) {
        if (cad[i] == 'a' || cad[i] == 'e' || cad[i] == 'i' || cad[i] == 'o' || cad[i] == 'u') {
            tieneVocal = true;
            break;
        }
    }

    if (!tieneVocal) {
        return false;
    }

    for (int i = 0; i < len - 1; i++) {
        if (cad[i] == cad[i+1] && !((cad[i] == 'e' && cad[i+1] == 'e') || (cad[i] == 'o' && cad[i+1] == 'o'))) {
            return false;
        }
    }

    for (int i = 0; i < len - 2; i++) {
        if ((cad[i] == 'a' || cad[i] == 'e' || cad[i] == 'i' || cad[i] == 'o' || cad[i] == 'u') &&
            (cad[i+1] == 'a' || cad[i+1] == 'e' || cad[i+1] == 'i' || cad[i+1] == 'o' || cad[i+1] == 'u') &&
            (cad[i+2] == 'a' || cad[i+2] == 'e' || cad[i+2] == 'i' || cad[i+2] == 'o' || cad[i+2] == 'u')) {
            return false;
        }

        if ((cad[i] != 'a' && cad[i] != 'e' && cad[i] != 'i' && cad[i] != 'o' && cad[i] != 'u') &&
            (cad[i+1] != 'a' && cad[i+1] != 'e' && cad[i+1] != 'i' && cad[i+1] != 'o' && cad[i+1] != 'u') &&
            (cad[i+2] != 'a' && cad[i+2] != 'e' && cad[i+2] != 'i' && cad[i+2] != 'o' && cad[i+2] != 'u')) {
            return false;
        }
    }

    return true;
}

int main() {
    char cad[21];

    while (true) {
        cin.getline(cad, sizeof(cad));
        if (strcmp(cad, "end") == 0) {
            break;
        }
        if (esAceptable(cad)) {
            cout << "<" << cad << "> is acceptable." << endl;
        } else {
            cout << "<" << cad << "> is not acceptable." << endl;
        }
    }

    return 0;
}
