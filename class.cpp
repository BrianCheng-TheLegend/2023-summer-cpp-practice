#include<iostream>

#define LOG(x) std::cout<<x<<std::endl;
// #define struct class

void Move(int x,int y,int z);

// usually no diff from sturct 
// but since C++ has both struct and class ,C has only struct
// defaut of class is private and struct is poblic
class Player
{
public:
    int x,y;
    int speed;


    void Move(int xa,int ya){
        x+=xa*speed;
        y+=ya*speed;
    }
};

// //need to pass Player object if you write this outside the object
// void Move(Player& player,int xa,int ya){
//     player.x+=xa*player.speed;
//     player.y+=ya*player.speed;
// }

int main(){
    
    Player player;
    player.Move(1,2);
    

    std::cin.get();
}