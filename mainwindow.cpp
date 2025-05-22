#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_write.h"
#include "write.h"
#include <cstdio>
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>

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
    std::string result = "";
    char buffer[128];
}
MainWindow::~MainWindow(){delete ui;}


std::string MainWindow::exec(const std::string& cmd) {
    std::shared_ptr<FILE> pipe(popen(cmd.c_str(), "r"), pclose);
    if (!pipe){throw std::runtime_error("popen() failed!");
    }else {
        while (fgets(buffer, sizeof(buffer), pipe.get()) != nullptr) {
            result += buffer;
        }
        ui->output->setText(QString::fromStdString(result));
        return result;
    }
}


std::string MainWindow::prompt(bool partitionNam){
    Write *dialog = new Write(this);
    if (partitionNam){dialog->ui->textEdit->setText(QString::fromStdString(partitionName));}
    if (dialog->exec() == QDialog::Accepted){return dialog->on_Write_accepted().toStdString();}else{return "";}
    delete dialog;
}

void MainWindow::on_actionPartition_Name_triggered(){partitionName=prompt(true);}
void MainWindow::on_actionImage_File_triggered()
{
    QString selectedFilter;
    filePath=QFileDialog::getOpenFileName(this,"Select Android-specified image file","~","Disk Image File [.img] (*.img);;ADB Sideload ZIP [.zip, .apk] (*.zip *.apk);;All Files(*)",&selectedFilter).toStdString();
    if (!filePath.empty()){
        type = QString::fromStdString(exec("file "+filePath));
        if (type.contains("Android")){partitionName=QFileInfo(QString::fromStdString(filePath)).fileName().replace(".img","").toStdString();}
        else if (selectedFilter=="Disk Image File [.img] (*.img)"){
            if (!QMessageBox::question(this,"Image File","The specified partition image file is not Android-specific. Are you sure?\n\n"+type)){filePath="";}}
        else if (!type.contains("Zip")&&selectedFilter=="ADB Sideload ZIP [.zip, .apk] (*.zip *.apk)"){
            if (!QMessageBox::question(this,"Image File","The specified file is not ZIP compressed archive. Are you sure?\n\n"+type)){filePath="";}
        }
    }
}
void MainWindow::on_actionEnable_lock_options_toggled(bool a){ui->lock->setEnabled(a);ui->lock_critical->setEnabled(a);}

/* Fastboot */
void MainWindow::runFastboot(std::string cmd){
    if (exec("fastboot devices").empty()){
        QMessageBox::warning(this,"Warning","No devices in Fastboot mode are connected to this device. Please, connect to continue.");
    }else{
        if (disable_verity){cmd+=" --disable-verity";};
        if (disable_verification){cmd+=" --disable-verification";};
        exec("fastboot "+cmd);
    }
}

void MainWindow::on_actionflash_triggered()
{
    if (partitionName.empty() or filePath.empty()){
        QMessageBox::warning(this,"Warning","Before flashing you must specify partition image file and partition name to flash.");
    }else{
        runFastboot("flash "+partitionName+" "+filePath);
    }
}

// Categories
void MainWindow::reboot(std::string to){runFastboot("reboot "+to);} // 'reboot' category
void MainWindow::flashing(std::string what){runFastboot("flashing "+what);} // 'flashing' category
void MainWindow::getvar(std::string what){runFastboot("getvar "+what);} // 'getvar' category

// reboot
void MainWindow::on_actionsystem_triggered(){reboot("system");}
void MainWindow::on_actionrecovery_triggered(){reboot("recovery");}
void MainWindow::on_actionbootloader_triggered(){reboot("bootloader");}
void MainWindow::on_actionfastboot_triggered(){reboot("fastboot");}
void MainWindow::on_actionJust_reboot_triggered(){reboot("");}
void MainWindow::on_actionWrite_own_triggered(){reboot(prompt(false));}

// flashing
void MainWindow::on_actionunlock_triggered(){flashing("unlock");}
void MainWindow::on_actionlock_triggered(){flashing("lock");}
void MainWindow::on_actionunlock_critical_triggered(){flashing("unlock_critical");}
void MainWindow::on_actionlock_critical_triggered(){flashing("lock_critical");}
void MainWindow::on_actionget_unlock_ability_triggered(){runFastboot("get_unlock_ability");}

// getvar
void MainWindow::on_actionall_triggered(){getvar("all");}
void MainWindow::on_actionWrite_own_2_triggered(){getvar(prompt(false));}

// Other options
void MainWindow::on_actiondevices_l_triggered(){runFastboot("devices -l");}
void MainWindow::on_actionoem_triggered(){runFastboot("oem "+prompt(false));}

// Boolean options
void MainWindow::on_action_disable_verification_toggled(bool a){disable_verification=a;}
void MainWindow::on_action_disable_verity_toggled(bool a){disable_verity=a;}
void MainWindow::on_action_forge_toggled(bool a){force=a;}

void MainWindow::on_actionWrite_own_3_triggered(){runFastboot(prompt(false));}

