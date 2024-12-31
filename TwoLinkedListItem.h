#pragma once

class TwoLinkedListItem {
public:
	TwoLinkedListItem* prev = nullptr;
	TwoLinkedListItem* next = nullptr;
	int value;

	TwoLinkedListItem(int value, TwoLinkedListItem* prev, TwoLinkedListItem* next);
};
