
#ifndef STUFF_H
#define STUFF_H

#include <QStringList>
#include <QDate>
#include <QMetaEnum>
#include <QObject>

class stuff : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ getName WRITE setName)
    Q_PROPERTY(QDate date READ getDate WRITE setDate)
    Q_PROPERTY(type stuffType READ getStuff WRITE setStuff)
    Q_ENUMS(type)
public:
    enum type {Permanent, PartTime, Contract};
    stuff();
    stuff(QString n,QDate d,QString sat);
    
    //setters
    void setName(QString n);
    void setDate(QDate d);
    void setStuff(QString sat);
    QStringList types();

    //getters
    QString getName()const;
    QDate getDate()const;
    QString getStuff()const;
    type getType() const;
    QMetaEnum getMetaEnum() const;
    QString findEnumString(int i) const;
    int findEnumInt(QString str) const;

private:
    static const QStringList options;
    //data members;
    QString name;
    QDate date;
    type stuffType;
};

#endif // STUFF_H
