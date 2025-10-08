#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("atestat.in");
    ofstream fout("atestat.out");
    char s[101],copie[101];

    int voc=0,nrcuv=0;
    cin.getline (s,100);
    strcpy(copie,s);
    int l=strlen(s);
    for (int i=0;i<l;i+=1){
        if (s[i]>'Z'){
            s[i]-=32;
        }
        cout<<s[i];
        if (strchr ("aeiouAEIOU",s[i])!=0){
            voc+=1;
        }
    }
    cout<<endl<<voc<<endl;
    char *p;
    p=strtok(copie, " ");
    while (p!=NULL){
        if (p[0]=='a'){
            nrcuv++;
        }
        p=strtok(NULL," ");
    }
    fout<<nrcuv;

    return 0;
}
