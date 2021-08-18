#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c,d,results;
    string userInput;
    cout<<"What do you want CI or SI : ";
    cin>>userInput;
    

    if (userInput == "CI"){
        cout<<"Principal : ";
        cin>>a;
cout<<"Time Period : ";
cin>>b;
cout<<"Rate of Interest : ";
cin>>c;
double x=(1+c/100);
d = a*x;
results = pow(d,x);
cout<<"The amount is : "<<results<<endl;
cout<<"The CI is : "<<results-a;

    }
    else if(userInput == "SI"){
        cout<<"Principal : ";
        cin>>a;
cout<<"Time Period : ";
cin>>b;
cout<<"Rate of Interest : ";
cin>>c;
results = (a*b*c)/100;
cout<<"The amount is : "<<results<<endl;
cout<<"The SI is : "<<results+a;
    }
    else{
cout<<"We cannot process. Sorry!";
    }
    return 0;
}