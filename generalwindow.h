#ifndef GENERALWINDOW_H
#define GENERALWINDOW_H

#include <QWidget>
#include <QDebug>

class GeneralWindow : public QWidget
{
    Q_OBJECT

public:
    GeneralWindow(QWidget *parent = 0);
    ~GeneralWindow();
};

#endif // GENERALWINDOW_H
