
/*
 * 2025-02-17
 * Para coco
 */
#include "nivel_1/nivel_1.hh"
#include "global_status.hh"

Personaje::Personaje() {}

Personaje::~Personaje() {}

int main(int argc, char *argv[]) {
  Personaje p = Personaje();
  nivel_1::init_nivel_1(p);
  return 0;
}
