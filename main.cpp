#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

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

/*
 2 -> xx -> 13 -> -1
 3 -> xxx -> x13, 13x -> -20
 4 -> xxxx -> xx13 x13x 13xx -> - 300
 5 -> xxxxx -> xxx13 xx13x x13xx 13xxx -> -4000

 1 -> 10 <-> (10 ^ 1) - (1 - 1)
 2 -> 99 <-> (10 ^ 2) - (2 - 1)
 3 -> 198 <-> (10 ^ 3) - (3 - 1)
 ...
 9 -> 1[9]2 <-> (10 ^ 9) - (9 - 1) -> 999999983
 10 -> 1[9]1 <-> (10 ^ 10) - (10 - 1) -> 999999820
 11 -> 1[...]90 -> 999998199
 12 -> 1[...]89 -> 999981998



 */

void execute() {
    int n;
    cin >> n;

}
