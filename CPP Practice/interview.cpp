#include <iostream>
#include <sstream>
#include <map>
using namespace std;

// Function to convert words to digits
string wordsToDigits(string phoneWords) {
    // Define a map to map words to digits
    map<string, string> wordToDigit = {
        {"one", "1"}, {"two", "2"}, {"three", "3"}, {"four", "4"}, {"five", "5"},
        {"six", "6"}, {"seven", "7"}, {"eight", "8"}, {"nine", "9"}, {"zero", "0"}
    };

    // Replace double, triple, etc., with corresponding digits
    size_t found;
    found = phoneWords.find("double");
    while (found != string::npos) {
        phoneWords.replace(found, 6, wordToDigit["d"] + wordToDigit["o"]);
        found = phoneWords.find("double", found + 2);
    }

    found = phoneWords.find("triple");
    while (found != string::npos) {
        phoneWords.replace(found, 6, wordToDigit["t"] + wordToDigit["r"]);
        found = phoneWords.find("triple", found + 2);
    }

    // Tokenize and convert words to digits
    stringstream ss(phoneWords);
    string word, phoneDigits;
    while (ss >> word) {
        phoneDigits += wordToDigit[word];
    }

    return phoneDigits;
}

int main() {
    // string phoneWords = "double six four double three";
    // string phoneDigits = wordsToDigits(phoneWords);
    cout << phoneDigits << endl;  // Output: "66433"

    return 0;
}