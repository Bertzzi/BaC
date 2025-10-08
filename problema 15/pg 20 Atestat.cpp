#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("atestat.in");
    ofstream fout("atestat.out");
    char s[251],kcon=0;
    int con=0;
    fin.getline(s,251);
    int l=strlen(s);
    for (int i=0;i<l;i+=1){
        if (s[i]>'Z'){
            s[i]-=32;
        }
        if (strchr ("aeiouAEIOU ",s[i])==0){
            con+=1;
        }
        cout<<s[i];
    }
    cout<<"\n";
    cout<<con<<endl;

    char *p=strtok(s," ");
    int nrcuv=0;
    while (p!=NULL){
         nrcuv+=1;
        p=strtok(NULL," ");
    }
    fout<<nrcuv;

    return 0;
}
