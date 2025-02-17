#include "nivel_1.hh"
#include "../nivel_2/nivel_2.hh"
#include <cstdlib>
#include <iostream>
#include <random>
#include <string>

namespace nivel_1
{
  void esperar(Personaje &p);

  void init_nivel_1(Personaje &p)
  {
    std::cout
        << "Estás en una avioneta explorando el norte de Canadá. De repente una "
           "interferencia electromagnética causa una falla en los sistemas de la "
           "aeronave, provocando un accidente terrible..."
        << std::endl;

    std::cout << "Al caer, te encontrás en un bosque helado, recuperando la "
                 "consciencia te das cuenta de que tenés solo dos opciones:"
              << std::endl;

    std::cout << "1: Explorar la zona" << std::endl;
    std::cout << "2: Esperar a que alguien venga" << std::endl;

    while (true)
    {
      std::string option;
      std::cout << "Tu elección: ";
      std::getline(std::cin, option);

      switch (std::atoi(option.c_str()))
      {
      case 1:
        nivel_2::init_nivel_2(p);
        return;
      case 2:
        nivel_1::esperar(p);
        return;
      default:
        std::cout << "Por favor elige una opción válida" << std::endl;
        break;
      }
    }
  }

  void esperar_consecuencia()
  {
    std::cout << std::endl;
    // Generamos un número aleatorio para simular una probabilidad
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> distrib(0.0, 1.0);

    float random_float = distrib(gen);

    // 70% de probabilidad de morir
    if (random_float < 0.7f)
    {
      // morir
      std::cout << "FIN: Te quedaste esperando... nadie llegó... moriste de sed."
                << std::endl;
      exit(0);
    }

    std::cout << "Un helicóptero sobrevoló la zona, hiciste una señal con tu "
                 "bengala y pronto llegó el rescate. Te salvaste"
              << std::endl;

    exit(0);
  }

  void esperar(Personaje &p)
  {
    std::cout << std::endl;
    std::cout << "Te sientas a esperar pero tras unos días, tu esperanza es poca "
                 "y la sed y el hambre no cesan"
              << std::endl;

    std::cout << "1: Seguir esperando" << std::endl;
    std::cout << "2: Explorar" << std::endl;

    while (true)
    {
      std::string option;
      std::cout << "Tu elección: ";
      std::getline(std::cin, option);

      switch (std::atoi(option.c_str()))
      {
      case 1:
        nivel_1::esperar_consecuencia();
        return;
      case 2:
        nivel_2::init_nivel_2(p);
        return;
      default:
        std::cout << "Por favor elige una opción válida" << std::endl;
        break;
      }
    }
  }
}; // namespace nivel_1
