#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <cctype>

int main() {
    using namespace std;
    cout << "Write a phrase to analise how many times a word appers" << endl;
    
    string phrase;
    getline(cin, phrase);

    for (char& c : phrase) {
        if (ispunct(c)) {
            c = ' ';
        } else {
            c = tolower(c);
        }
    };

    cout << "Normalized phrase: " << phrase << endl;

    stringstream ss(phrase);
    string word;

    unordered_map<string, int> wordCounter;

    while (ss >> word) {
        wordCounter[word] ++;
    }

    for (const auto& par : wordCounter) {
        cout << "The word: " << par.first << " has been repeted: " << par.second << endl;
    }

    return 0;
}
