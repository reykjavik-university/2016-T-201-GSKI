#include <iostream>
using namespace std;

enum Note {middleC, Csharp, Cflat};

class Instrument {
    public:
        virtual void play(Note theNote) const
        {
                cout << "Instrument::play" << endl;
        }
};

class Wind: public Instrument {
    public:
        void play(Note theNote) const
        {
                cout << "Wind::play" << endl;
        }
};

void tune(Instrument& i)
{
    // ...
    i.play(middleC);
}


int main()
{
    Wind flute;
    tune(flute);

    return 0;
}
