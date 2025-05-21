/********************************************************************************
** Form generated from reading UI file 'write.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRITE_H
#define UI_WRITE_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Write
{
public:
    QDialogButtonBox *buttonBox;
    QTextEdit *textEdit;
    QLabel *label;

    void setupUi(QDialog *Write)
    {
        if (Write->objectName().isEmpty())
            Write->setObjectName("Write");
        Write->resize(320, 78);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("preferences-system")));
        Write->setWindowIcon(icon);
        Write->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        buttonBox = new QDialogButtonBox(Write);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(230, 10, 81, 221));
        buttonBox->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        buttonBox->setOrientation(Qt::Orientation::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        textEdit = new QTextEdit(Write);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 30, 211, 31));
        textEdit->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        textEdit->setTabChangesFocus(false);
        textEdit->setPlaceholderText(QString::fromUtf8("oem | partition | getvar "));
        label = new QLabel(Write);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 211, 18));

        retranslateUi(Write);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Write, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Write, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Write);
    } // setupUi

    void retranslateUi(QDialog *Write)
    {
        Write->setWindowTitle(QString());
        textEdit->setMarkdown(QString());
        textEdit->setHtml(QCoreApplication::translate("Write", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Write", "Please, type value below:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Write: public Ui_Write {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRITE_H
