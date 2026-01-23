#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    //----------------------------------------------------------------------
    // brute force techinque to solve this questions
    int count0 =0;
    int count1 = 0;
    int count2 =0;
    for(int i =0;i<n;i++){
        if(arr[i]==0){
            count0++;
        }
        else if(arr[i]==1){
            count1++;
        }
        else{
            count2++;
        }
    }
    int ind =0;
    for(int i =0;i<n;i++){
        arr[ind++]=0;
    }
    for(int i=0;i<n;i++){
        arr[ind++]= 1;
    }
    for(int i =0;i<n;i++){
        arr[ind++]=2;
    }
    for(int i =0;i<n;i++){
        cout<<arr[i];
    }
//---------------------------------------------------------------------------
//optimal approach to sort in 0 and 1 and 2 form  
//ducth national flag algorithm
int low = 0;
int mid = 0;
int high = n-1;
while(mid<=high){
    if(arr[mid]==0){
        swap(arr[low],arr[mid]);
        low++;
        mid++;
    }
    else if(arr[mid]==1){
        mid++;
    }
    else{
        swap(arr[mid],arr[high]);
        high--;
    }
}
// time complexity is O(n) and space complexity  is O(1). why because each index swap only onces  when 
//


    return 0;

}
