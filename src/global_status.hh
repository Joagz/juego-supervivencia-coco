#ifndef GLOBAL_STATUS_HH
#define GLOBAL_STATUS_HH

class Personaje {
public:
  Personaje();
  Personaje(Personaje &&) = default;
  Personaje(const Personaje &) = default;
  Personaje &operator=(Personaje &&) = default;
  Personaje &operator=(const Personaje &) = default;
  ~Personaje();

  int bengalas = 1;
  bool herido = false;
  bool hipotermia = false;
};


#endif
