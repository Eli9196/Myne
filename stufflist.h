
#ifndef STUFFLIST_H
#define STUFFLIST_H
#include "stuff.h"
#include <QList>



class stuffList
{
public:
    stuffList();
    void addstuff(stuff s);
    QList<stuff> getList() const;

private:
    QList<stuff> l;
};

#endif // STUFFLIST_H
