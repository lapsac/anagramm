#include <iostream>
#include <string>
#include <map>

using namespace std;
    // function for symbol count in a word - as soon as written, stays the same size 
map<char, int> countCharacters(const string& word) {

        // is created empty map for storing letters
    map<char, int> simboluSkaits;

    for (char n : word) {
        simboluSkaits[n]++;
    }

    return simboluSkaits;
}

int main() {
    string pirmais, otrs;

        // input
    cin >> pirmais;
    cin >> otrs;

    // symbol comparison
    map<char, int> simbSkaitsPirmajam = countCharacters(pirmais);
    map<char, int> simbSkaitsOtrajam = countCharacters(otrs);

    if (simbSkaitsPirmajam == simbSkaitsOtrajam) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
