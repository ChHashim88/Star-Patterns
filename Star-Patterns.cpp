#include<iostream>
using namespace std;



int main(){

cout<<"Left Triangle..... "<<endl;  
cout<<endl; 
//Left side triangle
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
             cout<<"*";
        }
        cout<<endl;
    }
cout<<endl;   

cout<<"Left Down Triangle.... "<<endl;
cout<<endl;   
//RIGHT Side TRIANGLE
    for(int i=0;i<=5;i++){
        for(int j=5;j>i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
cout<<endl;

cout<<"Right Triangle .... "<<endl; 
cout<<endl; 
//Right side triangle
    for(int i=1;i<6;i++){
        for(int j=5;j>i;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
cout<<endl;

cout<<"Right Down Triangle .... "<<endl; 
cout<<endl; 
//Right side down Triangle
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=5;k>i;k--){
            cout<<"*";
        }
        cout<<endl;
    }
cout<<endl;

cout<<"Pyramid .... "<<endl; 
cout<<endl; 
//centered triangle
for(int i=1;i<=5;i++){
    for(int j=5;j>i;j--){
        cout<<" ";
    }
    for(int k=0;k<2*i-1;k++){
        cout<<"*";
    }
cout<<endl;
}
cout<<endl;

cout<<"Down Pyramid.... "<<endl; 
cout<<endl; 
//down center triangle
for(int i=0;i<5;i++){
    for(int j=0;j<i;j++){
        cout<<" ";
    }
    for(int k=0;k<9-2*i;k++){
        cout<<"*";
    }
    cout<<endl;
}
cout<<endl;

cout<<"Hollow Square .... "<<endl; 
cout<<endl; 
//Hollow square
for(int i=1;i<=7;i++){
    for(int j=1;j<=7;j++){
        
        if( i==1 || i==7 || j==1 ||j==7){
           cout<<"*";
        }
        else{
            cout<<" ";
        }
        }

    cout<<endl;
}
cout<<endl;

cout<<"Hollow Diamond .... "<<endl; 
cout<<endl; 
//Diamond
for(int i=1;i<=7;i++){
    for(int j=7;j>i;j--){
            cout<<" ";
        }

    for(int k=1;k<=2*i-1;k++){
        if(k==1 || k==2*i-1){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
       
        }
 cout<<endl; 
}
for(int i=6;i>=1;i--){
    for(int j=7;j>i;j--){
            cout<<" ";
        }

    for(int k=1;k<=2*i-1;k++){
        if(k==1 || k==2*i-1){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
       
        }
 cout<<endl; 
}
cout<<endl;
cout<<"Butterfly .... "<<endl;
cout<<endl; 
//Butterfly
for(int i=1;i<=4;i++){

    for(int j=0;j<i;j++){
        cout<<"*";
        }
    for(int y=4;y>i;y--){
        cout<<" ";
    }

     for(int k=0;k<i;k++){
        cout<<"*";
    }
cout<<endl;
}
for(int i=3;i>=1;i--){

    for(int j=0;j<i;j++){
        cout<<"*";
        }
    for(int y=4;y>i;y--){
        cout<<" ";
    }

     for(int k=0;k<i;k++){
        cout<<"*";
    }
   
cout<<endl;
}
cout<<endl;
//Cross
cout<<"Cross .... "<<endl;
cout<<endl; 
for(int i=6;i>=1;i--){
    for(int j=6;j>i;j--){
        cout<<" ";
    }
    for(int k=1;k<=2*i-1;k++){
        if(k==1 || k==2*i-1){
           cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}

for(int i=2;i<=6;i++){
    for(int j=6;j>i;j--){
        cout<<" ";
    }
    for(int k=1;k<=2*i-1;k++){
        if(k==1 || k==2*i-1){
           cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}


    return 0;
}