
#include <stdio.h>
#include <stdbool.h>

#include "shapes.h"

int main( void ) {

    Point p1 = makePoint(0.0,0.0);
    
    // test your code by calling the functions and printing the output 
    
    // Test samePoint
    Point a = makePoint(1.0f, 2.0f);
    Point b = makePoint(1.0f, 2.0f);
    printf("samePoint(a,b): %d (should be 1)\n", samePoint(a, b));

    // Test line functions
    Point start = makePoint(0.0f, 0.0f);
    Point end   = makePoint(3.0f, 4.0f);
    Line line = makeLine(start, end);
    printf("lineLength: %f (should be 5.0)\n", lineLength(line));
    printf("pointInLine(start,line): %d (should be 1)\n", pointInLine(start, line));
    printf("pointInLine(end,line): %d (should be 1)\n", pointInLine(end, line));
    printf("pointInLine(makePoint(1.5,2.0),line): %d (should be 0)\n",
           pointInLine(makePoint(1.5f, 2.0f), line));

    // Test triangle functions
    Point v1 = makePoint(0.0f, 0.0f);
    Point v2 = makePoint(1.0f, 0.0f);
    Point v3 = makePoint(0.0f, 1.0f);
    Triangle tri = makeTriangle(v1, v2, v3);
    printf("triangleArea: %f (should be 0.5)\n", triangleArea(tri));
    printf("pointInTriangle(v1,tri): %d (should be 1)\n", pointInTriangle(v1, tri));
    printf("pointInTriangle(v2,tri): %d (should be 1)\n", pointInTriangle(v2, tri));
    printf("pointInTriangle(v3,tri): %d (should be 1)\n", pointInTriangle(v3, tri));
    printf("pointInTriangle(makePoint(0.2,0.2),tri): %d (should be 0)\n",
           pointInTriangle(makePoint(0.2f, 0.2f), tri));

    return 0;
}