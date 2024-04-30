#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "datastruct.h"
#include <vector>
#include <string>
#include <QKeyEvent>
#include <algorithm>
#include <QMessageBox>

/// ------------------------- Construtor
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->te_entryDisplay->setReadOnly(true);
    ui->te_infoExec->setReadOnly(true);
    connect(ui->btn_geraLista, &QPushButton::clicked, this, &MainWindow::btn_geraListaClicked);
    connect(ui->btn_geraArvore, &QPushButton::clicked, this, &MainWindow::btn_geraArvoreClicked);
    connect(ui->btn_reset, &QPushButton::clicked, this, &MainWindow::btn_resetClicked);
    connect(ui->btn_geraGrafo, &QPushButton::clicked, this, &MainWindow::btn_geraGrafoClicked);
    connect(ui->btn_buscar, &QPushButton::clicked, this, &MainWindow::btn_buscarClicked);
    connect(ui->btn_inserir, &QPushButton::clicked, this, &MainWindow::btn_inserirClicked);
    connect(ui->btn_deletar, &QPushButton::clicked, this, &MainWindow::btn_deletar2Clicked);
    connect(ui->btn_estrCriadas, &QPushButton::clicked, this, &MainWindow::btn_estrCriadaClicked);
    connect(ui->btn_ajuda, &QPushButton::clicked, this, &MainWindow::btn_ajudaClicked);
}
/// ------------------------ Destrutor
MainWindow::~MainWindow()
{
    delete ui;
}
/// ------------------------- Mensagem de Alerta ao Usuario
void MainWindow::msgbx_Information(QString _title, QString _text )
{
    QMessageBox msgBox;
    msgBox.setWindowTitle(_title);
    msgBox.setText(_text);
    // Estilo CSS para o QMessageBox
    msgBox.setStyleSheet("QMessageBox { background-color: #f0f0f0; }");
    msgBox.setIcon(QMessageBox::Information);
    msgBox.exec();
    return;
}
/// --------------------------------------------- Funções Botões
/// ---------------------- Geração de lista
void MainWindow::btn_geraListaClicked()
{

    auto it = estruturas.find(MainWindow::LIST);
    if (it != estruturas.end()) {
        int qtd = stoi(estruturas[MainWindow::LIST]);
        qtd += 1;
        estruturas[MainWindow::LIST] = to_string(qtd);
    }
    else {
        estruturas.insert(make_pair(MainWindow::LIST, "1"));
    }
    QString indice = QString::fromStdString(estruturas[MainWindow::LIST]);
    int numItems = ui->le_numItems->text().toInt();
    ui->te_entryDisplay->append("Lista criada."+indice);
    std::vector<int> new_lista = gerlista(numItems);
    listas.push_back(new_lista);


    ui->te_entryDisplay->append(printLista(new_lista));
}
/// ---------------------- Geração de Arvore
void MainWindow::btn_geraArvoreClicked()
{
    /// verifica se ha alguma lista criada
    auto it = estruturas.find(MainWindow::TREE);
    if (it != estruturas.end()) {
        int qtd = stoi(estruturas[MainWindow::TREE]);
        qtd += 1;
        estruturas[MainWindow::TREE] = to_string(qtd);
    }
    else {
        /// caso não tenha, adiciona o par ('Tree', 1) onde o valor é a quantidade de estruturas
        estruturas.insert(make_pair(MainWindow::TREE, "1"));
    }
    ui->te_entryDisplay->append("---------------------------------------------------------");
    ui->te_entryDisplay->append("Arvore Criada.");
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, LIMIT_SR);
    int num_nos = ui->le_numNos->text().toInt();
    /// Criando Raiz
    TreeNode root(dis(gen), true);
    num_nos--;
    /// Craindo filhos da raiz
    root.add_random_children(num_nos);
    /// Para cada filho da raiz, 2 filhos
    for (TreeNode* child : root.children) {
        child->add_random_children(2);
        /// Para cada filho do filho da raiz, 2 filhos
        for (TreeNode* grandchild : child->children) {
            grandchild->add_random_children(2);
        }
    }
    /// adicionar arvore no vetor de arvore
    arvores.push_back(root);
    QString treeString = QString::fromStdString(root.to_string());
    ui->te_entryDisplay->append(treeString);

}
/// ---------------------- Geração de Grafo
void MainWindow::btn_geraGrafoClicked()
{
    auto it = estruturas.find(MainWindow::GRAPH);
    if (it != estruturas.end()) {
        int qtd = stoi(estruturas[MainWindow::GRAPH]);
        qtd += 1;
        estruturas[MainWindow::GRAPH] = to_string(qtd);
    }
    else {
        estruturas.insert(make_pair(MainWindow::GRAPH, "1"));
    }
    int vertices = ui->le_numVertice->text().toInt();
    int tipoGrafo = ui->cb_tipoGrafo->currentIndex();
    string GraphString = "";
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 100);

    if (tipoGrafo == 0) {

        Grafo grafo(false);
        for (int i = 0; i < vertices; i++) {
            grafo.adicionarAresta(i, i + 1, dis(gen));
        }
        GraphString = grafo.imprimir();
        grafos.push_back(grafo);
    }
    if(tipoGrafo == 1)
    {

        Grafo grafo(true);
        for (int i = 0; i < vertices; i++) {
            grafo.adicionarAresta(i, i + 1, dis(gen));
        }
        GraphString = grafo.imprimir();
        grafos.push_back(grafo);
    }
    if(tipoGrafo == 2)
    {

        Grafo grafo(true);
        for (int i = 0; i < vertices; i++) {
            grafo.adicionarAresta(i, i + 1);
        }
        GraphString = grafo.imprimir();
        grafos.push_back(grafo);
    }
    ui->te_entryDisplay->append("---------------------------------------------------------");
    ui->te_entryDisplay->append("Grafo Criado");
    ui->te_entryDisplay->append(QString::fromStdString(GraphString));
}
/// --------------------------------------------- Limpa Display Output
void MainWindow::btn_resetClicked()
{
    ui->te_entryDisplay->clear();
    ui->te_infoExec->clear();
}

