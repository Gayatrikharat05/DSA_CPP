#include<iostream>
#include<vector>
using namespace std;
vector<int>printunion(vector<int>&a,vector<int>&b){
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;
    vector<int> unionarr;
    while(i<n1&&j<n2){
        if(a[i]<b[j]){
            if(unionarr.size()==0 ||unionarr.back()!=a[i]){
                unionarr.push_back(a[i]);
            }
            i++;
        }
        else{
             
            if(unionarr.size()==0 ||unionarr.back()!=b[j]){
                unionarr.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<n1){
         if(unionarr.size()==0 ||unionarr.back()!=a[i]){
                unionarr.push_back(a[i]);
            }
            i++;
    }
  while(j<n2){
         if(unionarr.size()==0 ||unionarr.back()!=b[j]){
                unionarr.push_back(b[j]);
            }
            j++;
    }
    return unionarr;
}
int main(){
    vector<int>a={1,2,2,3,5};
    vector<int>b={3,4,5,6,7};
    vector<int>result=printunion(a,b);
   cout<<"Our Union Array is:";
   for(int val:result){
    cout<<val<<" ";
   }
    return 0;
}
