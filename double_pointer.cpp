#include<iostream>
void display(char** output){
    printf("%s",*output);
    *output="this is another test";
    printf("%s",*output);
    *output="This is a test\n";
    printf("%s",*output);
    *output="aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    printf("%s",*output);
    *output="This is a test\n";
    printf("%s",*output);
}
int main(){

    char* ptr="This is a test\n";
    display(&ptr);
    printf("%s",ptr);
    return 0;
}