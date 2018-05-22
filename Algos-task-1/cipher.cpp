#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int n,k;

char* encrypt(char t[]){
    int i=0,val=0;
    for(i=0;i<strlen(t);i++){
        if(isalpha(t[i])){
            if(islower(t[i])){
                val=int(t[i])+k;
                if(val>122){
                    val=val-122+96;
                }
                t[i]=char(val);
            }
            else{
                val=int(t[i])+k;
                if(val>90){
                    val=val-90+64;
                }
                t[i]=char(val);
            }
        }
    }
    return t;
}

char* decrypt(char t[]){
    int i=0,val=0;
    for(i=0;i<strlen(t);i++){
        if(isalpha(t[i])){
            if(islower(t[i])){
                val=int(t[i])-k;
                if(val<97){
                    val=122-(96-val);
                }
                t[i]=char(val);
            }
            else{
                val=int(t[i])+k;
                if(val<65){
                    val=90-(64-val);
                }
                t[i]=char(val);
            }
        }
    }
    return t;
}

int main(){
	int i=0;
	char s[100][100];
	cin>>n>>k;
	for(i=0;i<n;i++){
    	cin>>s[i];
    	cout<<encrypt(s[i])<<endl;
	}
	for(i=0;i<n;i++){
    	cin>>s[i];
    	cout<<decrypt(s[i])<<endl;
	}
	
}