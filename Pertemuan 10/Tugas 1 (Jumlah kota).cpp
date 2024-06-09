#include <iostream>
#include <vector>
#include <algorithm>

const int INF = 1e9; 

int tsp(int mask, int pos, std::vector<std::vector<int>> &dp, std::vector<std::vector<int>> &dist) {
    int n = dist.size();
    
    if (mask == (1 << n) - 1) {
        return dist[pos][0];
    }
    
    if (dp[mask][pos] != -1) {
        return dp[mask][pos];
    }
    
    int ans = INF;
    
    for (int kota = 0; kota < n; kota++) {
        if ((mask & (1 << kota)) == 0) {
            int newAns = dist[pos][kota] + tsp(mask | (1 << kota), kota, dp, dist);
            ans = std::min(ans, newAns);
        }
    }
    
    return dp[mask][pos] = ans;
}

void printPath(int start, int mask, std::vector<std::vector<int>> &dp, std::vector<std::vector<int>> &dist) {
    int n = dist.size();
    int pos = start;
    std::cout << pos + 1;
    for (int i = 1; i < n; ++i) {
        int nextPos = -1;
        for (int kota = 0; kota < n; ++kota) {
            if ((mask & (1 << kota)) == 0) {
                int newMask = mask | (1 << kota);
                if (dp[mask][pos] == dist[pos][kota] + dp[newMask][kota]) {
                    nextPos = kota;
                    break;
                }
            }
        }
        std::cout << "--->" << nextPos + 1;
        pos = nextPos;
        mask |= (1 << pos);
    }
    std::cout << "--->" << start + 1 << std::endl;
}

int main() {
    int n;
    std::cout << "Masukkan Jumlah Kota : ";
    std::cin >> n;
    
    std::vector<std::vector<int>> dist(n, std::vector<int>(n));
    std::cout << "Nilai Cost Matrix" << std::endl;
    
    for (int i = 0; i < n; ++i) {
        std::cout << "Cost Element Baris ke-: " << i + 1 << std::endl;
        for (int j = 0; j < n; ++j) {
            std::cin >> dist[i][j];
        }
    }
    
    std::vector<std::vector<int>> dp(1 << n, std::vector<int>(n, -1));
    
    int result = tsp(1, 0, dp, dist);
    
    std::cout << "Cost List :" << std::endl;
    for (const auto& row : dist) {
        for (const auto& val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
    
    std::cout << "Jalur Terpendek : ";
    printPath(0, 1, dp, dist);
    
    std::cout << "Minimum Cost : " << result << std::endl;

    return 0;
}
