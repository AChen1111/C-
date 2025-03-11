#include <iostream>
#include <cmath>
using namespace std;
double sroot(int &a){
    if(a<0){
        return -1;
    }
    else {
        return sqrt(a);
    }

}

double sroot(long long int &a){
    if(a<0){
        return -1;
    }
    else {
        return sqrt(a);
    }
}

double sroot(double &a){
    if(a<0){
        return -1;
    }
    else {
        return sqrt(a);
    }
}

int main(){
    int a;
    long long int b;
    double c;
    cin>>a>>b>>c;
    cout<<sroot(a)<<endl;
    cout<<sroot(b)<<endl;
    cout<<sroot(c)<<endl;
    
    return 0;
}