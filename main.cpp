#include<Windows.h>
#include<random>
std::random_device rd;
std::mt19937 gen(rd());
int random(int low, int high){
  std::uniform_int_distribution<> dist(low, high);
  return dist(gen);
}
int main(){
  POINT pt;
  while(true){
  GetCursorPos(&pt);
  SetCursorPos(pt.x+random(-2,2),pt.y+random(-2,2));
  Sleep(3);
  }
}
