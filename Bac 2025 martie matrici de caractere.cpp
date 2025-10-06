using namespace std;
#include <iostream>
#include <cstring>

int main()
{
    char s[21];
    char A[101][21];
    int n;
    int kvoc=0;
    int ok=0;
    cin>>n;
    cin.get (); /// cin.ignore ( );
    for (int i=0;i<n;i+=1){
        cin.getline (A[i],20); ///
      ///  cin>>A[i];

    }
    for (int i=0;i<strlen(A[n-1]);i+=1){
        if (strchr("aeiou",A[n-1][i])!=0){
            kvoc++;
        }

    }
    int voc;
    for (int i=0;i<n;i++){
        voc=0;
        for (int j=0;j<strlen(A[i]);j+=1){
        if (strchr("aeiou",A[i][j])!=0){
            voc++;
        }
        }
        if (kvoc==voc && strcmp (A[n-1],A[i])!=0){
            cout<<A[i]<<" ";
            ok=1;
        }

    }
    if (ok==0){
        cout<<"nu exista";
    }




    return 0;
}
