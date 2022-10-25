#pragma once
#include<iostream>
#include"MyInterface.h"
using namespace std;

class Animal : public IAnimal // ðåàëèçàöèÿ èíòåðôåñà
{
protected:
	string name;
	double kg;
	string continent;
public:
	Animal() = default;
	Animal(string n, double k, string cont)
	{
		name = n;
		kg = k;
		continent = cont;
	}
	virtual void Print()
	{
		cout << "Name: " << name << endl;
		cout << "KG: " << kg << endl;
		cout << "Continent: " << continent << endl;
	}
	//virtual void Eat() = 0;
	//virtual void Move() = 0;	
};

class Parrot : public Animal, public IFly // íàñëåäîâàíèå 
{
public:
	Parrot() = default;
	Parrot(string n, double k, string cont) :Animal(n, k, cont) {}

	// ----- ðåàëèçàöèÿ ÈÍÒÅÐÔÅÉÑÀ IANIMAL !!!

	virtual void Eat()
	{
		cout << "Parrot eats: cabbage, carrot, cucumber, tomatoes, beet, feed = 2 tea spoon per day\n";
	}
	virtual void Move()
	{
		cout << "Parrot moves by 3km per hour\n";
	}
	// ----- ðåàëèçàöèÿ ÈÍÒÅÐÔÅÉÑÀ IFLY !!!
	virtual void Fly()
	{
		cout << "Parrot fly by 120km per hour\n";
	}

};

class Cat : public Animal
{
public:
	Cat() = default;
	Cat(string n, double k, string cont) :Animal(n, k, cont) {}
	virtual void Eat()
	{
		cout << "Cat eats: meat, fish, dairy products, porridges and cereals = 12g per 1kg\n";
	}
	virtual void Move()
	{
		cout << "Cat moves by 48km per hour\n";
	}
};

class Dog : public Animal
{
public:
	Dog() = default;
	Dog(string n, double k, string cont) :Animal(n, k, cont) {}
	virtual void Eat()
	{
		cout << "Dog eats: meat, fish, porridges and cereals = 3,5% from its mass\n";
	}
	virtual void Move()
	{
		cout << "Dog moves by 38km per hour\n";
	}
};

class Penguin : public Animal, public ISwim
{
public:
	Penguin() = default;
	Penguin(string n, double k, string cont) :Animal(n, k, cont) {}
	virtual void Eat()
	{
		cout << "Penguin eats: fish 800g per day\n";
	}
	virtual void Move()
	{
		cout << "Penguin moves by 6km per hour\n";
	}
	virtual void Swim()
	{
		cout << "Penguin swim by 36km per hour\n";
	}
};

class Dolpin : public Animal, public ISwim
{
public:
	Dolpin() = default;
	Dolpin(string n, double k, string cont) :Animal(n, k, cont) {}
	virtual void Eat()
	{
		cout << "Dolpin eats: fish 15kg per day\n";
	}
	virtual void Move()
	{
		cout << "Dolpin cant move\n";
	}
	virtual void Swim()
	{
		cout << "Dolpin swim by 60km per hour\n";
	}
};
