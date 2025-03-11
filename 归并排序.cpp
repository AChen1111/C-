#include <bits/stdc++.h>
using namespace std;
void merge(int a[],int low,int mid,int high){
    int n1 = mid - low +1;
    int n2 = high - (mid+1)+1;
    int L[n1];
    int R[n2];
    int i = 0,j =0;
    for(i=0;i<n1;i++){
        L[i]=a[low+i];
    }
    for(j=0;j<n2;j++){
        R[j]=a[mid+j+1];
    }
    i = 0,j = 0;
    int k = low;
    while(i<n1 && j<n2){
        if(L[i]<R[j]){
            a[k++] = L[i++];
        }
        else a[k++] = R[j++];
    }
    while(i<n1) a[k++] = L[i++];
    while(j<n2) a[k++] = R[j++];


}
void merge_sort(int a[],int low,int high){
    if(low>=high) return;
    int mid = low+(high - low)/2;
    merge_sort(a,low,mid);
    merge_sort(a,mid+1,high);
    merge(a,low,mid,high);
}

int main(){
    int n = 0;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int low,high;
    cin>>low>>high;
    cout<<endl;
    merge_sort(a,low,high);
    for(int i = low;i<=high;i++){
        cout<<a[i]<<" ";
    }
}