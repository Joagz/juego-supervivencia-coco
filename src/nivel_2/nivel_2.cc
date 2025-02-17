#include "nivel_2.hh"
#include "../nivel_3/nivel_3.hh"
#include <iostream>
#include <random>

namespace nivel_2
{
  void atacar_lobo(Personaje &p)
  {
    std::cout << std::endl;
    std::cout << "El lobo se avalanza hacia vos con rabia y furia, muerde varias partes de tu cuerpo";

    // Generamos un número aleatorio para simular una probabilidad
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> distrib(0.0, 1.0);

    float random_float = distrib(gen);

    if (random_float < 0.5f)
    {
      std::cout << " causando heridas graves. El lobo te tira al suelo y muerde tu yugular, causando tu muerte. FIN" << std::endl;
      exit(0);
    }

    std::cout << " causando heridas graves. El lobo te hace caer, pero logras"
                 " agarrar una piedra afilada y clavarla en el abdomen del lobo, que huye herido."
              << std::endl;
    std::cout << "+herido" << std::endl;

    p.herido = true;
    nivel_3::init_nivel_3(p);
  }

  void init_nivel_2(Personaje &p)
  {
    std::cout << std::endl;
    std::cout << "Salís a explorar el bosque helado, pero en el camino un lobo "
                 "hambriento se interpone y te ataca, tenés solo dos opciones:"
              << std::endl;
    if (p.bengalas > 0)
      std::cout << "1: Utilizar una bengala para aullentar al lobo" << std::endl;
    std::cout << "2: Enfrentar al lobo" << std::endl;

    while (true)
    {
      std::string option;
      std::cout << "Tu elección: ";
      std::getline(std::cin, option);

      switch (std::atoi(option.c_str()))
      {
      case 1:
        std::cout << "Prendiste la bengala y se la tiraste al lobo, que salió "
                     "corriendo."
                  << std::endl;
        std::cout << "-1 bengala" << std::endl;
        p.bengalas--;
        nivel_3::init_nivel_3(p);
        return;
      case 2:
        nivel_2::atacar_lobo(p);
        return;
      default:
        std::cout << "Por favor elige una opción válida" << std::endl;
        break;
      }
    }
  }
}; // namespace nivel_2
