#include "nivel_final.hh"
#include <iostream>
namespace nivel_final
{
    void fin(Personaje &p)
    {
        std::cout << std::endl;
        std::cout << "FIN: tras días en la estación, un helicóptero sobrevuela la zona, haces una señal con las manos y logran verte. Tras rescatarte, el hombre se desvanece. Pues era producto de tu imaginación. Despertás en un hospital." << std::endl;

        std::cout << std::endl;
        std::cout << "Estadisticas del personaje:" << std::endl;
        std::cout << "Bengalas: " << p.bengalas << std::endl;
        std::cout << "Herido: " << p.herido << std::endl;
        std::cout << "Hipotermia: " << p.hipotermia << std::endl;
    }

} // namespace nivel_final
