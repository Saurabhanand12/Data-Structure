// ///////// ADJACENCY LIST
// #include <iostream>
// #include <vector>
// #include <list>
// using namespace std;
// vector<list<int>> graph;
// int v; // number of vertices

// void add_edge(int src, int dest, bool bi_dir = true) {
//     graph[src].push_back(dest);
//     if (bi_dir) {
//         graph[dest].push_back(src);
//     }
// }
// void display() {
//     for (int i = 0; i < graph.size(); i++) {
//         cout << i << " -> ";
//         for (auto ele : graph[i]) {
//             cout << ele << " , ";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     cin >> v;
//     graph.resize(v, list<int>());
//     int e;
//     cin >> e;
//     while (e--) {
//         int s, d;
//         cin >> s >> d;
//         add_edge(s, d);                ///added false in weidht case 
//     }
//     display();
//     return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////
/////////////// weidthed_adj_list////////////////
// #include <iostream>
// #include <vector>
// #include <list>
// using namespace std;
// vector<list<pair<int ,int>>> graph;
// int v; // number of vertices

// void add_edge(int src, int dest,int wt, bool bi_dir = true) {
//     graph[src].push_back({dest,wt});
//     if (bi_dir) {
//         graph[dest].push_back({src,wt});
//     }
// }
// void display() {
//     for (int i = 0; i < graph.size(); i++) {
//         cout << i << " -> ";
//         for (auto ele : graph[i]) {
//             cout<<"("<< ele.first<< " , "<<ele.second<<")";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     cin >> v;
//     graph.resize(v, list<pair<int,int>>());
//     int e;
//     cin >> e;
//     while (e--) {
//         int s, d,wt;
//         cin >> s >> d >> wt;
//         add_edge(s, d,wt);               
//     }
//     display();
//     return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////
///////ADJANCENCY _ MAP 
// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;
// vector<unordered_map<int ,int>> graph;
// int v; // number of vertices

// void add_edge(int src, int dest,int wt, bool bi_dir = true) {
//     graph[src][dest]= wt;
//     if (bi_dir) {
//         graph[dest][src]= wt;
//     }
// }
// void display() {
//     for (int i = 0; i < graph.size(); i++) {
//         cout << i << " -> ";
//         for (auto ele : graph[i]) {
//             cout<<"("<< ele.first<< " , "<<ele.second<<")";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     cin >> v;
//     graph.resize(v,unordered_map<int,int>());
//     int e;
//     cin >> e;
//     while (e--) {
//         int s, d,wt;
//         cin >> s >> d >> wt;
//         add_edge(s, d,wt);               
//     }
//     display();
//     return 0;
// }