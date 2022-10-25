#pragma once

struct IAnimal // èíòåðôåéñ â Ñ++ !!!
{
	virtual void Eat() = 0;
	virtual void Move() = 0;
};
//Ïðèíöèï ðàçäåëåíèÿ èíòåðôåéñà(Interface segregation principle) SOLID
struct IFly
{
	virtual void Fly() = 0;
};
struct ISwim
{
	virtual void Swim() = 0;
};
