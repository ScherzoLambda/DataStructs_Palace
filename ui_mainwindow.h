/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QFrame *fr_entries;
    QVBoxLayout *verticalLayout_6;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout;
    QFrame *fr_displayEntry;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QTextEdit *te_entryDisplay;
    QFrame *frame;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lbl_entrada;
    QLineEdit *le_entryData;
    QComboBox *cb_tipoEstrutura;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btn_buscar;
    QPushButton *btn_inserir;
    QPushButton *btn_deletar;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *le_numItems;
    QPushButton *btn_geraLista;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *le_numNos;
    QPushButton *btn_geraArvore;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *le_numVertice;
    QComboBox *cb_tipoGrafo;
    QPushButton *btn_geraGrafo;
    QFrame *line_3;
    QSpacerItem *verticalSpacer;
    QPushButton *btn_reset;
    QFrame *fr_info;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTextEdit *te_infoExec;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(687, 469);
        MainWindow->setMinimumSize(QSize(600, 300));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(77, 86, 166);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setMaximumSize(QSize(16777215, 16777215));
        centralWidget->setStyleSheet(QString::fromUtf8("border-radius:10px;"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, -1, 0, 0);
        fr_entries = new QFrame(centralWidget);
        fr_entries->setObjectName("fr_entries");
        fr_entries->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"background-color: rgb(15, 15, 15);\n"
"border-radius:10px;"));
        fr_entries->setFrameShape(QFrame::NoFrame);
        verticalLayout_6 = new QVBoxLayout(fr_entries);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName("verticalLayout_6");
        frame_4 = new QFrame(fr_entries);
        frame_4->setObjectName("frame_4");
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_4);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        fr_displayEntry = new QFrame(frame_4);
        fr_displayEntry->setObjectName("fr_displayEntry");
        fr_displayEntry->setMinimumSize(QSize(300, 240));
        fr_displayEntry->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(57, 64, 127);"));
        fr_displayEntry->setFrameShape(QFrame::NoFrame);
        verticalLayout_4 = new QVBoxLayout(fr_displayEntry);
        verticalLayout_4->setSpacing(3);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(-1, 4, -1, 4);
        frame_2 = new QFrame(fr_displayEntry);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(0, 35));
        frame_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(23, 15, 50);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_2);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(9, 0, -1, 0);
        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setEnabled(false);
        pushButton_2->setMaximumSize(QSize(16777215, 25));
        QFont font;
        font.setPointSize(11);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 50);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_7->addWidget(pushButton_2);

        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 0));
        pushButton->setMaximumSize(QSize(16777215, 25));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 50);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_7->addWidget(pushButton);


        verticalLayout_4->addWidget(frame_2);

        te_entryDisplay = new QTextEdit(fr_displayEntry);
        te_entryDisplay->setObjectName("te_entryDisplay");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font1.setBold(true);
        te_entryDisplay->setFont(font1);
        te_entryDisplay->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);"));

        verticalLayout_4->addWidget(te_entryDisplay);

        frame = new QFrame(fr_displayEntry);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(0, 70));
        frame->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(23, 15, 50);"));
        frame->setFrameShape(QFrame::NoFrame);
        verticalLayout_5 = new QVBoxLayout(frame);
        verticalLayout_5->setSpacing(2);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(5, 0, 5, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        lbl_entrada = new QLabel(frame);
        lbl_entrada->setObjectName("lbl_entrada");
        lbl_entrada->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(lbl_entrada);

        le_entryData = new QLineEdit(frame);
        le_entryData->setObjectName("le_entryData");
        le_entryData->setMinimumSize(QSize(0, 24));
        le_entryData->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(le_entryData);

        cb_tipoEstrutura = new QComboBox(frame);
        cb_tipoEstrutura->addItem(QString());
        cb_tipoEstrutura->addItem(QString());
        cb_tipoEstrutura->addItem(QString());
        cb_tipoEstrutura->setObjectName("cb_tipoEstrutura");
        cb_tipoEstrutura->setMinimumSize(QSize(70, 24));
        cb_tipoEstrutura->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_5->addWidget(cb_tipoEstrutura);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(5);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        btn_buscar = new QPushButton(frame);
        btn_buscar->setObjectName("btn_buscar");
        btn_buscar->setMinimumSize(QSize(0, 25));
        btn_buscar->setFont(font);
        btn_buscar->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 50);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(btn_buscar);

        btn_inserir = new QPushButton(frame);
        btn_inserir->setObjectName("btn_inserir");
        btn_inserir->setMinimumSize(QSize(0, 25));
        btn_inserir->setFont(font);
        btn_inserir->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 50);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(btn_inserir);

        btn_deletar = new QPushButton(frame);
        btn_deletar->setObjectName("btn_deletar");
        btn_deletar->setMinimumSize(QSize(0, 25));
        btn_deletar->setMaximumSize(QSize(16777215, 16777215));
        btn_deletar->setFont(font);
        btn_deletar->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 50);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(btn_deletar);


        verticalLayout_5->addLayout(horizontalLayout_6);


        verticalLayout_4->addWidget(frame);


        horizontalLayout->addWidget(fr_displayEntry);

        frame_3 = new QFrame(frame_4);
        frame_3->setObjectName("frame_3");
        frame_3->setMinimumSize(QSize(180, 0));
        frame_3->setMaximumSize(QSize(275, 16777215));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 64, 127);"));
        frame_3->setFrameShape(QFrame::NoFrame);
        verticalLayout_3 = new QVBoxLayout(frame_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(frame_3);
        label_2->setObjectName("label_2");
        QFont font2;
        font2.setBold(true);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(label_2);

        le_numItems = new QLineEdit(frame_3);
        le_numItems->setObjectName("le_numItems");
        le_numItems->setMaximumSize(QSize(16777215, 25));
        le_numItems->setFont(font);
        le_numItems->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(le_numItems);


        verticalLayout_3->addLayout(horizontalLayout_2);

        btn_geraLista = new QPushButton(frame_3);
        btn_geraLista->setObjectName("btn_geraLista");
        btn_geraLista->setMaximumSize(QSize(16777215, 16777215));
        btn_geraLista->setFont(font);
        btn_geraLista->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(btn_geraLista);

        line = new QFrame(frame_3);
        line->setObjectName("line");
        line->setMaximumSize(QSize(16777215, 4));
        line->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_3->addWidget(line);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(frame_3);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(label_3);

        le_numNos = new QLineEdit(frame_3);
        le_numNos->setObjectName("le_numNos");
        le_numNos->setMaximumSize(QSize(16777215, 25));
        le_numNos->setFont(font);
        le_numNos->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(le_numNos);


        verticalLayout_3->addLayout(horizontalLayout_3);

        btn_geraArvore = new QPushButton(frame_3);
        btn_geraArvore->setObjectName("btn_geraArvore");
        btn_geraArvore->setFont(font);
        btn_geraArvore->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(btn_geraArvore);

        line_2 = new QFrame(frame_3);
        line_2->setObjectName("line_2");
        line_2->setMaximumSize(QSize(16777215, 4));
        line_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_3->addWidget(line_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(frame_3);
        label_4->setObjectName("label_4");
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(label_4);

        le_numVertice = new QLineEdit(frame_3);
        le_numVertice->setObjectName("le_numVertice");
        le_numVertice->setMinimumSize(QSize(60, 0));
        le_numVertice->setMaximumSize(QSize(16777215, 25));
        le_numVertice->setFont(font);
        le_numVertice->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(le_numVertice);


        verticalLayout_3->addLayout(horizontalLayout_4);

        cb_tipoGrafo = new QComboBox(frame_3);
        cb_tipoGrafo->addItem(QString());
        cb_tipoGrafo->addItem(QString());
        cb_tipoGrafo->addItem(QString());
        cb_tipoGrafo->setObjectName("cb_tipoGrafo");
        cb_tipoGrafo->setMaximumSize(QSize(16777215, 25));
        cb_tipoGrafo->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(cb_tipoGrafo);

        btn_geraGrafo = new QPushButton(frame_3);
        btn_geraGrafo->setObjectName("btn_geraGrafo");
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(false);
        btn_geraGrafo->setFont(font3);
        btn_geraGrafo->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(btn_geraGrafo);

        line_3 = new QFrame(frame_3);
        line_3->setObjectName("line_3");
        line_3->setMaximumSize(QSize(16777215, 4));
        line_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_3->addWidget(line_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout_3->addItem(verticalSpacer);

        btn_reset = new QPushButton(frame_3);
        btn_reset->setObjectName("btn_reset");
        btn_reset->setFont(font);
        btn_reset->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(btn_reset);


        horizontalLayout->addWidget(frame_3);


        verticalLayout_6->addWidget(frame_4);

        fr_info = new QFrame(fr_entries);
        fr_info->setObjectName("fr_info");
        fr_info->setMinimumSize(QSize(0, 0));
        fr_info->setMaximumSize(QSize(16777215, 100));
        fr_info->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(57, 64, 127);"));
        fr_info->setFrameShape(QFrame::NoFrame);
        verticalLayout_2 = new QVBoxLayout(fr_info);
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(-1, 4, -1, 4);
        label = new QLabel(fr_info);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 20));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Verdana")});
        font4.setPointSize(8);
        font4.setBold(false);
        label->setFont(font4);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(label);

        te_infoExec = new QTextEdit(fr_info);
        te_infoExec->setObjectName("te_infoExec");
        te_infoExec->setMinimumSize(QSize(0, 50));
        te_infoExec->setMaximumSize(QSize(16777215, 16777215));
        te_infoExec->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);"));

        verticalLayout_2->addWidget(te_infoExec);


        verticalLayout_6->addWidget(fr_info);


        verticalLayout->addWidget(fr_entries);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 687, 21));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Algo_Analitics", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Ajuda", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Estruturas Criadas", nullptr));
        lbl_entrada->setText(QCoreApplication::translate("MainWindow", "Entrada", nullptr));
        cb_tipoEstrutura->setItemText(0, QCoreApplication::translate("MainWindow", "List", nullptr));
        cb_tipoEstrutura->setItemText(1, QCoreApplication::translate("MainWindow", "Tree", nullptr));
        cb_tipoEstrutura->setItemText(2, QCoreApplication::translate("MainWindow", "Graph", nullptr));

        btn_buscar->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        btn_inserir->setText(QCoreApplication::translate("MainWindow", "Inserir", nullptr));
        btn_deletar->setText(QCoreApplication::translate("MainWindow", "Deletar", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "N\302\272 Items", nullptr));
        btn_geraLista->setText(QCoreApplication::translate("MainWindow", "Gerar Lista", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "N\302\272 N\303\263s", nullptr));
        btn_geraArvore->setText(QCoreApplication::translate("MainWindow", "Gerar Arvore", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "N\302\272 Vertices", nullptr));
        cb_tipoGrafo->setItemText(0, QCoreApplication::translate("MainWindow", "Ponderado", nullptr));
        cb_tipoGrafo->setItemText(1, QCoreApplication::translate("MainWindow", "Ponderado Direcionado", nullptr));
        cb_tipoGrafo->setItemText(2, QCoreApplication::translate("MainWindow", "Direcionado", nullptr));

        btn_geraGrafo->setText(QCoreApplication::translate("MainWindow", "Gerar Grafo", nullptr));
        btn_reset->setText(QCoreApplication::translate("MainWindow", "Clear Output", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Info. da Execu\303\247\303\243o", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
