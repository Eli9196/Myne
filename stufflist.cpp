
#include "stufflist.h"

stuffList::stuffList()
{

}

void stuffList::addstuff(stuff s)
{
    l.append(s);
}

QList<stuff>stuffList::getList() const
{
    return l;
}
