
#include <stdbool.h>
#include <math.h>

#include "shapes.h"

#define EPS 1e-6


Point makePoint( float x, float y ) {
    Point new;
    new.x = x;
    new.y = y;
    return new;
}

// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()


Line makeLine(Point p1, Point p2) {
    Line l;
    l.p[0] = p1;
    l.p[1] = p2;
    return l;
}

Triangle makeTriangle(Point p1, Point p2, Point p3) {
    Triangle t;
    t.p[0] = p1;
    t.p[1] = p2;
    t.p[2] = p3;
    return t;
}

float lineLength(Line l) {
    float dx = l.p[1].x - l.p[0].x;
    float dy = l.p[1].y - l.p[0].y;
    return sqrt(dx * dx + dy * dy);
}

float triangleArea(Triangle t) {
    float dx1 = t.p[1].x - t.p[0].x;
    float dy1 = t.p[1].y - t.p[0].y;
    float dx2 = t.p[2].x - t.p[0].x;
    float dy2 = t.p[2].y - t.p[0].y;
    float cross = dx1 * dy2 - dy1 * dx2;
    return fabs(cross) / 2.0f;
}

bool samePoint(Point p1, Point p2) {
    return (fabs(p1.x - p2.x) < EPS && fabs(p1.y - p2.y) < EPS);
}

bool pointInLine(Point p, Line l) {
    // Return true only if p is one of the line's endpoints
    return samePoint(p, l.p[0]) || samePoint(p, l.p[1]);
}

bool pointInTriangle(Point p, Triangle t) {
    // Return true only if p is one of the triangle's vertices
    return samePoint(p, t.p[0]) || samePoint(p, t.p[1]) || samePoint(p, t.p[2]);
}