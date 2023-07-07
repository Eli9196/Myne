
#include "stuff.h"
const QStringList stuff::options = QStringList() << "Permanent" << "Part-time" << "Contract";
stuff::stuff()
{

}

stuff::stuff(QString n, QDate d,QString sat)
{
    name = n;
    date = d;
    stuffType = stuff::type(options.indexOf(sat));
}

void stuff::setName(QString n)
{
    name = n;
}

void stuff::setDate(QDate d)
{
    date = d;
}

void stuff::setStuff(QString sat)
{
    stuffType = stuff::type(options.indexOf(sat));
}

QString stuff::getName()const
{
    return name;
}

QDate stuff::getDate()const
{
    return date;
}

QString stuff::getStuff()const
{
    return options.at(stuffType);
}
