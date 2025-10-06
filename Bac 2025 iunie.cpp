S III.2
  using namespace std;
#include <iostream>
#include <cstring>

int main()
{
    char s[201], aux[201],raspuns[201]={};
    char *p;
    int poz;
    bool ok=0;
    cin.getline (s,200);
    for ( p=strtok(s," "); p!=NULL; p=strtok(NULL," ") )
    {
        strcpy(aux,p);
        if (strlen(aux)%2==0)
        {
            ok=1;
            int poz=strlen(aux)/2;
            char stanga[201],dreapta[201];
            strcpy(stanga,aux);
            stanga[poz]='\0';
            strcpy(dreapta,aux+poz);
            strcat(dreapta,stanga);
            strcpy(aux,dreapta);

        }
      strcat(raspuns,aux);
      strcat(raspuns," ");
    }
    if (ok==0){
        cout<<"nu exista";
    }
    else{
        cout<<raspuns;
    }



    return 0;
}
