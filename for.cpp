#include<iostream>

int main(){
    int a=0;
    for(int i=0;i<10;){
        //i++;
        std::cout<<i++<<std::endl;
        a=i;
    }
    //std::cout<<a<<std::endl;
    std::cout<<"break"<<std::endl;
    for(int j=0;j<10;)
    {
        //++j;
        std::cout<<++j<<std::endl;
        a=j;
    }
    //std::cout<<a<<std::endl;
}