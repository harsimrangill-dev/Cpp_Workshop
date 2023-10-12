#include<fstream>
#include<sstream>
#include<vector>
#include <iostream>
using namespace std;

//custom class 
class wordPair {
public:
    int count = 0;
    string word;
};

//variables 
int sentences = 0;
vector<wordPair> pairs;
int numberWords = 0;

void printMystuff() {
    cout << "Numeber of sentences : " << sentences << endl;
    cout << "number of words : " << numberWords << endl;
    for (auto x : pairs) {
        cout << x.word << "\t" << x.count << endl;
    }
}

void updateSen(string s) {
    int pos = -1;
    pos = s.find('.');
    pos = s.find('?');
    pos = s.find('!');
    if (pos != -1) {
        sentences++;
    }
}
void removPunc(string& word) {
    int pos = -1;
    pos = word.find('\n');
    while(pos != -1)
    {
        if (pos == 0) {
            word = word.substr(pos + 1);
        }
        else {
            word = word.substr(0, pos) + word.substr(pos+1);
        }
        pos = word.find('\n');
    }
    pos = word.find(',');
    while (pos != -1) {
        word = word.substr(0, pos) + " " + word.substr(pos + 1);
        pos = word.find(',');
    }
    pos = word.find('!');
    while (pos != -1) {
        word = word.substr(0, pos) + word.substr(pos+1);
        pos = word.find('!');
    }
}
void addWord(string word) {
    int pary = 0;
    numberWords++;
    for (auto& x : pairs) {
        if (x.word == word) {
            x.count++;
            pary++;
            break;
        }
    }
    if (pary == 0) {
        wordPair newPair;
        newPair.word = word;
        newPair.count++;
        pairs.push_back(newPair);
    }
}
void document() {
    string sen;
    fstream myfile;
    myfile.open("text.txt");
    
    while (getline(myfile, sen, '.')) {
        sentences++;    
        removPunc(sen);
        stringstream temp(sen);
        string word;
        while (getline(temp, word, ' ')) {
            addWord(word);
        }
    }
    myfile.close();
    printMystuff();
}

void searchWord(string word) {
    int pary = 0;
    for (auto x : pairs) {
        if (x.word == word) {
            cout << word << "\t" << x.count << endl;
            pary++;
            break;
        }
    }
    if(pary == 0) {
        cout << word << "\t" << 0 << endl;
    }
}

int main()
{
    document();
    string ques;
    cout << "enter a word to search : ";
    cin >> ques;
    searchWord(ques);
    return 0;
}

