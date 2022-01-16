#include<iostream>

using namespace std;

struct Cmplex1{
    int real;
    int img;
};
int main(){
    struct Cmplex1 r;
    r.real=10;
    r.img=20;
    printf("%d ",r.real);
    printf("%d ",r.img);    

    
    return 0;

}