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
#include <QtWidgets/QListView>
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
    QListView *listWidgetFiles;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *labelPort;
    QLineEdit *LineEditPort;
    QLabel *labelIp;
    QComboBox *ComboBoxIP;
    QWidget *WidgetButton;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *ButtonConnect;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *ButtonDisconnect;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *ButtonDownLoad;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *ButtonUpLoad;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 520);
        MainWindow->setMinimumSize(QSize(600, 520));
        MainWindow->setMaximumSize(QSize(600, 520));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        listWidgetFiles = new QListView(groupBox);
        listWidgetFiles->setObjectName(QString::fromUtf8("listWidgetFiles"));

        horizontalLayout_2->addWidget(listWidgetFiles);


        verticalLayout->addWidget(groupBox);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelPort = new QLabel(widget);
        labelPort->setObjectName(QString::fromUtf8("labelPort"));
        labelPort->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelPort, 0, 0, 1, 1);

        LineEditPort = new QLineEdit(widget);
        LineEditPort->setObjectName(QString::fromUtf8("LineEditPort"));

        gridLayout->addWidget(LineEditPort, 0, 1, 1, 1);

        labelIp = new QLabel(widget);
        labelIp->setObjectName(QString::fromUtf8("labelIp"));
        labelIp->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelIp, 1, 0, 1, 1);

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

        ButtonConnect = new QPushButton(WidgetButton);
        ButtonConnect->setObjectName(QString::fromUtf8("ButtonConnect"));

        horizontalLayout->addWidget(ButtonConnect);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        ButtonDisconnect = new QPushButton(WidgetButton);
        ButtonDisconnect->setObjectName(QString::fromUtf8("ButtonDisconnect"));

        horizontalLayout->addWidget(ButtonDisconnect);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        ButtonDownLoad = new QPushButton(WidgetButton);
        ButtonDownLoad->setObjectName(QString::fromUtf8("ButtonDownLoad"));

        horizontalLayout->addWidget(ButtonDownLoad);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        ButtonUpLoad = new QPushButton(WidgetButton);
        ButtonUpLoad->setObjectName(QString::fromUtf8("ButtonUpLoad"));

        horizontalLayout->addWidget(ButtonUpLoad);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        verticalLayout->addWidget(WidgetButton);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\346\226\207\344\273\266\345\210\227\350\241\250", nullptr));
        labelPort->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243\345\217\267", nullptr));
        LineEditPort->setText(QApplication::translate("MainWindow", "8080", nullptr));
        labelIp->setText(QApplication::translate("MainWindow", "IP", nullptr));
        ButtonConnect->setText(QApplication::translate("MainWindow", " \350\277\236\346\216\245\346\234\215\345\212\241\345\231\250", nullptr));
        ButtonDisconnect->setText(QApplication::translate("MainWindow", " \346\226\255\345\274\200\346\234\215\345\212\241\345\231\250", nullptr));
        ButtonDownLoad->setText(QApplication::translate("MainWindow", "\344\270\213\350\275\275\346\226\207\344\273\266", nullptr));
        ButtonUpLoad->setText(QApplication::translate("MainWindow", "\344\270\212\344\274\240\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
