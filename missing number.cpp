#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    // int flag = 0;
    // for(int i =0;i<n;i++){
    //     for(int j =0;j<n-1;j++){ // brute force technique
    //         if(arr[j]==i){
    //             flag = 1;
    //             break;
    //         }
    //     }
    //     if(flag ==0){
    //         cout<<i;
    //     }
    // }
    // return 0;
//-------------------------------------------------------------------
    // hashing technique to find missing number better solution

//     int freq[n+1] ={0};
//     for(int i =0;i<n;i++){
//         freq[arr[i]]=1;
//     }
//     for(int i = 1;i<n;i++){
//         if(freq[i]==0){
//             cout<<i;
//         }
//     }
// return 0;


//---------------------------------------------------------------

// missing number using optimized solution. math formula. 
// int sum1 = n*(n+1)/2;
// int sum =0;  
// for(int i =0;i<n-1;i++){
//     sum = sum +arr[i];
// }
// cout<<sum1-sum;
// return 0;
// }

// -------------------------------------------------------------------
// missing number using optimized solution using xor

// a^a =0
// a^0=a;
int xor1 =0;
int xor2=0;
for(int i =0;i<n-1;i++){
    xor1 = xor1 ^arr[i];
    xor2 = xor2^(i+1);
}
xor2 = xor2^n;
cout<< (xor2 - xor1);   // this is the optimized approach tc =>O(n).
}
