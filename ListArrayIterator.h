#if !defined NULL
#define NULL 0
#endif

#if !defined LISTARRAYITERATOR_H
#define LISTARRAYITERATOR_H

template < class T >
class ListArrayIterator
{
private:
	int index;
	int size;
	T** items;

public: 
	ListArrayIterator(T** itms, int sz);
	~ListArrayIterator();
	bool hasNext();
	T* next();
};

template < class T >
ListArrayIterator<T>::ListArrayIterator(T** itms, int sz)
{
	items = new T*[sz];
	for (int i = 0; i < sz; i++)
	{
		items[i] = itms[i];
	}
	size = sz;
	index = 1;
}

template < class T >
ListArrayIterator<T>::~ListArrayIterator()
{
	delete [] items;
}

template < class T >
bool ListArrayIterator<T>::hasNext()
{
	return (index <= size);
}

template < class T >
T* ListArrayIterator<T>::next()
{
	T* item = NULL;
	if (hasNext())
	{
		item = items[index-1];
		index++;
	}
	return item;
}

#endif