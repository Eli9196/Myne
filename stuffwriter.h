
#ifndef STUFFWRITER_H
#define STUFFWRITER_H
#include "stuff.h"


class stuffWriter
{
public:
    stuffWriter();
    stuffWriter(stuff s);

    void writeStuff(stuff s);
    void writeToFile()const;

private:
    stuff f;

};

#endif // STUFFWRITER_H
