#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("atestat.in");
    ofstream fout("atestat.out");
    char s[101],litera,copie;
    char *p;
    cin.getline (s,101);
    int l=strlen(s),cifre=0;
    for (int i=0;i<l;i++){
        if (s[i]>'Z'){
            s[i]-=32;
        }
        cout<<s[i];
        if (strchr("1234567890",s[i])!=0){
            cifre++;
        }
    }
    cout<<endl;
    p=strtok(s," ");
    while (p!=NULL){
        cout<<p<<endl;
        p=strtok(NULL," ");
    }
    cout<<cifre;


    return 0;
}
