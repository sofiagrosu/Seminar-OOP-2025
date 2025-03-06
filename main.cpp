#include <iostream>
class Dog {
public:
  bool eat() {
    std::cout<<"Dog is eating"<<std::endl;
    return true;
  }
  int get_age() {
    return age;
  }
  void set_age(int a) {
    age=a;
  }
private:
    int age;

};
int main(){
  Dog dog1=Dog();
  dog1.eat();
  dog1.set_age(10);
  std::cout<<dog1.get_age();

  return 0;
  }


