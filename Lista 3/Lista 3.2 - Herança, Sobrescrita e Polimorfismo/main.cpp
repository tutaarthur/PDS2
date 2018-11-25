#include "fleet.h"
#include <string>
#include <vector>

int main() {

    int number_of_planes = 9;

	Fleet *fleet = new Fleet();
	std::vector<Aeroplane*> plane_fleet = fleet->instantiate_fleet(number_of_planes);
	fleet->print_fleet_data(plane_fleet);
	for (std::vector<Aeroplane*>::iterator it = plane_fleet.begin() ; it != plane_fleet.end(); ++it)
    {
            delete (*it);
    }
    plane_fleet.clear();
}
