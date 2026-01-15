////////// SUBSET OF A SET////////////////////////////////////////////
// #include<iostream>
// #include<string>
// using namespace std;
// void printsubset(string ans , string original){
//     if(original == ""){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch = original[0];
//     printsubset(ans,original.substr(1));               // print 
//     printsubset(ans+ch,original.substr(1));
// }
// int main() {
//     string str ="abc";
//     printsubset("",str);
// return 0;
// }
///////////////////////////////////////////////////////////////////////////////
// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;
// void storesubset(string ans , string original,vector<string>& v){
//     if(original == ""){
//        v.push_back(ans);
//         return;
//     }
//     char ch = original[0];
//     storesubset(ans,original.substr(1),v);               // stroed
//     storesubset(ans+ch,original.substr(1),v);
// }
// int main() {
//     string str ="abc";
//     vector<string> v;
//     storesubset("",str,v);
//     for(string ele : v){
//         cout<<ele<<endl;
//     }
// return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////// subset of array/////////
// #include<iostream>
// #include<vector>
// using namespace std;
// void printsubset(int arr[],int n,int idx,vector<int> ans){
//     if(idx == n){
//         for(int i=0;i<ans.size();i++){
//             cout<<ans[i]<<" ";
//         }
//         cout<<endl;
//         return;
//     }
//     printsubset(arr,n,idx+1,ans);
//     ans.push_back(arr[idx]);
//     printsubset(arr,n,idx+1,ans);
// }
// int main() {
//     int arr[] = {1,2,3};
//     int n =sizeof(arr) / sizeof(arr[0]);
//     vector<int > v;
//     printsubset(arr,n,0,v);
// return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////subset duplicate/////////////////////
// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;
// void storesubset(string ans , string original,vector<string>& v,bool flag){
//     if(original == ""){
//        v.push_back(ans);
//         return;
//     }
//     char ch = original[0];
//     if(original.length() == 1){
//         if(flag = true )   storesubset(ans+ch,original.substr(1),v,true);
//         storesubset(ans,original.substr(1),v,true);
//         return ;
//     }
//     char dh = original[1];
//     if(ch == dh){  
//     if(flag == true )  storesubset(ans+ch,original.substr(1),v,true);               // stroed
//     storesubset(ans,original.substr(1),v,false);
//     }
//     else {
//         if(flag == true)  storesubset(ans+ch,original.substr(1),v,true);               // stroed
//     storesubset(ans,original.substr(1),v,true);
//     }
// }
// int main() {
//     string str ="aaabb";
//     vector<string> v;
//     storesubset("",str,v,true);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<endl;
//     }
// return 0;
// } 

