#include<iostream>
#include<vector>
using namespace std; 
void insertionSort(int n, vector<int> &arr){
    // Write your code here.
    for(int i=1; i<n ;i++){
        int key= arr[i];
        int j= i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int main(){
    vector<int> arr = {55,22,11,44,33};
    int n = 5;
    insertionSort(n ,arr);
    // for(auto ele:arr){
    //     cout<<ele<<" ";
    // }
    cout<<arr<<endl;
    return 0;

}
