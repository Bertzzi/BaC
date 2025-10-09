#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("atestat.in");
    ofstream fout("atestat.out");
    char s[101],sep[]= {" "},copie[101];
    cin.getline(s,50);
    strcpy(copie,s);
    int lung=strlen(copie),lungg=strlen(s);
    for (int i=0; i<lung; i+=1)
    {
        if (copie[i]>'Z')
        {
            copie[i]-=32;
        }
        cout<<copie[i];
    }
    cout<<endl;
    for (int i=0; i<lungg; i+=1)
    {

        if (s[i]!=' ')cout<<s[i];
    }
    cout<<endl;
    char *p;
    char siranagrama[101]= {},primul[101];
    int primu=1;
    int lungime1,lungime2;
    p=strtok(s,sep);
    bool anagrame;
    int primuprimu=1;
    while (p!=NULL)
    {
        if (primuprimu==1){
                primuprimu=0;
                }
        anagrame=1;
        int len=strlen(p);
        if (primu==1)
        {
            strcpy(primul,p);
            primu=0;
        }
        else
        {
            primu=1;
            lungime2=strlen(p);
            if (lungime1==lungime2)
            {
                for (int i=0; i<lungime2; i+=1)
                {
                    if (strchr(primul,p[i])==0)
                    {
                        anagrame=0;
                    }
                }
            }
            if (anagrame==1)
        {
            cout<<primul<<" "<<p<<endl;
        }

    }




    p=strtok(NULL,sep);
    }




    return 0;
}
