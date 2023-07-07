
#include "stuffwriter.h"
#include <QFile>
#include <QTextStream>

stuffWriter::stuffWriter(stuff s)
{
    f = s;
}

void stuffWriter::writeStuff(stuff s)
{
    f = s;
}



void stuffWriter::writeToFile() const
{
    QFile file("staff.txt");

    QTextStream toFile(&file);

    toFile << "Name: " << f.getName() << "; ";
    toFile << "Birthdate: " << f.getDate().toString() << "; ";
    toFile << "Type: " << f.getStuff() << '\n';
    file.close();


}
