#include <iostream>
#include <string>
using namespace std;

class Pet
{
protected:
    string food;

public:
    Pet(string f)
    {
        food = f;
    }
    virtual void feed()
    {
        cout << "Eats " << food << endl;
    }
    virtual void speak() = 0;
};

class Cat : public Pet
{
private:
    string color;

public:
    Cat(string f, string c) : Pet(f)
    {
        color = c;
        cout << "Got a " << color << " cat" << endl;
    }
    void speak()
    {
        cout << "Meow!" << endl;
    }
};

class Monkey : public Pet
{
private:
    bool tail;

public:
    Monkey(string f, bool t) : Pet(f)
    {
        tail = t;
        cout << "Got a monkey with " << (tail ? "a" : "no") << " tail" << endl;
    }
    void speak()
    {
        cout << "*Scratches pit*" << endl;
    }
};

class Lizard : public Pet
{
private:
    int tongue;

public:
    Lizard(string f, int t) : Pet(f)
    {
        tongue = t;
        cout << "Got a lizard with a " << tongue << "cm tongue" << endl;
    }
    void speak()
    {
        cout << "Grrrrrrr~" << endl;
    }
};

class Turtle : public Pet
{
private:
    double weight;

public:
    Turtle(string f, double w) : Pet(f)
    {
        weight = w;
        cout << "Got a " << weight << "-pound turtle" << endl;
    }
    void speak()
    {
        cout << "*Turtle noise*" << endl;
    }
};

int main()
{
    Pet *nick, *jeff, *chris, *sam;
    nick = new Cat("Meow Mix", "blue");
    jeff = new Monkey("Banana", false);
    chris = new Lizard("Flies", 5);
    sam = new Turtle("Lettuce", 0.5);

    nick->feed();
    jeff->feed();
    chris->feed();
    sam->feed();
    nick->speak();
    jeff->speak();
    chris->speak();
    sam->speak();

    delete nick;
    delete jeff;
    delete chris;
    delete sam;

    return 0;
}
