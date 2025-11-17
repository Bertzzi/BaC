using namespace std;
#include <iostream>
#include <fstream>
#include <cmath>
#include <cstring>
int main()
{
    struct elev{
        char nota1;
        char nota2;
    }m;
    cin>>m.nota1>>m.nota2;
    int ok=1;

    /**
    C-E
    D-F
    E-G
    F-A
    G-B
    */
    if ((m.nota1=='F' && m.nota2=='A') || (m.nota1=='G' && m.nota2=='B') || (m.nota2-m.nota1==2)){
        cout<<"TERTA";
    }
    else cout <<"NU";
    return 0;
}
