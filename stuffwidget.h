
#ifndef STUFFWIDGET_H
#define STUFFWIDGET_H
#include <QList>
#include "stuff.h"
#include "stufflist.h"

#include <QWidget>



QT_BEGIN_NAMESPACE
namespace Ui { class stuffWidget; }
QT_END_NAMESPACE

class stuffWidget : public QWidget

{
    Q_OBJECT

public:
    stuffWidget(QWidget *parent = nullptr);
    ~stuffWidget();
    
public slots:
    void read();
        

private:
    Ui::stuffWidget *ui;
    stuffList list;

    
};

#endif // STUFFWIDGET_H
