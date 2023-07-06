#include <iostream>
#include <vector>

using namespace std;

void solveF(int m, int x, int y, vector<vector<int> > &matriz);

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, m;
        cin >> n >> m;

        vector<vector<int> > matriz(m, vector<int>(2));
        for (int j = 0; j < m; j++) {
            int u, v;
            cin >> u >> v;
            matriz[j][0] = u;
            matriz[j][1] = v;
        }

        int x, y;
        cin >> x >> y;

        solveF(m, x, y, matriz);
    }

    return 0;
}

void solveF(int m, int x, int y, vector<vector<int> > &matriz) {
    vector<int> aux_lista;
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < m; i++) {
            if (x == matriz[i][0]) {
                aux_lista.push_back(matriz[i][1]);
            }
        }
        int num = aux_lista.size();
        x = aux_lista[num - 1];
    }
    int num = aux_lista.size();
    for (int i = 0; i < num; i++) {
        int var = aux_lista[i];
        if (var == y) {
            cout << "SI" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}