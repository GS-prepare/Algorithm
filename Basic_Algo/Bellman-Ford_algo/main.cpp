//
//  main.cpp
//  Bellman-Ford_algo
//
//  Created by Sun on 2020/1/22.
//  Copyright © 2020 Sun. All rights reserved.
//

#include <iostream>

void Initialize_Single_Source(G,S){
    for each v ∈ G(V,E)
        v.d = ∞ ; // S to v 之 Shortest path
    v.π = NIL; // v-parent
}

void Relax(u,v,w){ // Decrease-key
    if (v.d > u.d + w(u,v)){
        v.d = u.d + w(u,v);
        v.π = u;
    }
}

void Bellman-Ford(G,W,S){
    //initial
    Initialize_Single_Source(G,S);
    n = |G.V| //vertex 個數
    
    //每一輪對Ｇ上的每一條Ｅ做 Relax
    for (i=1; i<=n-1; i++){
        for each (u,v) ∈ G(V,E)
            Relax(u,v,w); //對每一條邊做relax
    }
    
    //偵測是否有負Cycle?
    for each(u,v) ∈ G(V,E){
        if v.d > u.d + w(u,v){
            return false; //Ｇ中有負Cycle
        }
        return true;
    }
}

void DAG_Shorest_Path(G,W,S){
    Topological_Sort(G) to get <v1,v2,....,vn>
    Initialize_Single_Source(G,S);
    for i = 1 to n {
        for each v ∈ adj[Vi]{
            Relax(u,v,w); 
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Bellman-Ford \n";
    Bellman-Ford(G,W,S);
    
    std::cout << "DAG find SP \n";
    DAG_Shorest_Path(G,W,S);
    return 0;
}
