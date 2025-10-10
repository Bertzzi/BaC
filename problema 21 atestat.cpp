using namespace std;
#include <cstring>
#include <iostream>
#include <fstream>

int main()
{
    char s[101],copie[101];
    cin.getline (s,100);
    strcpy(copie,s);
    int ls=strlen(s),lc=strlen(copie);
    for (int i=0;i<ls;i++){
      if (s[i]<'a' && s[i]!=' '){
        s[i]+=32;
      }
      cout<<s[i];
    }
    cout<<'\n';
    for (int i=0;i<ls;i++){
      if (copie[i]!=' '){
        cout<<copie[i];
      }
    }
    cout<<endl;
    char *p;
    p=strtok(s," ");
    while (p!=0){
      int lung=strlen(p);
      char copiep[101],dreapta[51],stanga[51];
      strcpy(copiep,p);
      strcpy(stanga,p);
      stanga[lung/2]='\0';
      strcpy(dreapta,p+lung/2);
      if (strcmp(stanga,dreapta)==0){
        cout<<stanga<<dreapta<<endl; 
      }
      cout<<stanga<<" "<<dreapta<<endl;
      p=strtok(NULL," ");
    }
    

    return 0;
}
