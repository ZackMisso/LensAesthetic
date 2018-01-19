#pragma once

#include <iostream>
#include <vector>

// for eigen
#include <nanogui/glutil.h>

template <class T>
struct Pt<T> {
    T x;
    T y;
}

template <class T>
struct Ray2<T> {
    Pt<T> pos;
    Pt<T> dir;
}
