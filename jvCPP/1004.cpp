// Saliendo del laberinto
// https://jv.umsa.bo/problem.php?id=1004

#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
using namespace std;

const int INF = 1e9;

int bfs(vector<vector<char>>& laberinto, int x1, int y1, int x2, int y2) {
    int n = laberinto.size();
    int m = laberinto[0].size();

    vector<vector<int>> dist(n, vector<int>(m, INF));
    dist[x1][y1] = 0;

    queue<pair<int, int>> q;
    q.push({x1, y1});

    int dx[] = {0, 0, -1, 1};
    int dy[] = {-1, 1, 0, 0};

    while (!q.empty()) {
        int x, y;
        tie(x, y) = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m && laberinto[nx][ny] != '#' && dist[nx][ny] == INF) {
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    return dist[x2][y2];
}

int main() {
    int T;
    cin >> T;

    for (int caso = 1; caso <= T; caso++) {
        int n, m;
        cin >> n >> m;

        vector<vector<char>> laberinto(n, vector<char>(m));
        int x1, y1, x2, y2;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> laberinto[i][j];
                if (laberinto[i][j] == '.') {
                    x2 = i;
                    y2 = j;
                }
            }
        }

        cin >> x1 >> y1;

        int min_movimientos = bfs(laberinto, x1, y1, x2, y2);

        cout << "Laberinto #" << caso << ": " << min_movimientos << endl;
    }

    return 0;
}
