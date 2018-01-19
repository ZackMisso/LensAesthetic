#pragma once

#include <lens/common.h>
#include <lens/spline.h>

template <class T>
class Lens2<T> {
private:
    Pt<T> topPoint;
    Pt<T> botPoint;
    // Spline* lens;
    T ior;

public:
    Lens2() {
        // TODO
    }

    ~Lens2() {
        // TODO
    }

    Pt<T> calculateCollisionPoint(const Ray2<T>& data) const {
        Pt<T> collision = Pt<T>();
        // TODO
        return collision;
    }

    Ray2<T> calculateExitRay(const Ray2<T>& data) const {
        Ray2<T> newRay;
        // TODO
        return newRay;
    }

    void setTopPoint(Pt<T> pt) { topPoint = pt; }
    void setBotPoint(Pt<T> pt) { botPoint = pt; }
    // void setSpline(Spline* spline) { lens = spline; }
    void setIOR(T value) { ior = value; }

    Pt<T> getTopPoint() const { return topPoint; }
    Pt<T> getBotPoint() const { return botPoint; }
    Spline* getSpline() const { return spline; }
    T getIOR() const { return ior; }
};

typedef Lens2<float> Lens2f;
typedef Lens2<double> Lens2d;
