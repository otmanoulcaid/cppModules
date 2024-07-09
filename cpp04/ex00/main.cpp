# include "Cat.hpp"
# include "WrongCat.hpp"
# include "Dog.hpp"


int main()
{

    const Animal* meta = new Animal();
    const Dog* j = new Dog();
    const Animal* i = new Cat();
    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    // std::cout << "--------------------------------------------" << std::endl;
    // metaWrong->makeSound();
    // std::cout << "--------------------------------------------" << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    return 0;
}