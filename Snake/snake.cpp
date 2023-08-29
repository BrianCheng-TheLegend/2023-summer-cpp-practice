#include<iostream>
bool Ongoing;
const int width=20;
const int height=20;
int x,y,fruitx,fruity,score;
enum eDirecton{STOP=0,LEFT,RIGHT,UP,DOWN};
eDirecton dir;


void Setup(){
    Ongoing=true;
    dir = STOP;
    x=width/2;
    y=height/2;
    fruitx=rand()%width;
    fruitx=rand()%height;
    score = 0;

}

void Draw(){
    system("cls");
    for(int i=0;i<width;i++)
        std::cout<<"#";
    std::cout<<std::endl;

    for(int i=0;i<height;i++){
        for(int j=0;j<width;j++){
            if(j==0||j==width-1)
            {std::cout<<"#";}
            else
            {std::cout<<" ";}
        }
    }
    for(int i=0;i<width;i++)
        std::cout<<"#";
}
void Input(){

}

void Logic(){

}

int main(){
    Setup();
    while(Ongoing){
        Draw();
        Input();
        Logic();
    }
}