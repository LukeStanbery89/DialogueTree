#include <iostream>
#include <cstdlib>
#include <string>
#include <list>

#include "DialogueTree.h"

using namespace std;

void sysPause() {
	cout << "Enter any key to continue...\n";
	int tmp;
	cin >> tmp;
}

int main() {

	DialogueTree dialogTree;
	dialogTree.init();

	int rv = dialogTree.performDialogue();

	if(rv == 1) {
		cout << "\nYou accepted the quest! Yay!\n";
	}

	dialogTree.destroyTree();

	sysPause();
	return 0;
}