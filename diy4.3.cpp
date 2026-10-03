#include <iostream>
using namespace std;

class Tracer
{
    int id;

public:
    Tracer(int i)
    {
        id = i;
        cout << "Object " << id << " created" << endl;
    }

    ~Tracer()
    {
        cout << "Object " << id << " destroyed" << endl;
    }
};

int main()
{
    for(int i = 1; i <= 3; i++)
    {
        Tracer *t = new Tracer(i);

        delete t;
    }

    return 0;
}