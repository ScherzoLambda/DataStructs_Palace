#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <string>
#include "datastruct.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    const std::string TREE = "Arvore";
    const std::string LIST = "Lista";
    const std::string GRAPH = "Grafo";
    std::map<std::string, std::string> estruturas;
    std::vector<std::vector<int>> listas;
    std::vector<Grafo> grafos;
    std::vector<TreeNode> arvores;
    void msgbx_Information(QString _title, QString _text );
    void btn_geraListaClicked();
    void btn_geraArvoreClicked();
    void btn_geraGrafoClicked();
    void btn_resetClicked();
    void btn_buscarClicked();
    void btn_deletar2Clicked();
    void btn_inserirClicked();
    void btn_estrCriadaClicked();
    void btn_ajudaClicked();
protected:
    void keyPressEvent(QKeyEvent *event) override;

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
