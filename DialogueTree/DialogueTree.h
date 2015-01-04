#pragma once
#include <string>
#include <iostream>
#include <vector>

using namespace std;

// Prototypes
class DialogueNode;

// Classes
class DialogueOption {
public:
	DialogueOption(string Text, int ReturnCode, DialogueNode *NextNode);

	string text;
	int returnCode;
	DialogueNode *nextNode;
};

class DialogueNode {
public:
	DialogueNode(string Text);

	string text;
	vector <DialogueOption> dialogueOptions;
};

class DialogueTree {
public:
	DialogueTree();

	void init();
	void destroyTree();

	int performDialogue();
private:
	vector<DialogueNode *> dialogueNodes;
};
