#include <iostream>

using namespace std;

//Prototypes
void execute();

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        execute();
    }

    return 0;
}

void execute() {
    int n, k;
    int v[1000000];
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int index = n - (k % n);

    for (int i = index; i < n; i++) {
        cout << v[i] << " ";
    }
    for (int i = 0; i < index; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}
