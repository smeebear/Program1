#include "SortedListArray.h"
#include "CD.h"
using CSC1310::CD;
#include "ListArray.h"
using CSC1310::ListArray;
#include "ListArrayIterator.h"
using CSC1310::ListArrayIterator;

#include <iostream>
using namespace std;

void deleteCDs(ListArray<CD>* list)
{
   ListArrayIterator<CD>* iter = list->iterator();

   while(iter->hasNext())
   {
      CD* cd = iter->next();
      delete cd;
   }
   delete iter;
}

int main()
{
   ListArray<CD>* cds = CD::readCDs("cds.txt");

   //thoroughly test your sorted list here












   deleteCDs(cds);
   delete cds;

   return 0;
}
