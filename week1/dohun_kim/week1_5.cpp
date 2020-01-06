#include <iostream>
#include <vector>
#include <list>
#include <string>


class Node {
  private:
    std::string name;
    int x;
    int y;
  public:
    Node(std::string _name, int _x, int _y) : name(_name), x(_x), y(_y) {}
    void print() { std::cout << "(" << name << ", " << x << ", " << y << ")"; }
};

class Graph {
  private:
    std::vector<Node*> nodes;
    std::vector<std::list<Node*>*> adj;
  public:
    void add_node(std::string name, int x, int y);
    void add_edge(int u, int v);
    void print_graph();
    ~Graph();
};


void Graph::add_node(std::string name, int x, int y) {
  nodes.push_back(new Node(name, x, y));
  adj.push_back(new std::list<Node*>);
}

void Graph::add_edge(int u, int v) {
  adj[u]->push_back(nodes[v]);
  adj[v]->push_back(nodes[u]);
}

void Graph::print_graph() {
  for ( int i = 0; i < nodes.size(); i++ ) {
    nodes[i]->print();
    std::cout << "  ->  ";
    for (Node* item : *adj[i]) {
      item->print();
      std::cout << "   ";
    }
    std::cout << "\n";
  }
}

Graph::~Graph() {
  for ( int i = 0; i < nodes.size(); i++ ) {
    delete nodes[i];
    delete adj[i];
  }
}



int main() {

  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  Graph graph;

  graph.add_node("A", 1, 2);
  graph.add_node("B", 3, 4);
  graph.add_node("C", 5, 6);
  graph.add_node("D", 7, 8);
  
  graph.add_edge(0, 1);
  graph.add_edge(0, 3);
  graph.add_edge(1, 2);
  graph.add_edge(1, 3);
  graph.add_edge(2, 3);

  graph.print_graph();

  return 0;
}