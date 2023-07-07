
#ifndef STUFF_H
#define STUFF_H

#include <QStringList>
#include <QDate>


class stuff
{
public:
    enum type {Permanent, PartTime, Contract};
    stuff();
    stuff(QString n,QDate d,QString sat);
    
    //setters
    void setName(QString n);
    void setDate(QDate d);
    void setStuff(QString sat);

    //getters
    QString getName()const;
    QDate getDate()const;
    QString getStuff()const;

private:
    static const QStringList options;
    //data members;
    QString name;
    QDate date;
    type stuffType;
};

#endif // STUFF_H
