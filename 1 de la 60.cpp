using namespace std;
#include <iostream>
#include <fstream>
int main()
{
    struct elev{
        char nume[25];
        int medie;
        short varsta;
        int absente;
    };
    elev e[32];
    int n;
    cin>>n;
    for (int i=0;i<n;i+=1){
        cin>>e[i].nume>>e[i].medie>>e[i].varsta>>e[i].absente;
        cout<<e[i].nume<<' '<<e[i].medie<<' '<<e[i].varsta<<' '<<e[i].absente;
        cout<<'\n';
    }

    return 0;
}
