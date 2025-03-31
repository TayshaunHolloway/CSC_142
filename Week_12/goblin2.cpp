#include <iostream>

int main() {
int i;
int charisma = 0;
srand (time(NULL));

//for (i=0;  i<=20; i++){
charisma = rand() % 20 + 1;
std::cout << charisma << std::endl;



if ( charisma >= 10)
    std::cout << "Goblin likes you. Really likes you.";
    else
    std::cout << "Goblin doesn't like you. Really hates you.";
}