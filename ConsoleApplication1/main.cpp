#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
using namespace std;
class pairObj {

public:
	string word ="";
	int count = 0;
};

void printmyStuff(int a, int b) {
	cout << "numberOfSentences :  " << a << "\n" << "numberOfWords:   " << b << endl;

	
}

int main() {
	string sen = "";
	string word = "";
	int numberOfSentences = 0;
	int numberOfWords = 0;
	string fileName = "text.txt";
	vector<pairObj> pairs;

	ifstream myFile;
	myFile.open(fileName);
	
	if (myFile.is_open()) {
		while (getline(myFile, sen, '.')) {
			numberOfSentences++;	
				
			int one = -1, two = -1, pos = -1;
			one = sen.find(",");
			while (one != -1) {				
				sen = sen.substr(0, one) + " " + sen.substr(one + 1);
				one = sen.find(",");
			}
			two = sen.find("!");
			while (two != -1) {
				sen = sen.substr(0, two) + sen.substr(two + 1);
				two = sen.find("!");
			}
			pos = sen.find("\n");
			while (pos != -1) {
				if (pos == 0) {
					sen =  sen.substr(pos + 1);
				}
				else {
					sen = sen.substr(0, pos) + sen.substr(pos + 1);
				}
				
				pos = sen.find("\n");
			}
			stringstream  inter(sen);

			while (getline(inter, word, ' ')) {				
				int pary = 0;
				numberOfWords++;
				for (auto& x : pairs) {
					if (x.word == word) {
						x.count++;
						pary++;
						break;
					}
				}
				if (pary == 0) {
					pairObj mid;
					mid.word = word; mid.count = 1;
					pairs.push_back(mid);
				}											
			}
		}
		myFile.close();
	}
	printmyStuff(numberOfSentences, numberOfWords);
	
	for (auto& x : pairs) {
		cout << x.word << "\t" << x.count << endl;
	}
	return 0;
	

}