#include <bits/stdc++.h>
using namespace std;

const int N = 3;

struct PuzzleState {
    array<array<int, N>, N> board;
    int x, y;
    int depth;
};

bool isValid(int x, int y) {
    return x >= 0 && x < N && y >= 0 && y < N;
}

string boardToString(const array<array<int, N>, N>& b) {
    string s;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            s += to_string(b[i][j]) + (i == N-1 && j == N-1 ? string() : ",");
    return s;
}

void printBoard(const array<array<int, N>, N>& b) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) cout << b[i][j] << (j+1==N ? "" : " ");
        cout << '\n';
    }
    cout << "--------\n";
}

bool isGoalState(const array<array<int, N>, N>& b) {
    array<array<int, N>, N> goal = {{{1,2,3},{4,5,6},{7,8,0}}};
    return b == goal;
}

int main() {
    array<array<int, N>, N> start = {{{1,2,3},{4,0,5},{6,7,8}}};
    int bx = 1, by = 1; 
    
    cout << "Initial State:\n";
    printBoard(start);

    const int dx[4] = {0,0,-1,1};
    const int dy[4] = {-1,1,0,0};

    queue<PuzzleState> q;
    unordered_set<string> visited;

    PuzzleState init{start, bx, by, 0};
    q.push(init);
    visited.insert(boardToString(start));

    while (!q.empty()) {
        PuzzleState cur = q.front(); q.pop();

        cout << "Depth: " << cur.depth << '\n';
        printBoard(cur.board);

        if (isGoalState(cur.board)) {
            cout << "Goal state reached at depth " << cur.depth << "\n";
            return 0;
        }

        for (int i = 0; i < 4; ++i) {
            int nx = cur.x + dx[i];
            int ny = cur.y + dy[i];
            if (!isValid(nx, ny)) continue;

            auto nb = cur.board;
            swap(nb[cur.x][cur.y], nb[nx][ny]);

            string s = boardToString(nb);
            if (!visited.count(s)) {
                visited.insert(s);
                PuzzleState next{nb, nx, ny, cur.depth + 1};
                q.push(next);
            }
        }
    }

    cout << "No solution found (Unsolvable Puzzle)\n";
    return 0;
}