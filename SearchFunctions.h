//
//  SearchFunctions.h
//  Graphs
//
//  Created by Kode Creer on 3/13/19.
//  Copyright © 2019 Kode Creer. All rights reserved.
//

#ifndef SearchFunctions_h
#define SearchFunctions_h

template <class Process, class Item, class SizeType>
void breadth_first(Process f, Graph<Item>& g, SizeType v);

template <class Process, class Item, class SizeType>
void depth_first(Process f, Graph<Item>& g, SizeType search);
//Precondition: start is a vertex number of the labeled graph
//
template <class Process, class Item, class SizeType>
void rec_dfs(Process f, Graph<Item>& g, SizeType v, bool marked[]);

template <class Process, class Item, class SizeType>
void breadth_first(Process f, Graph<Item>& g, SizeType v);

template <class Process, class Item, class SizeType>
void shortest_route(Process f, Graph<Item>& g, SizeType start, SizeType end);

int min_distance(int dist[], bool marked[], int V);
#include "SearchFunctions.template"
#endif /* SearchFunctions_h */
