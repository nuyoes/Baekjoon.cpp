#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	double PH = 0, Pc = 0, H = 50;
	int len;
	string input;

	getline(cin, input);

	len = input.length();

	for (int i = 0; i < len; i++) {
		if (input[i] == 'H' || input[i] == 'P' || input[i] == 'Y') PH++;
		if (input[i] == 'S' || input[i] == 'D') Pc++;
		if (input[i] == 'A') {
			PH++;
			Pc++;
		}
	}

	if (PH != 0 && Pc != 0) H = (double)(PH / (PH + Pc)) * 100;

    printf("%.2f", round(H*100)/100);

	return 0;
}