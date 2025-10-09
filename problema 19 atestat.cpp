#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("atestat.in");
    ofstream fout("atestat.out");
    char s[51],sep[]={" "},copie[51];
    cin.getline(s,50);
    strcpy(copie,s);
    int lung=strlen(copie),lungg=strlen(s);
    for (int i=0;i<lung;i+=1){
        if (copie[i]>'Z'){
            copie[i]-=32;
        }
        cout<<copie[i];
    }
    cout<<endl;
    for (int i=0;i<lungg;i+=1){
        cout<<s[i];
    }
    cout<<endl;
    char *p;
    p=strtok(s,sep);
    while (p!=NULL){
        int lungime=strlen(p);
        fout<<p<<endl;
        int i;
        int sters=lungime;
        for (i=0;i<lungime;i++){
            p[i]=' ';
            p[sters-1]=' ';
            sters--;
            fout<<p<<endl;
        }

        p=strtok(NULL,sep);

    }




    return 0;
}
