#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string guest, host, pile;

    // Read the guest's name, host's name, and the pile of letters
    cin >> guest >> host >> pile;

    // Combine the guest's and host's names
    string combined_name = guest + host;

    // Sort the combined name and the pile
    sort(combined_name.begin(), combined_name.end());
    sort(pile.begin(), pile.end());

    // Compare the sorted strings
    if (combined_name == pile) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

