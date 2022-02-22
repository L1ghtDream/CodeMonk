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
    int n;
    int m[30][30];
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
        }
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int ii = i; ii < n; ii++) {
                for (int jj = j; jj < n; jj++) {
                    if (m[i][j] > m[ii][jj]) {
                        count++;
                    }
                }
            }
        }
    }

    cout << count << endl;
}
