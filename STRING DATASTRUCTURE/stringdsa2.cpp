// BUILT IN FUNCTIONS IN STRING 

// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;

// int main() {
//     string str = " saurabh";
//     // cout<<str.size()<<" ";
//     // cout<<str.length()<<endl; 

//     // cout<<str<<endl;

//     // str.push_back('a');
//     // str.push_back('b');
//     // str.push_back('c');

//     // cout<<str<<endl;

//     // str.pop_back();
//     // str.pop_back();
//     // str.pop_back();

//     // cout<<str<<endl;


//     // //// plus(+)  operater in string

//     // string tr = " Anand";
//     // // str = str + tr;
//     // cout<<str<<endl;;
//     // str = tr + str;
//     // cout<<str<<endl;
  
//     // cout<<str<<endl;
//     // reverse(str.begin(),str.end());
//     string s = "abcdef";
//     cout<<s<<endl;
    
//     reverse(s.begin()+3,s.end()-1);
//     cout<<s<<endl;
// return 0;
// } 

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include<iostream>
// #include<string>
// #include<algorithm>

// using namespace std;

// int main() {
//     string s;
//     getline(cin,s);
//     int n = s.length();
//     reverse(s.begin() , s.begin()+ n/2 );
//     cout<<s<<endl;

// return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// substring 
// #include<iostream>
// #include<string>
// #include<limits>
// using namespace std;

// int main() {
//     // string str ="saurabh" ;
//     string str  ;

//     cout<<"Enter the string : "<<endl;
//     // cout<<str.substr(2)<<endl;

//     cout<<str.substr(2,2)<<endl;
//     // getline(cin,str); 
//     // int n = str.length();

//     // cout<<str.substr(n/2)<<endl;
// return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// to_string function

// #include<iostream>
// #include<string>
// using namespace std;     // IT IS CONVERT INTEGER VALUE TO STRING

// int main() {
//     int x = 123456;
//     string s = to_string(x);
//     cout<<s<<" ";
//     cout<<s.length()<<endl;

// return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////   //////////////

// #include<iostream>
// #include<string>
// using namespace std;

// int main() {

//     string s;
//     cin>>s;
//     int count =0;
//     int n= s.length();
//     for(int i=0;i<n;i++){
//         if(n==1) break;
//         if(n==2 && s[0] != s[1]){
//             count = 1;
//             break;
//         }
//         if(i==0){
//             if(s[i] != s[i+1])
//             count++;
//         }
//         else if(i==n-1){
//             if(s[i] != s[i-1])
//             count++;
//         }
//         else if(s[i] != s[i+1] && s[i] != s[i-1] ) 
//         count++;
//     }
//     cout<<count<<endl;

// return 0;
// }