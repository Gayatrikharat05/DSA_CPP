#include<iostream>
#include<vector>
using namespace std;
void setmatrix(vector<vector<int>>& matrix,int m,int n){
    vector<int>row(m,0);
    vector<int>col(n,0);
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
     if(matrix[i][j]==0){
        row[i]=-1;
        col[j]=-1;
     }   
    }
}
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(row[i]==-1 || col[j]==-1){
            matrix[i][j]=0;
        }
    }
}
cout << "Matrix after setting zeros:" << endl;
for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        cout << matrix[i][j] << " ";
    }
    cout << endl;
}
}
int main(){
    int m,n;
    cout<<"Enter the value of M and n"<<endl;
    cout<<"m = ";
    cin>>m;
    cout<<"n = ";
    cin>>n;
    vector<vector<int>>matrix(m,vector<int>(n));
    cout<<"Enter the elements in matrix:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        cin>>matrix[i][j];
        }
    }
    cout<<"Here is your matrix:";
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}
setmatrix(matrix,m,n);
    return 0;
}