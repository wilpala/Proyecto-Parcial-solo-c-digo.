/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;


int number_letters() {
    int l;
    cout<<"¿Cuantas letras?"<<endl<<endl;
    cin>>l;
    return l;
}

int l = number_letters();

vector<char> fill_vector_up() {
    vector <char> a;
    for(int i=0;i< l;i++) {
    
       char b;
       cin>>b;
       cout<<endl;
       a.push_back(b);
       
}
    return a;
}

void hyphen(){
    for(int i=0;i<l;i++){
        cout<<'_'<<'\t';
    }
}



int main(){
    
    vector <char> a = fill_vector_up();
    
    hyphen();

    
    vector <char> p;
    for(int i=0;i<l;i++){
        p.push_back('_');
    }
    for(int i=0;i<l;i++) {
        char c;
        cin>>c;
        int j=1;
        

    for(int i=0;i<l;i++){
        if((a[i]==c)){
            p[i]=c;
        }
    }
    for(int t=0;t<l;t++)
      cout<<p[t]<<'\t';
    j=j+i;
    cout<<"Intento numero: "<<j<<endl;
    
    }

    return 0;
}