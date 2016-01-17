#ifndef PAIR_H
#define PAIR_H

template <class T>
class Pair
{
    public:
        Pair();
        Pair(T firstVal, T secondVal);
        void setFirst(T value);
        void setSecond(T value);
        T getFirst() const;
        T getSecond() const;

    private:
        T first;
        T second;
};

#endif // PAIR_H
