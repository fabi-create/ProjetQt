#include "uimain.h"

UIMain::UIMain()
{

}

void UIMain::information (QString title, QString content)
{
    QMessageBox::information(nullptr, title, content);
}

void UIMain::warning(QString title, QString content)
{
    QMessageBox::warning(nullptr, title, content);
}

bool UIMain::question(QString title, QString content)
{
    return QMessageBox::Yes == QMessageBox::question(nullptr, title, content);
}
