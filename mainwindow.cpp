#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "write.h"
#include <cstdio>
#include <QMessageBox>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    bool disable_verification = false;
    bool disable_verity = false;
    bool force = false;
    std::string partitionName = "";
    std::string filePath = "";
}

MainWindow::~MainWindow()
{
    delete ui;
}


QString exec(std::string cmd) {
    std::shared_ptr<FILE> pipe(popen(cmd.c_str(), "r"), pclose);
    char buffer[128];
    std::string result = "";
    while (!feof(pipe.get())) {
        if (fgets(buffer, 128, pipe.get()) != NULL)
            result += buffer;
    }
    return QString::fromStdString(result);
}

void MainWindow::run(std::string cmd){
    if (exec("fastboot devices").isEmpty()){
        QMessageBox::warning(this,"Warning","No devices in Fastboot mode are connected to this device. Please, connect to continue.");
    }else{
        if (disable_verity){cmd+=" --disable-verity";};
        if (disable_verification){cmd+=" --disable-verification";};
        QMessageBox::information(this,"Output:",exec("fastboot "+cmd));
    }
}

std::string MainWindow::prompt(){
    Write *dialog = new Write(this);
    if (dialog->exec() == QDialog::Accepted){return dialog->on_Write_accepted().toStdString();}else{return nullptr;}
    delete dialog;
}

void MainWindow::on_actionflash_triggered()
{
    if (partitionName.empty() && filePath.empty()){
        QMessageBox::warning(this,"Warning","Before flashing you must specify partition image file and partition name to flash.");
    }else{
        run("flash "+partitionName+" "+filePath);
    }
}

void MainWindow::reboot(std::string to){run("reboot "+to);}
void MainWindow::flashing(std::string what){run("flashing "+what);}

void MainWindow::on_actionJust_reboot_triggered(){reboot("");}
void MainWindow::on_actionsystem_triggered(){reboot("system");}
void MainWindow::on_actionrecovery_triggered(){reboot("recovery");}
void MainWindow::on_actionbootloader_triggered(){reboot("bootloader");}
void MainWindow::on_actionfastboot_triggered(){reboot("fastboot");}
void MainWindow::on_actionWrite_own_triggered(){run("reboot "+prompt());}

void MainWindow::on_actionunlock_triggered(){flashing("unlock");}
void MainWindow::on_actionlock_triggered(){flashing("lock");}
void MainWindow::on_actionunlock_critical_triggered(){flashing("unlock_critical");}
void MainWindow::on_actionlock_critical_triggered(){flashing("lock_critical");}
void MainWindow::on_actionget_unlock_ability_triggered(){run("get_unlock_ability");}

void MainWindow::on_actionall_triggered(){run("getvar all");}
void MainWindow::on_actionWrite_own_2_triggered(){run("getvar "+prompt());}

void MainWindow::on_actiondevices_l_triggered(){run("devices -l");}
void MainWindow::on_actionoem_triggered(){run("oem "+prompt());}

void MainWindow::on_action_disable_verification_toggled(bool a){disable_verification=a;}
void MainWindow::on_action_disable_verity_toggled(bool a){disable_verity=a;}
void MainWindow::on_action_forge_toggled(bool a){force=a;}

void MainWindow::on_actionPartition_Name_triggered(){partitionName=prompt();}
void MainWindow::on_actionImage_File_triggered(){
    filePath=QFileDialog::getOpenFileName(this,"Image File","~","Disk Image Files [.img] (*.img);;All Files(*)").toStdString();
    if (!filePath.empty()&&!exec("file "+filePath).contains("Android")){
        if (!QMessageBox::question(this,"Image File","The specifed image file is not Android-specific. Are you sure?\n\n"+exec("file "+filePath))){
            filePath="";
        }
    }
}
void MainWindow::on_actionClear_values_triggered(){partitionName="";filePath="";}
