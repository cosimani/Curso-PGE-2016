/********************************************************************************
** Form generated from reading UI file 'principal.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_H
#define UI_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "visor.h"

QT_BEGIN_NAMESPACE

class Ui_Principal
{
public:
    QGridLayout *gridLayout;
    Visor *visor;
    QComboBox *cbSeleccionarCamara;
    QPushButton *pbIniciarCamara;

    void setupUi(QWidget *Principal)
    {
        if (Principal->objectName().isEmpty())
            Principal->setObjectName(QStringLiteral("Principal"));
        Principal->resize(679, 397);
        gridLayout = new QGridLayout(Principal);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        visor = new Visor(Principal);
        visor->setObjectName(QStringLiteral("visor"));

        gridLayout->addWidget(visor, 1, 0, 1, 2);

        cbSeleccionarCamara = new QComboBox(Principal);
        cbSeleccionarCamara->setObjectName(QStringLiteral("cbSeleccionarCamara"));

        gridLayout->addWidget(cbSeleccionarCamara, 0, 0, 1, 1);

        pbIniciarCamara = new QPushButton(Principal);
        pbIniciarCamara->setObjectName(QStringLiteral("pbIniciarCamara"));

        gridLayout->addWidget(pbIniciarCamara, 0, 1, 1, 1);


        retranslateUi(Principal);

        QMetaObject::connectSlotsByName(Principal);
    } // setupUi

    void retranslateUi(QWidget *Principal)
    {
        Principal->setWindowTitle(QApplication::translate("Principal", "Principal", 0));
        pbIniciarCamara->setText(QApplication::translate("Principal", "Iniciar c\303\241mara", 0));
    } // retranslateUi

};

namespace Ui {
    class Principal: public Ui_Principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_H
