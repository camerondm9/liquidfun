#include<Box2D/Box2D.h>

double b2Fixture_TestPoint(void* fixture, double x, double y) {
  return (bool)((b2Fixture*)fixture)->TestPoint(b2Vec2(x,y));
}

void b2Fixture_Refilter(void* fixture) {
  ((b2Fixture*)fixture)->Refilter();
}
