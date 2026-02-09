//////////////leetcode 46 permutation 1
// #include<iostream>
// #include<string> 
// using namespace std;

// void permutation(string str,int i){
//     if(i == str.size()-1){
//         cout<<str<<endl;
//         return;
//     }

//     for(int idx=i;idx<str.size();idx++){
//         swap(str[idx],str[i]);
//         permutation(str,i+1);
//         swap(str[idx],str[i]);
//     }
// }

// int main() {
//     string str = "abc";
//     permutation(str,0);

// return 0;
// }



///////////////////////////////////////////////////////////////////////////////////////////////
//for avoid duplicate value use unoredered set  leetcode 47 permutation 2
#include<iostream>
#include<string> 
#include<unordered_set>
using namespace std;

void permutation(string str,int i){
    if(i == str.size()-1){
        cout<<str<<endl;
        return;
    }

    unordered_set<char> st;
    for(int idx=i;idx<str.size();idx++){
        if(st.count(str[idx])) continue;

        st.insert(str[idx]);
        swap(str[idx],str[i]);
        permutation(str,i+1);
        swap(str[idx],str[i]);
    }
}

int main() {
    string str = "aba";
    permutation(str,0);

return 0;
}