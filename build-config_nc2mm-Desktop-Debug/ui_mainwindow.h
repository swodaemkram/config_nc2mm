/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPlainTextEdit *plainTextEdit;
    QLabel *label;
    QLabel *label_2;
    QPlainTextEdit *plainTextEdit_2;
    QLabel *label_3;
    QPlainTextEdit *plainTextEdit_3;
    QLabel *label_4;
    QPlainTextEdit *plainTextEdit_4;
    QPlainTextEdit *plainTextEdit_5;
    QLabel *label_5;
    QPushButton *CancelButton;
    QPushButton *SaveButton;
    QLabel *label_6;
    QToolBar *mainToolBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1466, 267);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(240, 0, 1211, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 231, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 50, 201, 17));
        plainTextEdit_2 = new QPlainTextEdit(centralWidget);
        plainTextEdit_2->setObjectName(QStringLiteral("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(240, 40, 1211, 31));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 90, 171, 17));
        plainTextEdit_3 = new QPlainTextEdit(centralWidget);
        plainTextEdit_3->setObjectName(QStringLiteral("plainTextEdit_3"));
        plainTextEdit_3->setGeometry(QRect(240, 80, 1211, 31));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 130, 141, 17));
        plainTextEdit_4 = new QPlainTextEdit(centralWidget);
        plainTextEdit_4->setObjectName(QStringLiteral("plainTextEdit_4"));
        plainTextEdit_4->setGeometry(QRect(240, 120, 1211, 31));
        plainTextEdit_5 = new QPlainTextEdit(centralWidget);
        plainTextEdit_5->setObjectName(QStringLiteral("plainTextEdit_5"));
        plainTextEdit_5->setGeometry(QRect(240, 160, 1211, 31));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 170, 181, 20));
        CancelButton = new QPushButton(centralWidget);
        CancelButton->setObjectName(QStringLiteral("CancelButton"));
        CancelButton->setGeometry(QRect(50, 200, 89, 25));
        CancelButton->setCheckable(false);
        SaveButton = new QPushButton(centralWidget);
        SaveButton->setObjectName(QStringLiteral("SaveButton"));
        SaveButton->setGeometry(QRect(1340, 200, 89, 25));
        SaveButton->setCheckable(false);
        SaveButton->setAutoRepeat(false);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(180, 200, 1141, 17));
        label_6->setAutoFillBackground(true);
        label_6->setFrameShape(QFrame::StyledPanel);
        label_6->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setEnabled(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1466, 22));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "config_nc2mm", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        plainTextEdit->setToolTip(QApplication::translate("MainWindow", "Enter NextCloud RSS Feed URL", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("MainWindow", "NextCloud URL or Rss Feed URL :", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Mattermost Web Hook URL :", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        plainTextEdit_2->setToolTip(QApplication::translate("MainWindow", "Enter The MatterMost In-comming Web Hook Here", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("MainWindow", "Filter to Apply to Data :", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        plainTextEdit_3->setToolTip(QApplication::translate("MainWindow", "Filter to apply All or None for no filter", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("MainWindow", "Sent From Message :", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        plainTextEdit_4->setToolTip(QApplication::translate("MainWindow", "Enter Sent from Message Here", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        plainTextEdit_5->setToolTip(QApplication::translate("MainWindow", "Enter Refresh Time in Seconds Hre", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("MainWindow", "Refresh Delay In Seconds : ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CancelButton->setToolTip(QApplication::translate("MainWindow", "Cancel OPeration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CancelButton->setText(QApplication::translate("MainWindow", "Cancel", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SaveButton->setToolTip(QApplication::translate("MainWindow", "Save Changes", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        SaveButton->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "NOT ROOT NOT ROOT NOT ROOT NOT ROOT NOT ROOT NOT ROOT NOT ROOT NOT ROOT NOT ROOT NOT ROOT NOT ROOT NOT ROOT NOT ROOT NOT ROOT NOT", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
