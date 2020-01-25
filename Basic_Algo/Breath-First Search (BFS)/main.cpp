//
//  main.cpp
//  Breath-First Search (BFS)
//
//  Created by Sun on 2020/1/25.
//  Copyright © 2020 Sun. All rights reserved.
//

#include <iostream>

void Breath_First_Search(G,S){
    //initial 
    for each vertex u ∈ G.V - {S}{ //除了Ｓ起點以外的所有點
        u.color = white; // white: 表示尚未走訪的點
        u.d = ∞ ;
        u.π = Nil;
    }
    // S起點之initial
    s.color = gray;
    s.d = 0;
    s.π = Nil;
    //執行BFS -> Enqueue, Dequeue
    Let Q be a new Queue;
    Enqueue(Q,S); //將Ｓ加入Queue中
    while (Q != {}) {
        u = Dequeue(Q); // 將u從Queue中取出
        for each v ∈ G.adj[u]{ //挑出與u相鄰的點
            if(v.color == white){ // white: 表示尚未走訪的點
                v.color = gray; // gray: v已走訪，但該鄰居尚未走訪
                v.d = v.d + 1;
                v.π = u;
                Euqueue(Q,V)
            }
            u.color = Black; // Black: u與其所有鄰居皆已走訪
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "BFS(Using Queue)";
    Breath_First_Search(G,S);
    return 0;
}
