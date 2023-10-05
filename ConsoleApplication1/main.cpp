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
	vector<pairObj> pairs;

	ifstream myFile;
	myFile.open("text.txt");
	
	if (myFile.is_open()) {
		while (getline(myFile, sen, '.')) {
			numberOfSentences++;					
			stringstream  inter(sen);
			string temp = "";
			while (getline(inter, temp, ',')) {
				int pos = -1;
				pos = temp.find("\n");
				if (pos == 0) {
					temp = temp.substr(pos + 1);
				}
				stringstream newtemp(temp);
				
				while (getline(newtemp, word, ' ')) {
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
		}
		myFile.close();
	}
	printmyStuff(numberOfSentences, numberOfWords);
	
	for (auto& x : pairs) {
		cout << x.word << "\t" << x.count << endl;
	}
	return 0;
	

}