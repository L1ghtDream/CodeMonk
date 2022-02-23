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
    long long int n, k;
    string maxx = "0";
    long long int index = 0;
    long long int period = -1;

    cin >> n >> k;

    string bin;
    cin >> bin;

    for (int i = 0; i < n; i++) {
        if (maxx < bin) {
            maxx = bin;
            index = i;
        }
        bin = bin.substr(1) + bin[0];
    }

    string tmpBin = maxx;

    for (int i = 0; i < n; i++) {
        tmpBin = tmpBin.substr(1) + tmpBin[0];
        if (tmpBin == maxx) {
            period = i + 1;
            break;
        }
    }

    cout << index + period * (k - 1) << endl;
}
