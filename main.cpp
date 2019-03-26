//
//  main.cpp
//  Graphs
//
//  Created by Kode Creer on 2/22/19.
//  Copyright © 2019 Kode Creer. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Graph.h"
#include <queue>
#include "SearchFunctions.h"

template <class Item>
void printGraph(Graph<Item> g){
    for (int i = 0; i < g.size(); ++i) {
        std::cout << "*" << g[i] << "*";
        for (auto b : g.neighbors(i)) {
            std::cout << " - > " << b;
        }
        std::cout << std::endl;
    }
}
void printGraphLabels(int v){
    std::cout << "Current Node : " << v << std::endl;
}


//Same as the depth first funciton, but using a breadth first search instead

int main(int argc, const char * argv[]) {
    // insert code here...
    Graph<int> numsSys = Graph<int>();
    
    for(int i = 0; i < 6; ++i)
        numsSys.add_vertex(i);
    
    numsSys.add_edge(0, 1, 2);
    numsSys.add_edge(0, 5, 9);
    numsSys.add_edge(1, 2, 8);
    numsSys.add_edge(1, 3, 15);
    numsSys.add_edge(1, 5, 6);
    numsSys.add_edge(2, 3, 1);
    numsSys.add_edge(4, 2, 7);
    numsSys.add_edge(4, 3, 3);
    numsSys.add_edge(5, 4, 3);
//    numsSys.add_edge(3, 5, 20);
//    numsSys.add_edge(3, 1, 3);
    
    printGraph(numsSys);
    //breadth_first(::printGraphLabels, numsSys, 5);
    shortest_route(::printGraphLabels, numsSys, 1, 3);
    return 0;
}

