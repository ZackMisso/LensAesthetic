#pragma once

#include <stick/common.h>
#include <stick/util.h>

// this class contains the implementations of different 1d splines

template <class T>
class Spline {
public:
    Spline() {
        // TODO
    }

    ~Spline() {
        // TODO
    }

    virtual T evaluateSpline(T pos) = 0;
    virtual vector<Pt<T> > evaluateSpline(int resolution) = 0;
    virtual void split(T pos) = 0;
    virtual void combine(T pos) = 0;
    virtual void addCtrPoint(T pos) = 0;
    virtual void removeCtrlPoint(T pos) = 0;

    virtual bool requiresTangents() = 0;
protected:
    vector<Pt<T> > ctrlPoints;
};

template <class T>
class BezierCurve : public Spline<T> {
public:
    BezierCurve() {
        // TODO
    }

    ~BezierCurve() {
        // TODO
    }

    virtual T evaluateSpline(T pos) {
        T val;
        // TODO
        return val;
    }

    virtual vector<Pt<T> > evaluateSpline(int resolution) {
        vector<Pt<T> > curve = vector<Pt<T> >();
        // TODO
        return curve;
    }

    virtual void split(T pos) {
        // TODO
    }

    virtual void combine(T pos) {
        // TODO
    }

    virtual void addCtrPoint(T pos) {
        // TODO
    }

    virtual void removeCtrlPoint(T pos) {
        // TODO
    }

    virtual bool requiresTangents() { return false; }
};

template <class T>
class HermiteSpline : public Spline<T> {
public:
    HermiteSpline() {
        // TODO
    }

    ~HermiteSpline() {
        // TODO
    }

    virtual T evaluateSpline(T pos) {
        T val;
        // TODO
        return val;
    }

    virtual vector<Pt<T> > evaluateSpline(int resolution) {
        vector<Pt<T> > curve = vector<Pt<T> >();
        // TODO
        return curve;
    }

    virtual void split(T pos) {
        // TODO
    }

    virtual void combine(T pos) {
        // TODO
    }

    virtual void addCtrPoint(T pos) {
        // TODO
    }

    virtual void removeCtrlPoint(T pos) {
        // TODO
    }

    virtual bool requiresTangents() { return true; }
protected:
    vector<Pt<T> > tangents;
};

template <class T>
class BSpline : public Spline<T> {
public:
    BSpline() {
        // TODO
    }

    ~BSpline() {
        // TODO
    }

    virtual T evaluateSpline(T pos) {
        T val;
        // TODO
        return val;
    }

    virtual vector<Pt<T> > evaluateSpline(int resolution) {
        vector<Pt<T> > curve = vector<Pt<T> >();
        // TODO
        return curve;
    }

    virtual void split(T pos) {
        // TODO
    }

    virtual void combine(T pos) {
        // TODO
    }

    virtual void addCtrPoint(T pos) {
        // TODO
    }

    virtual void removeCtrlPoint(T pos) {
        // TODO
    }

    virtual bool requiresTangents() { return false; }
};
