// ////Smallest value after replacing with sum of prime factors  2507
// class Solution {
// public:
//     bool isprime(int n){
//         if(n == 1) return false;
//         for(int i=2;i<=sqrt(n);i++){
//             if(n%i == 0) return false;
//         }
//         return true;
//     }
//     int smallestValue(int n) {
//         if(isprime(n)) return n;                        //TC = O(sqrt(n))   // Total
//         int sum =0;
//         for(int i=1;i<sqrt(n);i++){            
//             if(n % i ==0 && isprime(i)){    
//                 int m = n;                   // TC= O(logn)
//                 while(m%i==0){       
//                     sum +=i;
//                     m /=i;
//                 }
//             }
//         }
//          for(int i=sqrt(n);i>=1;i--){
//             if(n % i ==0 && isprime(n/i)){
//                 int m = n;
//                 while(m % (n/i)==0){
//                     sum += (n/i);
//                     m /= (n/i);
//                 }
//             }
//         }
//         if(sum == n) return n;
//         return smallestValue(sum);
//     }
// };
///////////////////////////////////////////////////////////////////////
/// COUNT PRIME 204/// 
// class Solution {
// public:
//     void fillseive(vector<bool>& seive){
//         int n = seive.size()-1;
//         for(int i=2;i<=sqrt(n);i++){
//             for(int j=i*2;j<=n;j+=i){
//                 seive[j] =0;
//             }
//         }
//     }
//     int countPrimes(int n) {          // USING SIEVE OF ERASTASTHE NESIS  
//         if(n <=2 ) return 0;
//         n = n-1;                             // TC=O(nloglogn)  ~ O(n)
//        int count =0;
//        vector<bool> seive(n+1,1);
//        fillseive(seive);
//        seive[0] = 0;
//        seive[1] = 0;
//        for(int i=2;i<=n;i++){
//         if(seive[i] == 1) count++;
//        } 
//        return count;
//     }
// };