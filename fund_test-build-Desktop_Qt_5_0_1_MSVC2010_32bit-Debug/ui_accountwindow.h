/********************************************************************************
** Form generated from reading UI file 'accountwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTWINDOW_H
#define UI_ACCOUNTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccountWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QLineEdit *lineEdit_10;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_0;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *lineEdit_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_8;
    QPushButton *submit;
    QPushButton *close_button;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QLineEdit *lineEdit_11;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_4;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AccountWindow)
    {
        if (AccountWindow->objectName().isEmpty())
            AccountWindow->setObjectName(QStringLiteral("AccountWindow"));
        AccountWindow->resize(648, 412);
        AccountWindow->setMinimumSize(QSize(648, 412));
        AccountWindow->setMaximumSize(QSize(648, 412));
        AccountWindow->setLayoutDirection(Qt::RightToLeft);
        centralWidget = new QWidget(AccountWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(9, 9, 323, 85));
        groupBox_2->setLayoutDirection(Qt::RightToLeft);
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(40, 20));
        label_10->setMaximumSize(QSize(40, 20));

        horizontalLayout_10->addWidget(label_10);

        lineEdit_10 = new QLineEdit(groupBox_2);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setMinimumSize(QSize(170, 20));

        horizontalLayout_10->addWidget(lineEdit_10);


        gridLayout->addLayout(horizontalLayout_10, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(76, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(215, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(75, 23));
        pushButton->setMaximumSize(QSize(75, 23));
        pushButton->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(358, 9, 281, 331));
        groupBox->setMinimumSize(QSize(281, 331));
        groupBox->setLayoutDirection(Qt::RightToLeft);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(83, 20));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_0 = new QLineEdit(groupBox);
        lineEdit_0->setObjectName(QStringLiteral("lineEdit_0"));

        horizontalLayout_2->addWidget(lineEdit_0);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_1 = new QLineEdit(groupBox);
        lineEdit_1->setObjectName(QStringLiteral("lineEdit_1"));

        horizontalLayout->addWidget(lineEdit_1);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(83, 20));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_3->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(83, 20));

        horizontalLayout_8->addWidget(label_8);

        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_8->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(83, 20));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_4->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(83, 20));

        horizontalLayout_7->addWidget(label_7);

        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        horizontalLayout_7->addWidget(lineEdit_5);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(83, 20));

        horizontalLayout_6->addWidget(label_6);

        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        horizontalLayout_6->addWidget(lineEdit_6);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(83, 20));

        horizontalLayout_9->addWidget(label_9);

        lineEdit_7 = new QLineEdit(groupBox);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        horizontalLayout_9->addWidget(lineEdit_7);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(83, 20));

        horizontalLayout_5->addWidget(label_5);

        lineEdit_8 = new QLineEdit(groupBox);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        horizontalLayout_5->addWidget(lineEdit_8);


        verticalLayout->addLayout(horizontalLayout_5);

        submit = new QPushButton(centralWidget);
        submit->setObjectName(QStringLiteral("submit"));
        submit->setGeometry(QRect(9, 339, 75, 23));
        submit->setMinimumSize(QSize(75, 23));
        submit->setMaximumSize(QSize(75, 23));
        close_button = new QPushButton(centralWidget);
        close_button->setObjectName(QStringLiteral("close_button"));
        close_button->setGeometry(QRect(90, 339, 75, 23));
        close_button->setMinimumSize(QSize(75, 23));
        close_button->setMaximumSize(QSize(75, 23));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(9, 179, 319, 85));
        groupBox_3->setLayoutDirection(Qt::RightToLeft);
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(40, 20));
        label_11->setMaximumSize(QSize(40, 20));

        horizontalLayout_11->addWidget(label_11);

        lineEdit_11 = new QLineEdit(groupBox_3);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setMinimumSize(QSize(170, 20));

        horizontalLayout_11->addWidget(lineEdit_11);


        gridLayout_2->addLayout(horizontalLayout_11, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(72, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(groupBox_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(75, 23));
        pushButton_2->setMaximumSize(QSize(75, 23));
        pushButton_2->setLayoutDirection(Qt::LeftToRight);

        gridLayout_2->addWidget(pushButton_2, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(72, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        AccountWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(AccountWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 648, 21));
        AccountWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(AccountWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        AccountWindow->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(lineEdit_0);
        label->setBuddy(lineEdit_1);
        label_3->setBuddy(lineEdit_2);
        label_8->setBuddy(lineEdit_3);
        label_4->setBuddy(lineEdit_4);
        label_7->setBuddy(lineEdit_5);
        label_6->setBuddy(lineEdit_6);
        label_9->setBuddy(lineEdit_7);
        label_5->setBuddy(lineEdit_8);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lineEdit_0, lineEdit_1);
        QWidget::setTabOrder(lineEdit_1, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit_4);
        QWidget::setTabOrder(lineEdit_4, lineEdit_5);
        QWidget::setTabOrder(lineEdit_5, lineEdit_6);
        QWidget::setTabOrder(lineEdit_6, lineEdit_7);
        QWidget::setTabOrder(lineEdit_7, lineEdit_8);
        QWidget::setTabOrder(lineEdit_8, lineEdit_11);
        QWidget::setTabOrder(lineEdit_11, submit);
        QWidget::setTabOrder(submit, close_button);

        retranslateUi(AccountWindow);

        QMetaObject::connectSlotsByName(AccountWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AccountWindow)
    {
        AccountWindow->setWindowTitle(QApplication::translate("AccountWindow", "AccountWindow", 0));
        groupBox_2->setTitle(QApplication::translate("AccountWindow", "\331\276\330\261\330\257\330\247\330\256\330\252 \331\202\330\263\330\267", 0));
        label_10->setText(QApplication::translate("AccountWindow", "\331\205\330\250\331\204\330\272", 0));
        pushButton->setText(QApplication::translate("AccountWindow", "\331\276\330\261\330\257\330\247\330\256\330\252", 0));
        groupBox->setTitle(QApplication::translate("AccountWindow", "\330\247\330\267\331\204\330\247\330\271\330\247\330\252 \330\255\330\263\330\247\330\250", 0));
        label_2->setText(QApplication::translate("AccountWindow", "\330\264\331\205\330\247\330\261\331\207 \330\255\330\263\330\247\330\250", 0));
        label->setText(QApplication::translate("AccountWindow", "\331\206\330\247\331\205 \331\210 \331\206\330\247\331\205 \330\256\330\247\331\206\331\210\330\247\330\257\332\257\333\214", 0));
        label_3->setText(QApplication::translate("AccountWindow", "\330\252\331\204\331\201\331\206", 0));
        label_8->setText(QApplication::translate("AccountWindow", "\330\264\331\205\330\247\330\261\331\207 \332\251\330\247\330\261\330\252 \330\250\330\247\331\206\332\251\333\214", 0));
        label_4->setText(QApplication::translate("AccountWindow", "\331\205\331\210\330\254\331\210\330\257\333\214", 0));
        label_7->setText(QApplication::translate("AccountWindow", "\330\250\330\257\331\207\333\214", 0));
        label_6->setText(QApplication::translate("AccountWindow", "\331\210\330\247\331\205 \330\247\330\256\330\260 \330\264\330\257\331\207", 0));
        label_9->setText(QApplication::translate("AccountWindow", "\331\202\330\263\330\267", 0));
        label_5->setText(QApplication::translate("AccountWindow", "\330\271\330\266\331\210\333\214\330\252", 0));
        submit->setText(QApplication::translate("AccountWindow", "\330\260\330\256\333\214\330\261\331\207 \330\252\330\272\333\214\333\214\330\261\330\247\330\252", 0));
        close_button->setText(QApplication::translate("AccountWindow", "\330\247\331\206\330\265\330\261\330\247\331\201", 0));
        groupBox_3->setTitle(QApplication::translate("AccountWindow", "\330\247\330\256\330\260 \331\210\330\247\331\205", 0));
        label_11->setText(QApplication::translate("AccountWindow", "\331\205\330\250\331\204\330\272", 0));
        pushButton_2->setText(QApplication::translate("AccountWindow", "\330\257\330\261\333\214\330\247\331\201\330\252", 0));
    } // retranslateUi

};

namespace Ui {
    class AccountWindow: public Ui_AccountWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTWINDOW_H
