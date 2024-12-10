// Muhammad Maulana Ahsan, 240401010064, IF105, Algoritma dan Pemrograman
#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << setw(4) << i * j;
        }
        cout << endl;
    }

    return 0;
}