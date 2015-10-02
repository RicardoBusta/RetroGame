#include <iostream>
#include <vector>

#include "SFML/Window.hpp"

int main(int argc, char * argv[])
{
//  if (SDL_Init(SDL_INIT_VIDEO) != 0){
//    std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
//    return 1;
//  }

  sf::Window window(sf::VideoMode(800, 600), "My window");

  std::vector<int> vec = {1,2,3};

  for( auto x : vec){
    std::cout << x;
  }
  std::cout << " Hello World!" << std::endl;

  return 0;
}

