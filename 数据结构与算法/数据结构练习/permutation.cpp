#include<iostream>
#include<cstdio>
using namespace std;

void swap(char* a, char* b);
void perm(char charArray[], int startPos, int endPos);

int main() {
	char charArray[4] = { 'a', 'b', 'c', 'd' };
	perm(charArray, 0, 3);
}

void swap(char *a, char*b) {
	char temp = *a;
	*a = *b;
	*b = temp;
}

void perm(char charArray[], int startPos, int endPos) {
	if (startPos == endPos) {
		for (int i = 0; i < endPos; i++)
		{
			cout << charArray[i];
		}
		cout << endl;
	}
	else {
		for (int i = startPos; i <= endPos; i++) {
			swap(&charArray[startPos], &charArray[i]);
			perm(charArray, startPos + 1, endPos);
			swap(&charArray[i], &charArray[startPos]);
		}
	}
}