#include <iostream>

using namespace std;

int main() {
    int *nums[3];

    for(int i = 0; i < 3; i ++) {
        nums[i] = new int((i + 1) * 10);
    }

    for(int i = 0; i < 3; i ++) {
        cout << *(nums[i]) << " ";
    }
    cout << endl;

    for(int i = 0; i < 3; i ++) {
        delete nums[i];
        nums[i] = NULL;
    }
    return 0;
}