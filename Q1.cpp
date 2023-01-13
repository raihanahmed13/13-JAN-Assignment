#include<iostream>
using namespace std;

class rectangle{
    int length,breadth;
    public:
    rectangle(){
        length=0;
        breadth=0;
    }
    rectangle(int a, int b){
        length = a;
        breadth = b;
    }
    rectangle(int x){
        length=x;
        breadth=x;
        
    }
    int getArea(){
        return length*breadth;
    }

};


int main(){
    rectangle rec1;
    rectangle rec2(5,2);
    rectangle rec3(10);
    cout<<rec1.getArea()<<endl;
    cout<<rec2.getArea()<<endl;
    cout<<rec3.getArea();


}