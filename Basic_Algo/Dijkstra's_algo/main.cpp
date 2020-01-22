//
//  main.cpp
//  Dijkstra's_algo
//
//  Created by Sun on 2020/1/22.
//  Copyright © 2020 Sun. All rights reserved.
//
// Single-Source Shortest Path (Dijkstra's Algorithm)

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

// Input: G,W,S // G=(V,E) , W = Edge weight, S = Source vertex
void Dijkstra(G,W,S){
    //initial
    Initialize_Single_Source(G,S);
    S = {}; // S為全空集合，收集已確定距離的點
    Let Q = G.V be a minimum priority queue of vertices
    //Extract-min + Relax(Decrease-key)
    While (Q != {}){ //當Q(queue)不為空時
        u = Extract-Min(Q); //從 Q 中取出key值最小者 （可用array or heap）
        S = S ∪ {u}; //將最小值u 取出後放入 S集合
        
        for each v ∈ G.adj[u]{ //與u相鄰的邊
            Relax(u,v,w); //decrease-key
        }
    }
}


int main(int argc, const char * argv[]) {
    std::cout << "Dijkstra's Algorithm \n";
    Dijkstra(G,w,s);
    return 0;
}
