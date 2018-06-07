#if !defined SORTEDLISTARRAY_H
#define SORTEDLISTARRAY_H

#include "Text.h"
#include CSC1310::String;
#include "ListArrayIterator.h"
using CSC1310::ListArrayIterator;

template < class T >
class SortedListArray
{
private:
	T** items
	int max;
	int current;

	int (*compare_items)(T* item_1, T* item_2)
	int (*compare_keys) (String* key, T* item)

	void resize(int size);

	int findIndexAdd(T* item);
	int findIndexRemove(String* sk);
public:
	SortedListArray();
	~SortedListArray();
	bool isEmpty();
	int size();
	T* get (String* search_key);
	void add (T* item);
	void remove (String* search_key);
	ListArrayIterator* iterator();
};

#endif