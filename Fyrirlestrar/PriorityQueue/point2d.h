#ifndef POINT2D_H
#define POINT2D_H

class Point2D {
public:
    Point2D(int x, int y) : _x(x), _y(y) {}
    int getX() const { return _x; }
    int getY() const { return _y; }
    //bool operator<(Point2D& rhs) const { return getX() < rhs.getX(); }
private:
    int _x;
    int _y;

};

class LeftRight {
    // overriding the function call operator
    public:
    bool operator() (const Point2D& p, const Point2D& q) const
    {
        return p.getX() < q.getX();
    }
};

class BottomUp {
    // overriding the function call operator
    public:
    bool operator() (const Point2D& p, const Point2D& q) const
    {
        return p.getY() < q.getY();
    }
};

#endif // POINT2D_H
