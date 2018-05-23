#include <iostream>

using namespace std;

int n,f[100],a[100],b[100],c[100],r=0,d=0;

int main(){
    int i=0,j=0,k=0,temp;
    cin>>n;
    do{
        scanf("%d%c", &a[r], &temp);
        r++; 
        }while(temp!='\n');
    for(i=0;i<r;i++){//sorting
        for(j=i+1;j<r;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    b[0]=n;
    c[0]=n;
    for(i=0,j=1;i<r;i++){
        if(a[i]>n){
            b[j]=a[i];
            j++;
        }    
    }
    for(i=r-1,k=1;i>=0;i--){
        if(a[i]<n){    
            b[j]=a[i];
            j++;
            c[k]=a[i];
            k++;
        }    
    }
    for(i=0;i<r;i++){
        if(a[i]>n){
            c[k]=a[i];
            k++;
        }
    }
    for(i=0;i<r+1;i++){
        cout<<b[i]<<" ";
        if(i!=r){
            if(b[i+1]-b[i]>0){
                d+=(b[i+1]-b[i]);
            }
            else{
                d+=(b[i]-b[i+1]);
            }
        }
    }
    cout<<endl;
    for(i=0;i<r+1;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl<<d;
}
