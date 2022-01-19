#include <iostream>
#include <cstdlib>

using namespace std;

int randInt(int low, int high){
    return low + rand() % (high - low +1);
}


int main() {
    srand(123);

    for (int i = 1; i <=10 ; ++i){
        cout << randInt(-100, 100) << ' ' << randInt(1,6) << endl;

    }
    return 0;
}