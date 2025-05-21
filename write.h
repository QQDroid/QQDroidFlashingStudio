#ifndef WRITE_H
#define WRITE_H

#include <QDialog>
#include <qtextedit.h>

namespace Ui {
class Write;
}

class Write : public QDialog
{
    Q_OBJECT

public:
    explicit Write(QWidget *parent = nullptr);
    ~Write();
    Ui::Write *ui;

public slots:
    QString on_Write_accepted();

};

#endif // WRITE_H
