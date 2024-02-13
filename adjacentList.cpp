#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using LL = long long;


const int V =6;

/*add an undirected edge*/
void addEdge(vector<int> graph[], int source, int destination){
    graph[source].push_back(destination);
    graph[destination].push_back(source);
};

void printGraph(vector<int> graph[]) {
    cout << endl;
    cout << "The adjacent list is as follows: " << endl;
    cout << endl;
    for (int source = 0; source <V; source++) {
        cout << "for vertex [" << source << "] there are [" << graph[source].size() <<"] neighbours" << endl;
    
        for (int neighbour : graph[source]) {
            cout << "There is an edge between " << source << " and " << neighbour << endl;
        }
        cout << endl;
    }
}

int main() {
    /*declares an adjacent list*/
    vector<int> graph[V];

    /*add edges*/
    addEdge(graph,0,1);
    addEdge(graph,0,5);
    addEdge(graph,1,5);
    addEdge(graph,1,2);
    addEdge(graph,2,4);
    addEdge(graph,3,5);
    addEdge(graph,3,4);

    printGraph(graph);
    return 0;
};