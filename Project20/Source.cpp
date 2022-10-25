#include"Animal.h"
using namespace std;

int main()
{
	Animal* ptr = new Parrot("Blue", 2, "RIO");
	ptr->Eat();
	ptr->Move();
	Parrot* p = static_cast<Parrot*>(ptr);
	p->Fly();
	p->Print();
	delete ptr;
	system("pause");
	system("cls");
	ptr = new Cat("Barsik", 4, "Home");
	ptr->Eat();
	ptr->Move();
	Cat* p1 = static_cast<Cat*>(ptr);
	p1->Print();
	delete ptr;
	system("pause");
	system("cls");
	ptr = new Dog("Sharik", 35, "Home");
	ptr->Eat();
	ptr->Move();
	Dog* p2 = static_cast<Dog*>(ptr);
	p2->Print();
	delete ptr;
	system("pause");
	system("cls");
	ptr = new Penguin("Skiper", 35, "Antartic");
	ptr->Eat();
	ptr->Move();
	Penguin* p3 = static_cast<Penguin*>(ptr);
	p3->Swim();
	p3->Print();
	delete ptr;
	system("pause");
	system("cls");
	ptr = new Dolpin("Wave", 200, "Ocean");
	ptr->Eat();
	ptr->Move();
	Dolpin* p4 = static_cast<Dolpin*>(ptr);
	p4->Swim();
	p4->Print();
	delete ptr;
	system("pause");
	system("cls");
}