#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void run(std::string cmd);
    void reboot(std::string to);
    std::string prompt();
    void flashing(std::string what);
    bool disable_verity;
    bool disable_verification;
    bool force;
    std::string partitionName;
    std::string filePath;

private slots:
    void on_actiondevices_l_triggered();

    void on_actionget_unlock_ability_triggered();

    void on_actionoem_triggered();

    void on_actionWrite_own_triggered();

    void on_actionJust_reboot_triggered();

    void on_actionsystem_triggered();

    void on_actionrecovery_triggered();

    void on_actionbootloader_triggered();

    void on_actionfastboot_triggered();

    void on_actionunlock_triggered();

    void on_actionlock_triggered();

    void on_actionunlock_critical_triggered();

    void on_actionlock_critical_triggered();

    void on_actionall_triggered();

    void on_actionWrite_own_2_triggered();

    void on_action_disable_verification_toggled(bool arg1);

    void on_action_disable_verity_toggled(bool arg1);

    void on_action_forge_toggled(bool arg1);

    void on_actionflash_triggered();

    void on_actionPartition_Name_triggered();
    void on_actionImage_File_triggered();

    void on_actionClear_values_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
