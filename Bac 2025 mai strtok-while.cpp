using namespace std;
#include <iostream>
#include <cstring>

int main()
{
    char s[101],raspuns[101]={};
    char *p;
    cin.getline(s,100);
    p=strtok(s," ");
    while (p!=NULL){
        strcat(raspuns,p);
        p=strtok(NULL," ");
        if (p!=NULL){
            strcat(raspuns, " - ");
        }
    }
    cout<<raspuns;



    return 0;
}
