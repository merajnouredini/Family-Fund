/********************************************************************************
** Form generated from reading UI file 'database_error.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASE_ERROR_H
#define UI_DATABASE_ERROR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Database_error
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Database_error)
    {
        if (Database_error->objectName().isEmpty())
            Database_error->setObjectName(QStringLiteral("Database_error"));
        Database_error->resize(379, 283);
        buttonBox = new QDialogButtonBox(Database_error);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(100, 220, 161, 32));
        buttonBox->setLayoutDirection(Qt::LeftToRight);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(Database_error);
        QObject::connect(buttonBox, SIGNAL(accepted()), Database_error, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Database_error, SLOT(reject()));

        QMetaObject::connectSlotsByName(Database_error);
    } // setupUi

    void retranslateUi(QDialog *Database_error)
    {
        Database_error->setWindowTitle(QApplication::translate("Database_error", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Database_error: public Ui_Database_error {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASE_ERROR_H
