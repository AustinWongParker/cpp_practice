#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//std::ifstream infile("grades.txt");

int main() {
	ifstream fin;		// Input file stream
	ofstream fout;
  float percent;
  string name;
	string line;

	int gradeA = 0;
	int gradeB = 0;
	int gradeC = 0;
	int gradeD = 0;
	int gradeF = 0;


	fin.open("grades.txt");
	//fout.open("grades.txt");

  // error checking - file cannot open
	if (!fin.is_open()) {
		cout << "grades.txt is not open";
		return 1;
	}

	while (getline(fin, line)) {

		if (getline(cin,line) >= 90) {
			gradeA++;
		}
    /*
		if (percent >= 80 && percent < 90) {
			gradeB++;
		}
		if (percent >= 70 && percent < 80) {
			gradeC++;
		}
		if (percent >= 60 && percent < 70) {
			gradeD++;
		}
		if (percent < 60) {
			gradeF++;
		}
*/
	}

		cout << gradeA << " A" << endl;
		cout << gradeB << " B" << endl;
		cout << gradeC << " C" << endl;
		cout << gradeD << " D" << endl;
		cout << gradeF << " F" << endl;


	fin.close();
	//fout.close();

	return 0;
}
