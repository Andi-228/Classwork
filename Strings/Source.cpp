#include <iostream>

using namespace std;

int countWords(char str[]);
int findShortestWorldLenth(char str[]);
void getNumOfVolvesAndNotVolves(char str[]);
bool isVolve(char letter);

int main() {
	char str[] = "Programming languages develops very fast";

	cout << str << endl;
	cout << "There are " << countWords(str) << " word in the sring";
	cout << "The shortets word's lengtht = " << findShortestWorldLenth(str) << endl;
	
		char strl[256];
	cin >> strl;
	cout << strl << endl;
	cin.getline(strl, 256);
	cout << strl;
	return 0;
}

int countWords(char str[])
{
	int counter = 0;
	/*int i = 0;
	while (str[i] != '\0') {
		if (str[i] == 32)
			counter++;
		i++;
	}*/
	/*for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == ' ')
			counter++;
	}
	counter++;*/

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == 32)
			counter++;
	}
	counter++;
	return counter;
}

int findShortestWorldLenth(char str[])
{
	int min = 10000;
	for (int i = 0; i <= strlen(str); i++) {
		if (str[i] == ' ') {
			int counter = 0;
				for (int j = i; (j != -1 && str[j] == ' '); j--) {
					counter++;
			}
			if (counter < min) {
				min = counter;
			}
		}
	}
	return min;
}

void getNumOfVolvesAndNotVolves(char str[])
{
	int volves = 0;
	int notVolves = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (isVolve(toupper(str([i])) == true)
			volves++;
			if ((letter >= 65 && letter <= 90))
			notVolves++;
	}
	cout << "Volves = " << volves << endl;
	cout << "Not Volves = " << notVolves << endl;
	if (volves > notVolves) {
		cout << "Num of volves is grater" << endl;
	}
	else {
		cout << "Num of not volve is greater" << endl;
	}
}

bool isVolve(char letter)
{
	if (letter == 'A' || letter == '0' || letter == 'I' || letter == 'J' || letter == 'E' || letter 'Y')
		return true;
	else if (letter >= 65 && letter <= 90)
	return false;
}
