#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>

using namespace std;

// KNN = O(N)

mt19937_64 random_generator(chrono::steady_clock::now().time_since_epoch().count());

int main() {
    // We can calculate the distances to the object in O(N)

    int N = random_generator() % 10, K = random_generator() % N + 1;

    cout << N << ' ' << K << '\n';

    vector<int> distances(N);
    for (int i = 0; i < N; i++) {
        cout << (distances[i] = abs(static_cast<int>(random_generator() % 100))) << ' ';
    }
    cout << endl;

    // nth_element works in O(N)
    nth_element(distances.begin(), distances.begin() + K, distances.end());

    for (int i = 0; i < K; i++) {
        cout << distances[i] << ' ';
    }
    return 0;
}
