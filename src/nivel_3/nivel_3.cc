#include "nivel_3.hh"
#include "../nivel_4/nivel_4.hh"
#include <iostream>

namespace nivel_3
{
  void init_nivel_3(Personaje &p)
  {
    std::cout << std::endl;
    std::cout << "Encontras un río congelado" << std::endl;
    std::cout << "1: Cruzar el río" << std::endl;
    std::cout << "2: No cruzar el río" << std::endl;

    while (true)
    {
      std::string option;
      std::cout << "Tu elección: ";
      std::getline(std::cin, option);

      switch (std::atoi(option.c_str()))
      {
      case 1:
        std::cout << "Cruzando el río notas que el suelo empieza a quebrarse, sin darte cuenta caes al agua" << std::endl;

        if (p.herido)
        {
          std::cout << "No podés salir del agua debido a tus heridas, pronto te desmayás y morís ahogado. FIN." << std::endl;
          exit(0);
        }
        std::cout << "+hipotermia" << std::endl;
        std::cout << "Sin lograr cruzar, volvés y te dirigís al este" << std::endl;

        p.hipotermia = true;
        nivel_4::init_nivel_4(p);
        return;
      case 2:
        std::cout << "Decidís no cruzar el río e ir hacia el este." << std::endl;
        nivel_4::init_nivel_4(p);
        return;
      default:
        std::cout << "Por favor elige una opción válida" << std::endl;
        break;
      }
    }
  }
} // namespace nivel_3
