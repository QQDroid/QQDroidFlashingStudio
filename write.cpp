#include "write.h"
#include "ui_write.h"

Write::Write(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Write)
{
    ui->setupUi(this);
}

Write::~Write()
{
    delete ui;
}

QString Write::on_Write_accepted()
{
    QTextEdit *textEdit = this->findChild<QTextEdit*>("textEdit");

    if (textEdit) {
        return textEdit->toPlainText();
    } else {
        return QString();
    }
}
