#include<iostream>
using namespace std;


int main(){
    while(true){
    int my1;  int my2;
    int mx1;  int mx2;
    cout<<"Enter the sizes of the first matrix"<<'\n';
    cin>>my1;
    cout<<" ";
    cin>>mx1;
    cout<<"Enter the sizes of the first matrix"<<'\n';
    cin>>my2;
    cout<<" ";
    cin>>mx2;
    if(mx1==my2){
        double m1[my1][mx1];
        double m2[my2][mx2];
        double finalmatrix[my1][mx2];


        for(int i=0;i<my1;i++){

            for(int j=0;j<mx1;j++){
                cout<<"For the first Matrix enter the entry "<<i<<","<<j<<'\n';
                cin>>m1[i][j];
                cout<<'\n';
            }
        }

        for(int i=0;i<my2;i++){

            for(int j=0;j<mx2;j++){
                cout<<"For the second Matrix enter the entry "<<i<<","<<j<<'\n';
                cin>>m2[i][j];
                cout<<'\n';
            }
        }

        for(int i=0;i<my1;i++){
            for(int j=0;j<mx2;j++){
                double sum=0;
                for(int w=0;w<mx1;w++){

                    sum=sum+(m1[i][w]*m2[w][j]);
                }
                finalmatrix[i][j]=sum;
                sum=0;
            }
        }


        cout<<"Your Matrix is:"<<'\n';

        for(int i=0;i<my1;i++){
            for(int j=0;j<mx2;j++){

                cout<< finalmatrix[i][j]<<" ";

            }
            cout<<'\n';
        }


        break;
    }

    else{cout<<"Enter Valid Parameters"<<'\n';}


    }
}
