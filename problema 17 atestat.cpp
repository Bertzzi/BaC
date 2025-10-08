#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("atestat.in");
    ofstream fout("atestat.out");
    char s[71],litera,copie;
    int nrcuv=0;
    char *p;
    cin>>litera;
    cin.getline (s,71);
    int l=strlen(s);

    p=strtok(s," ");
    while (p!=NULL){
        nrcuv++;
        if (p[0]=='M'){
            p[0]=litera;
        }
        cout<<p<<" ";
        p=strtok(NULL," ");
    }
    cout<<endl<<nrcuv;

    return 0;
}
