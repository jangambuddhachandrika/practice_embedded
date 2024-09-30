#include <iostream>
#include <queue>
#include <string>

// Base class for animals
class Animal {
public:
   std::string name;
   int order;  // To track the arrival time/order

   Animal(std::string name, int order) : name(name), order(order) {}

   virtual std::string getType() const = 0;  // To differentiate between dog and cat
};

class Dog : public Animal {
public:
   Dog(std::string name, int order) : Animal(name, order) {}

   std::string getType() const override {
       return "Dog";
   }
};

class Cat : public Animal {
public:
   Cat(std::string name, int order) : Animal(name, order) {}

   std::string getType() const override {
       return "Cat";
   }
};

class AnimalShelter {
private:
   std::queue<Dog> dogQueue;
   std::queue<Cat> catQueue;
   int order;  // Global counter to track the order of animals

public:
   AnimalShelter() : order(0) {}

   // Enqueue a dog
   void enqueueDog(std::string name) {
       Dog dog(name, order++);
       dogQueue.push(dog);
   }

   // Enqueue a cat
   void enqueueCat(std::string name) {
       Cat cat(name, order++);
       catQueue.push(cat);
   }

   // Dequeue the oldest animal
   Animal* dequeueAny() {
       if (dogQueue.empty() && catQueue.empty()) {
           std::cout << "No animals in shelter." << std::endl;
           return nullptr;
       } else if (dogQueue.empty()) {
           return dequeueCat();
       } else if (catQueue.empty()) {
           return dequeueDog();
       }

       Dog oldestDog = dogQueue.front();
       Cat oldestCat = catQueue.front();

       if (oldestDog.order < oldestCat.order) {
           return dequeueDog();
       } else {
           return dequeueCat();
       }
   }

   // Dequeue the oldest dog
   Dog* dequeueDog() {
       if (dogQueue.empty()) {
           std::cout << "No dogs available." << std::endl;
           return nullptr;
       }
       Dog* dog = new Dog(dogQueue.front());
       dogQueue.pop();
       return dog;
   }

   // Dequeue the oldest cat
   Cat* dequeueCat() {
       if (catQueue.empty()) {
           std::cout << "No cats available." << std::endl;
           return nullptr;
       }
       Cat* cat = new Cat(catQueue.front());
       catQueue.pop();
       return cat;
   }
};

int main() {
   AnimalShelter shelter;

   shelter.enqueueDog("Rex");
   shelter.enqueueCat("Whiskers");
   shelter.enqueueDog("Buddy");
   shelter.enqueueCat("Mittens");

   Animal* animal = shelter.dequeueAny();
   if (animal) {
       std::cout << "Adopted: " << animal->getType() << " named " << animal->name << std::endl;
   }

   Dog* dog = shelter.dequeueDog();
   if (dog) {
       std::cout << "Adopted dog: " << dog->name << std::endl;
   }

   Cat* cat = shelter.dequeueCat();
   if (cat) {
       std::cout << "Adopted cat: " << cat->name << std::endl;
   }

   return 0;
}