/// --------------------------------------------- Operações CRUD das estruturas
/// ---------------------- Busca um elemento
void MainWindow::btn_buscarClicked()
{
    if(ui->le_entryData->text().isEmpty()){
        msgbx_Information("Empty entry!", "Digite um numero no campo entrada.");
    }
    else{
        int item = ui->le_entryData->text().toInt();
        ui->te_entryDisplay->append("---------------------------------------------------------");
        ui->te_entryDisplay->append("Busca Efetuada");
        QString resultado = buscarLista(listas.back(), item);
        if (resultado.toInt() == 0) {
            ui->te_entryDisplay->append(resultado);

        }
        else {
            // Item encontrado
            ui->te_entryDisplay->append("Item não encontrado");
        }
    }
}
/// ---------------------- Deleta uma estrutura
void MainWindow::btn_deletar2Clicked()
{
    if(estruturas.empty()){
        msgbx_Information("Empty array of structures!", "Não há nenhuma estrutura criada.\n Crie uma estrutura!");
        return;
    }else{
        /// Verifica se há lista criada.
        QString status_delete = "";
        auto it = estruturas.find(MainWindow::LIST);
        if (it != estruturas.end() && !listas.empty()) {
            int qtd = stoi(estruturas[MainWindow::LIST]);
            qtd -= 1;
            estruturas[MainWindow::LIST] = to_string(qtd);
            listas.pop_back();
            status_delete += ">> 1 Lista Removida |";
        }
        else {
            status_delete += " 0 Lista Removida |";
        }
        /// Verifica se há arvore criada.
        it = estruturas.find(TREE);
        if (it != estruturas.end() && !arvores.empty()) {
            int qtd = stoi(estruturas[MainWindow::TREE]);
            qtd -= 1;
            estruturas[MainWindow::TREE] = to_string(qtd);
            arvores.pop_back();
            status_delete += " 1 Arvore Removida |";
        }
        else {
            status_delete += " 0 Arvore Removida |";
        }
        /// Verifica se há Grafo criado.
        it = estruturas.find(MainWindow::GRAPH);
        if (it != estruturas.end() && !grafos.empty()) {
            int qtd = stoi(estruturas[MainWindow::GRAPH]);
            qtd -= 1;
            estruturas[MainWindow::GRAPH] = to_string(qtd);
            grafos.pop_back();
            status_delete += " 1 Grafo Removido |";
        }
        else {
            status_delete += " 0 Grafo Removida |";
        }
        ui->te_entryDisplay->append("---------------------------------------------------------");

        status_delete += "Remoção Efetuada <<";
        ui->te_entryDisplay->append(status_delete);


    }

}
/// ---------------------- Insere um elemento
void MainWindow::btn_inserirClicked()
{
    if(ui->cb_tipoEstrutura->currentIndex() == 0){
        int item = ui->le_entryData->text().toInt();
        if(listas.empty()){
            msgbx_Information("Empty vector list","Não há nenhuma lista criada.\n Crie uma lista!");
            return;
        }else{
            listas.back().push_back(item);
            ui->te_entryDisplay->append("---------------------------------------------------------");
            ui->te_entryDisplay->append("Inserção Efetuada");
            ui->te_entryDisplay->append(printLista(listas.back()));
        }
    }
    if(ui->cb_tipoEstrutura->currentIndex() == 1){
        /// inserir no: val_filho:val_paifilho:root
        int item = ui->le_entryData->text().toInt();
        if(arvores.empty()){
            msgbx_Information("Empty vector tree","Não há nenhuma arvore criada.\n Crie uma arvore!");
            return;
        }else{
            //arvores.push_back(item);
            TreeNode arve = arvores.back();
            TreeNode* child_node = new TreeNode(item);
            arve.children.push_back(child_node);
            ui->te_entryDisplay->append("---------------------------------------------------------");
            ui->te_entryDisplay->append("Inserção Efetuada");
            QString treeString = QString::fromStdString(arve.to_string());
            ui->te_entryDisplay->append(treeString);

        }
    }
    if(ui->cb_tipoEstrutura->currentIndex() == 2){
        int item = ui->le_entryData->text().toInt();
        if(grafos.empty()){
            msgbx_Information("Empty vector graph","Não há nenhum grafo criado.\n Crie um grafo!");
            return;
        }else{
            ///grafos.push_back(item);
            /// adição de aresta ou nó.
            grafos.back().adicionarAresta(item, item+2, item*2);
            ui->te_entryDisplay->append(QString::fromStdString(grafos.back().imprimir()));
        }
    }

}

void MainWindow::btn_estrCriadaClicked()
{
    /// num de listas
    /// num de arvores
    /// num de grafos
}

void MainWindow::btn_ajudaClicked()
{
    /// tutorial de uso
    /// tutorial de inserção na arvore
    /// tutorial de inserção no grafo

}
/// ---------------------- Deleta um elemento
/// --------------------------------------- Eventos keyboard
void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Enter && ui->le_numItems->hasFocus()) {
        btn_geraListaClicked();
    }
    if (event->key() == Qt::Key_Enter && ui->le_entryData->hasFocus()) {
        btn_buscarClicked();
    }
}



