/*
* RoutebwNodes.cpp
*
*  Created on: Sep 13, 2024
*      Author: JANGCHA
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Graph {
public:
   Graph(int n) : adjList(n) {}

   void addEdge(int u, int v) {
       adjList[u].push_back(v);
   }

   bool hasRouteBFS(int start, int end) {
       if (start == end) return true;

       vector<bool> visited(adjList.size(), false);
       queue<int> q;
       q.push(start);
       visited[start] = true;

       while (!q.empty()) {
           int node = q.front();
           q.pop();

           // Explore neighbors
           for (int neighbor : adjList[node]) {
               if (neighbor == end) return true;
               if (!visited[neighbor]) {
                   visited[neighbor] = true;
                   q.push(neighbor);
               }
           }
       }

       return false;
   }
   void printGraph() {
           for (int i = 0; i < adjList.size(); ++i) {
               cout << "Node " << i << ":";
               for (int j : adjList[i]) {
                   cout << " -> " << j;
               }
               cout << endl;
           }
       }

private:
   vector<vector<int>> adjList;
};

int main() {
   Graph g(5);  // Create a graph with 5 nodes (0 to 4)
   g.addEdge(0, 1);
   g.addEdge(0, 4);
   g.addEdge(1, 2);
   g.addEdge(2, 3);
   g.addEdge(4, 2);
   g.printGraph();
   int start = 0, end = 3;
   if (g.hasRouteBFS(start, end)) {
       cout << "There is a route from " << start << " to " << end << endl;
   } else {
       cout << "No route exists from " << start << " to " << end << endl;
   }

   return 0;
}



