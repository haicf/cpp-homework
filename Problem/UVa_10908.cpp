#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int T;
    if (!(cin >> T)) return 0;

    while (T--) {
        int M, N, Q;
        cin >> M >> N >> Q;

        vector<string> grid(M);
        for (int i = 0; i < M; i++) cin >> grid[i];

        cout << M << " " << N << " " << Q << endl;

        for (int q = 0; q < Q; q++) {
            int r, c;
            cin >> r >> c;

            char target = grid[r][c];
            int side = 1;

            // Expand radius k
            for (int k = 1; ; k++) {
                int r1 = r - k, r2 = r + k;
                int c1 = c - k, c2 = c + k;

                // Boundary check
                if (r1 < 0 || r2 >= M || c1 < 0 || c2 >= N) break;

                // Check square area
                bool fail = false;
                for (int i = r1; i <= r2; i++) {
                    for (int j = c1; j <= c2; j++) {
                        if (grid[i][j] != target) {
                            fail = true; // Still need a way to tell the outer loop
                            break;
                        }
                    }
                    if (fail) break;
                }

                if (fail) break; // If failed, stop expanding
                side = 2 * k + 1; // If passed, update side
            }
            cout << side << endl;
        }
    }
    return 0;
}
