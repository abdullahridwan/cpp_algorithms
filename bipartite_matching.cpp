
#include <iostream>
#include <limits.h>
#include <queue>
#include <string.h>
using namespace std;



class Graph{
    public:
        vector<vector<int>> nodes;
        
        Graph(int total_nodes){
            vector<int> v(total_nodes);
            vector<vector<int>> graph_nodes(total_nodes, v);
            nodes = graph_nodes;
        }
        
        void set_node(int a, int b, int w){
            this->nodes[a][b] = w;
        }
        
        void print_graph(){
            cout<<"Here"<<"\n";
            for (int i = 0; i < this->nodes.size(); i++) {
                for (int j = 0; j < this->nodes[i].size(); j++)
                    cout << this->nodes[i][j] << " ";
                cout << endl;
            }
        }
    
};

int main()
{
    cout<<"Hello World";
    
    //input
    int V = 5;//number of nodes
    //imagine we're given node 1 as 2 3
    Graph g(5);
    g.set_node(1,2,10);
    g.print_graph();
    
    
    //prints below which is what i want for quick parsing
    // 0 0 0 0 0 
    // 0 0 10 0 0 
    // 0 0 0 0 0 
    // 0 0 0 0 0 
    // 0 0 0 0 0 

    

    return 0;
}
