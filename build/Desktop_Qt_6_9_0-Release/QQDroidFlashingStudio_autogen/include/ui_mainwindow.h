/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionunlock;
    QAction *actionlock;
    QAction *actionget_unlock_ability;
    QAction *actionunlock_critical;
    QAction *actionlock_critical;
    QAction *actiondevices_l;
    QAction *actionsystem;
    QAction *actionrecovery;
    QAction *actionbootloader;
    QAction *actionfastboot;
    QAction *actionJust_reboot;
    QAction *actionWrite_own;
    QAction *actionoem;
    QAction *actionAbout;
    QAction *action_disable_verification;
    QAction *action_disable_verity;
    QAction *action_forge;
    QAction *actionall;
    QAction *actionWrite_own_2;
    QAction *actionflash;
    QAction *actionImage_File;
    QAction *actionPartition_Name;
    QAction *actionClear_values;
    QAction *actionEnable_lock_options;
    QAction *actionWrite_own_3;
    QWidget *centralwidget;
    QLabel *output;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menufastboot;
    QMenu *menureboot;
    QMenu *menuflashing_2;
    QMenu *menugetvar;
    QMenu *menuheimdall;
    QMenu *menuADB;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setWindowModality(Qt::WindowModality::ApplicationModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(506, 322);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(506, 322));
        MainWindow->setMaximumSize(QSize(506, 322));
        MainWindow->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        MainWindow->setWindowFilePath(QString::fromUtf8(""));
        MainWindow->setInputMethodHints(Qt::InputMethodHint::ImhLowercaseOnly);
        MainWindow->setDocumentMode(false);
        MainWindow->setTabShape(QTabWidget::TabShape::Triangular);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("application-exit")));
        actionExit->setIcon(icon);
        actionExit->setMenuRole(QAction::MenuRole::QuitRole);
        actionunlock = new QAction(MainWindow);
        actionunlock->setObjectName("actionunlock");
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("edit-redo")));
        actionunlock->setIcon(icon1);
        actionlock = new QAction(MainWindow);
        actionlock->setObjectName("actionlock");
        actionlock->setEnabled(false);
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8("edit-undo")));
        actionlock->setIcon(icon2);
        actionget_unlock_ability = new QAction(MainWindow);
        actionget_unlock_ability->setObjectName("actionget_unlock_ability");
        QIcon icon3(QIcon::fromTheme(QString::fromUtf8("dialog-question")));
        actionget_unlock_ability->setIcon(icon3);
        actionunlock_critical = new QAction(MainWindow);
        actionunlock_critical->setObjectName("actionunlock_critical");
        actionunlock_critical->setEnabled(true);
        QIcon icon4(QIcon::fromTheme(QString::fromUtf8("list-add")));
        actionunlock_critical->setIcon(icon4);
        actionlock_critical = new QAction(MainWindow);
        actionlock_critical->setObjectName("actionlock_critical");
        actionlock_critical->setEnabled(false);
        QIcon icon5(QIcon::fromTheme(QString::fromUtf8("list-remove")));
        actionlock_critical->setIcon(icon5);
        actiondevices_l = new QAction(MainWindow);
        actiondevices_l->setObjectName("actiondevices_l");
        QIcon icon6(QIcon::fromTheme(QString::fromUtf8("phone")));
        actiondevices_l->setIcon(icon6);
        actionsystem = new QAction(MainWindow);
        actionsystem->setObjectName("actionsystem");
        QIcon icon7(QIcon::fromTheme(QString::fromUtf8("applications-system")));
        actionsystem->setIcon(icon7);
        actionrecovery = new QAction(MainWindow);
        actionrecovery->setObjectName("actionrecovery");
        QIcon icon8(QIcon::fromTheme(QString::fromUtf8("view-refresh")));
        actionrecovery->setIcon(icon8);
        actionbootloader = new QAction(MainWindow);
        actionbootloader->setObjectName("actionbootloader");
        QIcon icon9(QIcon::fromTheme(QString::fromUtf8("system-log-out")));
        actionbootloader->setIcon(icon9);
        actionfastboot = new QAction(MainWindow);
        actionfastboot->setObjectName("actionfastboot");
        QIcon icon10(QIcon::fromTheme(QString::fromUtf8("emblem-downloads")));
        actionfastboot->setIcon(icon10);
        actionJust_reboot = new QAction(MainWindow);
        actionJust_reboot->setObjectName("actionJust_reboot");
        actionWrite_own = new QAction(MainWindow);
        actionWrite_own->setObjectName("actionWrite_own");
        actionoem = new QAction(MainWindow);
        actionoem->setObjectName("actionoem");
        QIcon icon11(QIcon::fromTheme(QString::fromUtf8("preferences-desktop")));
        actionoem->setIcon(icon11);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        QIcon icon12(QIcon::fromTheme(QString::fromUtf8("accessories-dictionary")));
        actionAbout->setIcon(icon12);
        actionAbout->setMenuRole(QAction::MenuRole::AboutRole);
        action_disable_verification = new QAction(MainWindow);
        action_disable_verification->setObjectName("action_disable_verification");
        action_disable_verification->setCheckable(true);
        action_disable_verity = new QAction(MainWindow);
        action_disable_verity->setObjectName("action_disable_verity");
        action_disable_verity->setCheckable(true);
        action_forge = new QAction(MainWindow);
        action_forge->setObjectName("action_forge");
        action_forge->setCheckable(true);
        actionall = new QAction(MainWindow);
        actionall->setObjectName("actionall");
        actionWrite_own_2 = new QAction(MainWindow);
        actionWrite_own_2->setObjectName("actionWrite_own_2");
        actionflash = new QAction(MainWindow);
        actionflash->setObjectName("actionflash");
        QIcon icon13(QIcon::fromTheme(QString::fromUtf8("system-software-install")));
        actionflash->setIcon(icon13);
        actionImage_File = new QAction(MainWindow);
        actionImage_File->setObjectName("actionImage_File");
        QIcon icon14(QIcon::fromTheme(QString::fromUtf8("drive-optical")));
        actionImage_File->setIcon(icon14);
        actionPartition_Name = new QAction(MainWindow);
        actionPartition_Name->setObjectName("actionPartition_Name");
        QIcon icon15(QIcon::fromTheme(QString::fromUtf8("drive-harddisk")));
        actionPartition_Name->setIcon(icon15);
        actionClear_values = new QAction(MainWindow);
        actionClear_values->setObjectName("actionClear_values");
        QIcon icon16(QIcon::fromTheme(QString::fromUtf8("emblem-unreadable")));
        actionClear_values->setIcon(icon16);
        actionEnable_lock_options = new QAction(MainWindow);
        actionEnable_lock_options->setObjectName("actionEnable_lock_options");
        actionEnable_lock_options->setCheckable(true);
        actionWrite_own_3 = new QAction(MainWindow);
        actionWrite_own_3->setObjectName("actionWrite_own_3");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        output = new QLabel(centralwidget);
        output->setObjectName("output");
        output->setGeometry(QRect(0, 0, 501, 291));
        sizePolicy.setHeightForWidth(output->sizePolicy().hasHeightForWidth());
        output->setSizePolicy(sizePolicy);
        output->setText(QString::fromUtf8(""));
        output->setTextFormat(Qt::TextFormat::PlainText);
        output->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        output->setWordWrap(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 506, 23));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menufastboot = new QMenu(menubar);
        menufastboot->setObjectName("menufastboot");
        menureboot = new QMenu(menufastboot);
        menureboot->setObjectName("menureboot");
        menuflashing_2 = new QMenu(menufastboot);
        menuflashing_2->setObjectName("menuflashing_2");
        menugetvar = new QMenu(menufastboot);
        menugetvar->setObjectName("menugetvar");
        menuheimdall = new QMenu(menubar);
        menuheimdall->setObjectName("menuheimdall");
        menuADB = new QMenu(menubar);
        menuADB->setObjectName("menuADB");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuADB->menuAction());
        menubar->addAction(menufastboot->menuAction());
        menubar->addAction(menuheimdall->menuAction());
        menuFile->addAction(actionPartition_Name);
        menuFile->addAction(actionImage_File);
        menuFile->addSeparator();
        menuFile->addAction(actionEnable_lock_options);
        menuFile->addSeparator();
        menuFile->addAction(actionAbout);
        menuFile->addAction(actionExit);
        menufastboot->addAction(actionflash);
        menufastboot->addSeparator();
        menufastboot->addAction(menuflashing_2->menuAction());
        menufastboot->addAction(menureboot->menuAction());
        menufastboot->addAction(menugetvar->menuAction());
        menufastboot->addSeparator();
        menufastboot->addAction(actiondevices_l);
        menufastboot->addAction(actionoem);
        menufastboot->addSeparator();
        menufastboot->addAction(action_disable_verification);
        menufastboot->addAction(action_disable_verity);
        menufastboot->addAction(action_forge);
        menufastboot->addSeparator();
        menufastboot->addAction(actionWrite_own_3);
        menureboot->addAction(actionsystem);
        menureboot->addAction(actionrecovery);
        menureboot->addAction(actionbootloader);
        menureboot->addAction(actionfastboot);
        menureboot->addSeparator();
        menureboot->addAction(actionJust_reboot);
        menureboot->addAction(actionWrite_own);
        menuflashing_2->addAction(actionunlock);
        menuflashing_2->addAction(actionlock);
        menuflashing_2->addSeparator();
        menuflashing_2->addAction(actionunlock_critical);
        menuflashing_2->addAction(actionlock_critical);
        menuflashing_2->addSeparator();
        menuflashing_2->addAction(actionget_unlock_ability);
        menugetvar->addAction(actionall);
        menugetvar->addSeparator();
        menugetvar->addAction(actionWrite_own_2);

        retranslateUi(MainWindow);
        QObject::connect(actionExit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "QQDroid Flashing Studio", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit...", nullptr));
        actionunlock->setText(QCoreApplication::translate("MainWindow", "unlock", nullptr));
        actionlock->setText(QCoreApplication::translate("MainWindow", "lock", nullptr));
        actionget_unlock_ability->setText(QCoreApplication::translate("MainWindow", "get_unlock_ability", nullptr));
        actionunlock_critical->setText(QCoreApplication::translate("MainWindow", "unlock_critical", nullptr));
        actionlock_critical->setText(QCoreApplication::translate("MainWindow", "lock_critical", nullptr));
        actiondevices_l->setText(QCoreApplication::translate("MainWindow", "devices -l", nullptr));
        actionsystem->setText(QCoreApplication::translate("MainWindow", "system", nullptr));
        actionrecovery->setText(QCoreApplication::translate("MainWindow", "recovery", nullptr));
        actionbootloader->setText(QCoreApplication::translate("MainWindow", "bootloader", nullptr));
        actionfastboot->setText(QCoreApplication::translate("MainWindow", "fastboot", nullptr));
        actionJust_reboot->setText(QCoreApplication::translate("MainWindow", "Just reboot...", nullptr));
        actionWrite_own->setText(QCoreApplication::translate("MainWindow", "Write own...", nullptr));
        actionoem->setText(QCoreApplication::translate("MainWindow", "oem", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About...", nullptr));
        action_disable_verification->setText(QCoreApplication::translate("MainWindow", "--disable-verification", nullptr));
        action_disable_verity->setText(QCoreApplication::translate("MainWindow", "--disable-verity", nullptr));
        action_forge->setText(QCoreApplication::translate("MainWindow", "--force", nullptr));
        actionall->setText(QCoreApplication::translate("MainWindow", "all", nullptr));
        actionWrite_own_2->setText(QCoreApplication::translate("MainWindow", "Write own...", nullptr));
        actionflash->setText(QCoreApplication::translate("MainWindow", "flash", nullptr));
        actionImage_File->setText(QCoreApplication::translate("MainWindow", "Select image file...", nullptr));
        actionPartition_Name->setText(QCoreApplication::translate("MainWindow", "Select partition...", nullptr));
        actionClear_values->setText(QCoreApplication::translate("MainWindow", "Clear values", nullptr));
        actionEnable_lock_options->setText(QCoreApplication::translate("MainWindow", "Enable lock options", nullptr));
        actionWrite_own_3->setText(QCoreApplication::translate("MainWindow", "Write own...", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menufastboot->setTitle(QCoreApplication::translate("MainWindow", "Fastboot", nullptr));
        menureboot->setTitle(QCoreApplication::translate("MainWindow", "reboot", nullptr));
        menuflashing_2->setTitle(QCoreApplication::translate("MainWindow", "flashing", nullptr));
        menugetvar->setTitle(QCoreApplication::translate("MainWindow", "getvar", nullptr));
        menuheimdall->setTitle(QCoreApplication::translate("MainWindow", "Heimdall", nullptr));
        menuADB->setTitle(QCoreApplication::translate("MainWindow", "ADB", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
