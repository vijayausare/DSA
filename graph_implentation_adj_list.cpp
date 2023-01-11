#include<iostream>
#include<list>
#include<unordered_map>
using namespace std ; 


class Graph{

public : 
	unordered_map<int , list<int>>adj; 
	// creating the graph which will have the nodes and list of conneted nodes 
	// to show the connected nodes we have used the list 

	void addEdge(int u , int v , int direction){
		// if dir is 0 it is undirected and if dir = 1 it is diredcted graph 
		adj[u].push_back(v); 
		if(direction==0)adj[v].push_back(u); 
		
	}
	void printGraph(){
		for(auto it : adj){
				cout<<it.first<<" -->";
			for(auto i : it.second)
				cout<<i ; 
			cout<<endl ; 
		}
	}

}; 
int main(){

int node  , edge ; 
cout<<" enter number of nodes and the edges "<<endl ; 

cin>>node; cin>>edge ; 
Graph g ; 
for(int i =0 ; i< edge ; i++){
    int u , v ; 
    cin>>u >>v;  
    g.addEdge(u ,v ,0); // creating the undirected graph 
}

g.printGraph(); 

return 0 ;}
