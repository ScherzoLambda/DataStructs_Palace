#ifndef DATASTRUCT_H
#define DATASTRUCT_H

#include <QString>
#include <vector>
#include<random>
#include <iostream>
#include <queue>
#include <cstdlib> /// Para a função rand()
///#include <cstdint> /// Para uint64_t
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <sstream>
#include <string>

using namespace std;

/// --------------------------- CONSTANTES
const int LIMIT_SR = 10000;

/// ----------------- Definição das operações com Listas
inline std::vector<int> gerlista(int tamanho) {
    std::vector<int> lista;

    // Inicializar o gerador de números aleatórios com uma semente adequada
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, LIMIT_SR); // Intervalo de números aleatórios de 1 a 100

    // Adicionar números aleatórios à lista
    for (int i = 0; i < tamanho; ++i) {
        lista.push_back(dis(gen)); // Adiciona um número aleatório ao vetor
    }

    return lista;
}
/// ------------ Imprime a lista
inline QString printLista(vector<int> v){
    QString formattedString = "[";
    for (int i = 0; i < v.size(); ++i) {
        formattedString += QString::number(v[i]);

        if (i < v.size() - 1)
            formattedString += ", ";
    }

    formattedString += "]";
    return formattedString;
}
/// ------------ Efetua a busca por um elemento
inline QString buscarLista(vector<int> vet, int item){

    auto it = std::find(vet.begin(), vet.end(), item);
    QString resultado;
    if (it != vet.end()) {
        // Item encontrado
        int posicao = std::distance(vet.begin(), it);
        resultado = "Item encontrado na posição " + QString::number(posicao);
        return resultado;
    }
    else{
        resultado = "-1";
        return resultado;
    }
}

/// --------------------------------- Defição da estrutura Arvore
class TreeNode {
public:
    /// ---------------- CONSTRUTOR : Inicializa o no RAIZ com o valor recebido em _data.[data(_data)]
    TreeNode(int _data, bool _root=false) : data(_data), root(_root) {}
    /// ------------------------------------- Vetor contendo referencia aos filhos da RAIZ.
    std::vector<TreeNode*> children;
    /// ------------------------------------- adciona filho ao vetor de filhos
    void add_child(TreeNode* child_node) {
        children.push_back(child_node);
    }
    /// ------------------------------------- Adiciona N filhos com um valor aleatorio.
    void add_random_children(int num_children) {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(1, LIMIT_SR);

        for (int i = 0; i < num_children; ++i) {
            int random_value = dis(gen);
            TreeNode* child_node = new TreeNode(random_value);
            add_child(child_node);
        }
    }
    /// --------------------------------- Vizualização da Arvore
    std::string to_string(int level = 0, std::string parent_label = "") {
        std::string _rep;
        if (level == 0) {
            _rep += "root: '" + std::to_string(data) + "'\n";
        }
        else {
            if(level == 1){
                _rep += std::string(4 * level, ' ') + "root" + "_child: '" + std::to_string(data) + "'\n";
            }
            else{
                _rep += std::string(4 * level, ' ') + parent_label + "_child: '" + std::to_string(data) + "'\n";
            }

        }
        for (TreeNode* child : children) {
            _rep += child->to_string(level + 1, std::to_string(data));
        }
        return _rep;
    }

private:
    /// ------ Valor armazenado no Nó
    int data;
    int level;
    bool root;
};

/// --------------------------------- Defição da estrutura Grafo
class Grafo {
private:
    // Estrutura para representar uma aresta
    struct Aresta {
        int destino;
        int peso; // Peso da aresta
    };

    // Estrutura para representar um nó com suas arestas adjacentes
    struct No {
        vector<Aresta> arestas;
    };

    unordered_map<int, No> nos; // Mapeamento de identificadores de nós para nós

    bool direcionado; // Indica se o grafo é direcionado

public:
    // Construtor
    Grafo(bool _direcionado = false) : direcionado(_direcionado) {}

    // Método para adicionar uma aresta entre dois nós
    void adicionarAresta(int origem, int destino, int peso = 1) {
        nos[origem].arestas.push_back({ destino, peso });
        if (!direcionado) {
            nos[destino].arestas.push_back({ origem, peso });
        }
    }

    string imprimir() {
        stringstream vizuGrafo; // stringstream para construir a visualização do grafo
        for (const auto& par : nos) {
            vizuGrafo << "Nó " << par.first << " -> ";
            for (const auto& aresta : par.second.arestas) {
                vizuGrafo << "(" << aresta.destino << ", " << aresta.peso << ") ";
            }
            vizuGrafo << "\n";
        }
        return vizuGrafo.str(); // Retorna a string construída
    }



};

#endif // DATASTRUCT_H
