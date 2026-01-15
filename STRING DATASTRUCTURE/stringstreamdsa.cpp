// #include<iostream>
// #include<string>
// #include<sstream>
// using namespace std;

// int main() {
//     string s = "Saurabh is a software engineer";        // they find the maximum word occur
//     stringstream ss(s);
//     string temp;

//     while(ss>>temp){
//         cout<<temp<<endl;
//     }

// return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////// //////////////////////
#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;

int main() {
    string s = "Saurabh is a software engineer. He is a honest person";
    stringstream ss(s);
    string temp;
    vector<string> v;
    while(ss>>temp){
       v.push_back(temp);
    }  

    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    // } 

    sort(v.begin(),v.end());
    int maxcount =1;
    int count = 1;
    for(int i=0;i<v.size();i++){
        if(v[i] == v[i-1]){
            count++;
        }
        else count =1;
        maxcount = max(maxcount,count);
    } 
    cout<<maxcount<<endl;
    
    count =1;
    for(int i=0;i<v.size();i++){
        if(v[i] == v[i-1]){
            count++;
        }
        else count =1;
        if(count == maxcount){
            cout<<v[i]<<" : "<<maxcount<<endl;
        }
    } 
return 0;
}