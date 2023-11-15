#ifndef UIMAIN_H
#define UIMAIN_H
#include <QMessageBox>

class UIMain
{
public:
    UIMain();

    void information (QString title, QString content);
    void warning(QString title, QString content);
    bool question(QString title, QString content);
};

#endif // UIMAIN_H
