#include<bits/stdc++.h>
using namespace std;

double f1(double x) { return x*x; }

void print(double (*f)(double), double start, double end, double interval){
    for(double i=start; i<=end; i+=interval){
        cout<<i<<": "<<(*f)(i)<<"\n";
    }
    cout<<"\n";
}

int main(){
    print(f1, 0, 10, .5);
}
