#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    ofstream fout("date.out");
    int A[21][21],k,n,m,contor=0,i,j,c;
    cin>>n>>m;
    for (int i=1;i<=n;i++){
      for (int j=1;j<=n;j++){
        cin>>A[i][j];
        cout<<A[i][j]<<' ';
      }
      cout<<'\n';
    }
    cin>>k;
    for ( i=1;i<=n;i++){
      contor=0;
      for ( j=1;j<=n;j++){
        if (A[i][j]==0){
         contor+=1;
        }
        
      }
      if (contor==k){
       cout<<i<<' '; 
      }
      else cout<<"Nu exista"<<' ';
      
      cout<<'\n';
    }
    cin>>c;
    for (int i=1;i<=n;i++){
      if (A[i][c]%2==1){
        fout<<A[i][c]<<' ';
      }
        
    }
  
    
    return 0;
}
