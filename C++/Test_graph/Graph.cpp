/* 
 * File:   Graph.cpp
 * Author: Himkw_000
 * 
 * Created on December 22, 2015, 7:48 PM
 */

#include "Graph.h"
/**
 * 
 * @param a vertex 1
 * @param b vectex 2
 * @param w weight
 */
Graph::Graph(int n){
  this->n=n;
  cout<<"Number of vertex = "<<n<<endl;
  adj = new vector<pair<int,int> >[n];
}
void Graph::addEdge(int a, int b, int w){
  if(a>=n || b>=n){
    cout<<"vertex should be less than number of vertex\n";
    return;
  }
  else{
    adj[a].push_back(make_pair(b,w));
  }
}
void Graph::BFS(int s){
  //create boolean array, size same as n
  vector<bool> visit(n,0);
  vector<int> buffer;
  visit[s]=true;  //will show a second later
  buffer.push_back(s);
  
  cout<<"BFS from 0: ";
  while(!buffer.empty()){
    s=buffer.front();
    cout<<s<<" ";
    //output the first one in buffer and delete
    buffer.erase(buffer.begin());
    for(int i=0;i<adj[s].size();i++){
      //like 2d vector
      int temp = adj[s][i].first;
      if(!visit[temp]){
        visit[temp]=true;
        buffer.push_back(temp);
      }
    }
  }//while ends
  cout<<"\n\n";
}

//public DFS
void Graph::DFS(int s){
  vector<bool> visit(n,0);
  DFS(s, visit);  //call private function
  cout<<"\n\n";
}

//private DFS
void Graph::DFS(int s, vector<bool> &){
  
}