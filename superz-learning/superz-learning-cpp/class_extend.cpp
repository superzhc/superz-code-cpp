//
// Created by superz on 2023/4/28.
//
class Animal {
public:

};

class Pet {

};

class Dog : public Animal, public Pet {
public:
    Dog operator+(const Dog &another);
};

Dog Dog::operator+(const Dog &another) {
    return *this;
}
