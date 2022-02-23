#include <iostream>
#include <vector>
#include <algorithm>

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
    int n;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    int minn = 100000000;
    for (int i = 0; i < n - 1; i++) {
        int tmp = v[i] ^ v[i + 1];
        if (minn > tmp) {
            minn = tmp;
        }
    }

    cout << minn << endl;
}
