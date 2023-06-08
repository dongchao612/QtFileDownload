/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *listWidgetFiles;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *LineEditPort;
    QLabel *LabelIP;
    QLabel *LabelPort;
    QComboBox *ComboBoxIP;
    QWidget *WidgetButton;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *ButtonAddfile;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *ButtonDelfile;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *ButtonRun;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *ButtonStop;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 572);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        listWidgetFiles = new QListWidget(groupBox);
        listWidgetFiles->setObjectName(QString::fromUtf8("listWidgetFiles"));

        horizontalLayout_2->addWidget(listWidgetFiles);


        verticalLayout->addWidget(groupBox);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        LineEditPort = new QLineEdit(widget);
        LineEditPort->setObjectName(QString::fromUtf8("LineEditPort"));

        gridLayout->addWidget(LineEditPort, 0, 1, 1, 1);

        LabelIP = new QLabel(widget);
        LabelIP->setObjectName(QString::fromUtf8("LabelIP"));
        LabelIP->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(LabelIP, 1, 0, 1, 1);

        LabelPort = new QLabel(widget);
        LabelPort->setObjectName(QString::fromUtf8("LabelPort"));
        LabelPort->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(LabelPort, 0, 0, 1, 1);

        ComboBoxIP = new QComboBox(widget);
        ComboBoxIP->setObjectName(QString::fromUtf8("ComboBoxIP"));

        gridLayout->addWidget(ComboBoxIP, 1, 1, 1, 1);


        verticalLayout->addWidget(widget);

        WidgetButton = new QWidget(centralwidget);
        WidgetButton->setObjectName(QString::fromUtf8("WidgetButton"));
        horizontalLayout = new QHBoxLayout(WidgetButton);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ButtonAddfile = new QPushButton(WidgetButton);
        ButtonAddfile->setObjectName(QString::fromUtf8("ButtonAddfile"));

        horizontalLayout->addWidget(ButtonAddfile);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        ButtonDelfile = new QPushButton(WidgetButton);
        ButtonDelfile->setObjectName(QString::fromUtf8("ButtonDelfile"));

        horizontalLayout->addWidget(ButtonDelfile);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        ButtonRun = new QPushButton(WidgetButton);
        ButtonRun->setObjectName(QString::fromUtf8("ButtonRun"));

        horizontalLayout->addWidget(ButtonRun);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        ButtonStop = new QPushButton(WidgetButton);
        ButtonStop->setObjectName(QString::fromUtf8("ButtonStop"));

        horizontalLayout->addWidget(ButtonStop);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(WidgetButton);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\346\226\207\344\273\266\345\210\227\350\241\250", nullptr));
        LabelIP->setText(QApplication::translate("MainWindow", "IP", nullptr));
        LabelPort->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243\345\217\267", nullptr));
        ButtonAddfile->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\346\226\207\344\273\266", nullptr));
        ButtonDelfile->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\346\226\207\344\273\266", nullptr));
        ButtonRun->setText(QApplication::translate("MainWindow", "\350\277\220\350\241\214\346\234\215\345\212\241\345\231\250", nullptr));
        ButtonStop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\346\234\215\345\212\241\345\231\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
