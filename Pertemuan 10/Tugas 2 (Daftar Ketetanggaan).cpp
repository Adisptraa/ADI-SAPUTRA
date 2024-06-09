#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

void printUndirectedGraph() {
    cout << "Daftar Ketetanggaan (Graf Tidak Berarah):\n";
    cout << "Simpul 0: -> 1 -> 4\n";
    cout << "Simpul 1: -> 0 -> 2 -> 3 -> 4\n";
    cout << "Simpul 2: -> 1 -> 3\n";
    cout << "Simpul 3: -> 1 -> 2 -> 4\n";
    cout << "Simpul 4: -> 0 -> 1 -> 3\n";
    cout << "\n";
}

void printDirectedGraph() {
    cout << "Daftar Ketetanggaan (Graf Berarah):\n";
    cout << "Simpul 0: -> 1 -> 4\n";
    cout << "Simpul 1: -> 2 -> 3 -> 4\n";
    cout << "Simpul 2: -> 3\n";
    cout << "Simpul 3: -> 4\n";
    cout << "Simpul 4:\n";
    cout << "\n";
}

void printWeightedGraph() {
    cout << "Daftar Ketetanggaan (Graf Berbobot):\n";
    cout << "Simpul 0: -> (1, 10) -> (4, 20)\n";
    cout << "Simpul 1: -> (2, 30) -> (3, 40) -> (4, 50)\n";
    cout << "Simpul 2: -> (3, 60)\n";
    cout << "Simpul 3: -> (4, 70)\n";
    cout << "Simpul 4:\n";
}

int main() {
    printUndirectedGraph();
    printDirectedGraph();
    printWeightedGraph();
    return 0;
}
