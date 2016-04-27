/* 
 * File:   Graph.h
 * Author: Himkw_000
 *
 * Created on December 22, 2015, 7:48 PM
 */

#ifndef GRAPH_H
#define	GRAPH_H
#include <bits/stdc++.h>
using namespace std;

class Graph {
private:
  int n;
  vector<pair<int,int> > *adj;  //create vectors pair base on number of vertex
  void DFS(int s, vector<bool> &);
public:
  
  Graph(int n);
  void addEdge(int, int, int);
  void BFS(int);
  void DFS(int s);
};

#endif	/* GRAPH_H */

