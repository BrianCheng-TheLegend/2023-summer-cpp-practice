#include<iostream>

namespace pointerfunction{
    void swap(int n1,int n2){
        int temp;
        temp=n1;
        n1=n2;
        n2=temp;
    }
    void swap_with_reference(int &n1,int &n2){
        int temp;
        temp=n1;
        n1=n2;
        n2=temp;
    }
    void swap_pointer(int* n1,int* n2){
        int temp;
        temp=*n1;
        *n1=*n2;
        *n2=temp;
    }
    void test(){
        int a=1,b=2;
        std::cout<<"a="<<a<<std::endl;
        std::cout<<"b="<<b<<std::endl;
        swap(a,b);
        std::cout<<"after"<<std::endl;
        std::cout<<"a="<<a<<std::endl;
        std::cout<<"b="<<b<<std::endl;
    }
    void example1(){
        int a=1,b=2;
        std::cout<<"a="<<a<<std::endl;
        std::cout<<"b="<<b<<std::endl;
        swap_with_reference(a,b);
        std::cout<<"after"<<std::endl;
        std::cout<<"a="<<a<<std::endl;
        std::cout<<"b="<<b<<std::endl;
    }
    void example2(){
        int a=1,b=2;
        std::cout<<"a="<<a<<std::endl;
        std::cout<<"b="<<b<<std::endl;
        swap_pointer(&a,&b); 
        std::cout<<"after"<<std::endl;
        std::cout<<"a="<<a<<std::endl;
        std::cout<<"b="<<b<<std::endl;
    }
}

int main(){
    pointerfunction::test();
    system("pause");
}
