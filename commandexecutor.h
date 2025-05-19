#ifndef COMMANDEXECUTOR_H
#define COMMANDEXECUTOR_H

#include <QObject>

class CommandExecutor : public QObject
{
    Q_OBJECT
public:
    explicit CommandExecutor(QObject *parent = nullptr);
    void fastboot(QString command);
signals:
};

#endif // COMMANDEXECUTOR_H
