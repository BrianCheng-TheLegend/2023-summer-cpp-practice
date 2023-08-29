#include<iostream>


void printData(int size,char** data){
    for(int i=0;i<size;i++){
        std::cout<<data[i]<<std::endl;
    }
}


//char** argv
int main(int argc,char** argv){
    // for(int i=1;i<argc;i++){
    //     std::cout<<argv[i][i]<<std::endl;
    // }
    char* data[]={"Hello my name is Brian","hello you"};
    printData(2,data);
    

    return 0;
}