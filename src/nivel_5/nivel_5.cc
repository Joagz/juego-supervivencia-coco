#include "nivel_5.hh"
#include "../nivel_final/nivel_final.hh"
#include <iostream>

namespace nivel_5
{
    void init_nivel_5(Personaje &p)
    {
        std::cout << std::endl;
        std::cout << "Encontrás una estación de tren abandonada en el bosque. Parece pasar por un tunel abandonado, que cruza la montaña de un lado al otro. Adentro se ve una figura extraña, un humano, pero sospechosamente tranquilo en la estación." << std::endl;
        std::cout << "1: Interactuar con el hombre" << std::endl;
        std::cout << "2: Huír de la zona" << std::endl;

        while (true)
        {
            std::string option;
            std::cout << "Tu elección: ";
            std::getline(std::cin, option);

            switch (std::atoi(option.c_str()))
            {
            case 1:
                std::cout << "El hombre se muestra pacífico y te recibe bien. Una tormenta se avecina y se refugian en la estación, sobreviven durante unos días con los recursos que tenían." << std::endl;
                nivel_final::fin(p);
                return;
            case 2:
                std::cout << "Mientras te ibas y continuabas tu exploración, una tormenta se avecina. Te perdés en el bosque. No se supo más nada de vos. FIN." << std::endl;
                exit(0);
                return;
            default:
                std::cout << "Por favor elige una opción válida" << std::endl;
                break;
            }
        }
    }
}
