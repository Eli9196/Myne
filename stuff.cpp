
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

QStringList stuff::types()
{
    QStringList list;
    QMetaEnum me = this->getMetaEnum();
    for (int i=0; i<me.keyCount(); i++)
        list << QString(me.valueToKey(i));
    return list;
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

stuff::type stuff::getType() const
{
    return stuffType;
}

QMetaEnum stuff::getMetaEnum() const
{
    const QMetaObject *meta = this->metaObject();
    const QMetaEnum metaEnum = meta->enumerator(0);
    return metaEnum;
}

QString stuff::findEnumString(int i) const
{
    QMetaEnum me = this->getMetaEnum();
    return QString(me.valueToKey(i));
}

int stuff::findEnumInt(QString str) const
{
    QMetaEnum me = this->getMetaEnum();
    return me.keysToValue(str.toLatin1());
}
