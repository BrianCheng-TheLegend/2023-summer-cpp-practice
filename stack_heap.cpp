#include<iostream>
#include<string>

struct Vector3{
    float x,y,z;
    Vector3()
    :x(10),y(11),z(12){}
};

int main(){
    int value =5;
    int array[5];
    for(int i=1;i<6;i++){
        array[i-1]=i;
    }
    Vector3 vector;

    int* hvalue=new int;
    *hvalue=5;
    int* harray =new int[5];
    for(int i=1;i<6;i++){
        harray[i-1]=i;
    }
    Vector3* hvector=new Vector3();

    delete hvalue;
    delete[] harray;
    delete hvector;

    system("pause");
    
}