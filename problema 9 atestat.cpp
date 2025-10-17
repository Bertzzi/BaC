#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    ofstream fout("date.out");
    int m[21][21],k,n;
    cin>>n;
    cin>>k;
    for (int i=1;i<=n;i++){
      for (int j=1;j<=n;j++){
        cin>>m[i][j];
        cout<<m[i][j]<<' ';
      }
      cout<<'\n';
    }
    for (int i=1;i<=n;i++){
      for (int j=1;j<=n;j++){
        if (i+j==n+1){
          m[i][j]=k;
        }
        cout<<m[i][j]<<' ';
      }
      cout<<'\n';
    }
    for (int i=1;i<=n;i++){
      for (int j=1;j<=n;j++){
        int prim=1;
        for (int d=2;d*d<=m[i][j];d++){
          if (m[i][j]%d==0){
            prim=0;
          }
        }
        if (prim==1){
          fout<<m[i][j]<<' ';
        }
      }
    }    
    
    
    return 0;
}
