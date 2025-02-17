#include "nivel_4.hh"
#include "../nivel_5/nivel_5.hh"
#include <iostream>

namespace nivel_4
{

    void init_nivel_4(Personaje &p)
    {
        std::cout << std::endl;
        std::cout << "Caminando por el bosque encontrás una cabaña." << std::endl;

        std::cout << "1: Juntar leña antes de ir a la cabaña" << std::endl;
        std::cout << "2: No juntar leña" << std::endl;

        while (true)
        {
            std::string option;
            std::cout << "Tu elección: ";
            std::getline(std::cin, option);

            switch (std::atoi(option.c_str()))
            {
            case 1:
                if (p.herido)
                {
                    std::cout << "Encontras plantas antisépticas que te pueden servir para tus heridas." << std::endl;
                }
                if (p.hipotermia)
                {
                    std::cout << "La hipotermia empieza a empeorar y empezas a perder tus fuerzas, pronto perdes el conocimiento. No se supo más de vos. FIN." << std::endl;
                    exit(0);
                }

                std::cout << "Llegas al refugio, encendes un fuego y aplicas un vendaje casero junto con las plantas antisépticas, tus heridas ahora no son un problema" << std::endl;
                std::cout << "-herido" << std::endl;
                p.herido = false;
                nivel_5::init_nivel_5(p);

                return;
            case 2:
                if (p.herido)
                {
                    std::cout << "Llegas a la cabaña, pero no hay ningún botiquin para tratar tus heridas, a las pocas horas tus heridas se infectan. Tu destino está signado. FIN" << std::endl;
                    exit(0);
                }
                if (p.hipotermia)
                {
                    std::cout << "Afortunadamente ya había leña en el refugio, prendes un fuego para pasar el frío." << std::endl;
                }

                std::cout << "-hipotermia" << std::endl;
                p.hipotermia = false;
                nivel_5::init_nivel_5(p);
                return;
            default:
                std::cout << "Por favor elige una opción válida" << std::endl;
                break;
            }
        }
    }
} // namespace nivel_4
