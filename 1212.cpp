//Задание 1. Создать базовый класс «Домашнее животное» и производные классы «Собака», «Кошка», «Попугай».С помощью конструктора установить имя каждого животного
//и его характеристики.

#include <iostream>
using namespace std;

class IPet {
public:
	virtual void Name() = 0;
	virtual void Paws() = 0;
	virtual void Tail() = 0;
};

class Dog : public IPet {
public:
	virtual void Name() override {
		cout << "Dog name is Sharik." << endl;
	}
	virtual void Paws() override {
		cout << "Dog have four paws." << endl;
	}
	virtual void Tail() override {
		cout << "The dog has a tail in a ring." << endl << endl;
	}
};

class Cat : public IPet {
public:
	virtual void Name() override {
		cout << "Cat name is Snowflake." << endl;
	}
	virtual void Paws() override {
		cout << "Cat have four paws." << endl;
	}
	virtual void Tail() override {
		cout << "The cat has a fluffy tail." << endl << endl;
	}

};

class Parrot : public IPet {
public:
	virtual void Name() override {
		cout << "Parrot name is Kesha." << endl;
	}
	virtual void Paws() override {
		cout << "Parrot have two paws." << endl;
	}
	virtual void Tail() override {
		cout << "The parrot has a tail of feathers." << endl;
	}
};

int main()
{
	Dog df;
	df.Name();
	df.Paws();
	df.Tail();

	Cat cf;
	cf.Name();
	cf.Paws();
	cf.Tail();

	Parrot pf;
	pf.Name();
	pf.Paws();
	pf.Tail();
}
