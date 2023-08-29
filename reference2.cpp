#include<iostream>
#define LOG(x) std::cout<<x<<std::endl;

void Increment(int value){
    value++;
    LOG(value);
}

void Increment2(int *value){
    (*value)++;
    LOG(*value);
}

void Increment3(int &value){
    value++;
    LOG(value);
}

int main(){
    int a=5;
    //the & in this case is address of a
    //int*b=&a;
    // the & below is part of the type
    int& ref=a;
    ref=2;
    LOG(a);
    LOG(ref); 
    Increment(a);
    LOG(a);

    Increment2(&a);
    LOG(a);

    Increment3(a);
    LOG(a);

}