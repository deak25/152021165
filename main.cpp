#include <iostream>
 
using namespace std;
 
int main(){
    int jumlah;
    int a[jumlah][jumlah];
    int b[jumlah][jumlah];
    int c[jumlah][jumlah];
   
    cout<<"=== Program Data X dan y Matriks ==="<<endl;
    cout<<"Masukkan Matriks : ";cin>>jumlah;
    cout<<endl;
   
    cout<<"Matriks 1"<<endl;
    for(int i=0;i<jumlah;i++){
    for(int j=0;j<jumlah;j++){
        cout<<"Angka ["<<i<<"] ["<<j<<"] : ";cin>>a[i][j];
    }
        cout<<endl;
    }
   
    cout<<"Matriks 2"<<endl;
    for(int i=0;i<jumlah;i++){
    for(int j=0;j<jumlah;j++){
       cout<<"Angka ["<<i<<"] ["<<j<<"] : ";cin>>b[i][j];
    }
        cout<<endl;
    }
   
    cout<<"Matriks 1 "<<endl;
    for(int i=0;i<jumlah;i++){
    for(int j=0;j<jumlah;j++){
        cout<<a[i][j]<<" ";
    }
        cout<<endl;
    }
   
    cout<<"Matriks 2 "<<endl;
    for(int i=0;i<jumlah;i++){
    for(int j=0;j<jumlah;j++){
        cout<<b[i][j]<<" ";
    }
        cout<<endl;
    }
   
    cout<<" Hasil Perkalian x dan y matriks : "<<endl;
    for(int i=0;i<jumlah;i++){
    for(int j=0;j<jumlah;j++){
    c[i][j]=a[i][j]*b[i][j];
        cout<<c[i][j]<<" ";
    }
        cout<<endl;
    }
}
