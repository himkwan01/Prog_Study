/* 
 * File:   main.cpp
 * Author: Himkw_000
 * Purpose: Graph implementation
 * Created on December 22, 2015, 7:48 PM
 */

#include <bits/stdc++.h>
using namespace std;

#include "Graph.h"

//System begins here
int main(int argc, char** argv) {
  Graph g(7);
  g.addEdge(0, 1, 4); 
  g.addEdge(0, 2, 3);
  g.addEdge(0, 3, 7);
  g.addEdge(1, 0, 4);
  g.addEdge(1, 3, 1);
  g.addEdge(1, 5, 4);
  g.addEdge(2, 0, 3);
  g.addEdge(2, 3, 3);
  g.addEdge(2, 4, 5);
  g.addEdge(3, 0, 7);
  g.addEdge(3, 1, 1);
  g.addEdge(3, 2, 3);
  g.addEdge(3, 4, 2);
  g.addEdge(3, 5, 2);
  g.addEdge(3, 6, 7);
  g.addEdge(4, 2, 5);
  g.addEdge(4, 3, 2);
  g.addEdge(4, 6, 2);
  g.addEdge(5, 1, 4);
  g.addEdge(5, 3, 2);
  g.addEdge(5, 6, 4);
  g.addEdge(6, 3, 7);
  g.addEdge(6, 4, 2);
  g.addEdge(6, 5, 4);
  g.BFS(0);
    return 0;
}

