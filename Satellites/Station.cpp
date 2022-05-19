#include "Station.h"

Station::Station(std::vector<Satellite> new_satellites)
{
    srand(time(nullptr));

    for (auto &satellite : new_satellites){
        connected_satellites.push_back(satellite);
    }
}

void Station::takeData()
{
    int count = 1;
    double sum = 0;
    for (auto &satellite : connected_satellites)
    {
        std::cout << count  << " seconds:" << std::endl;
        count++;

        double gotData = satellite.IssueData();
        sum += gotData;
        std::cout << "  [" << satellite.getIt()  << "] " << gotData << std::endl;
        sleep(1);
    }
    if (sum != 0) std::cout << "generated data: " << sum / (double) getSatellitesCount() << std::endl;
    else std::cout << "generated data: " << 0 << std::endl;
    printf("\n");
}

unsigned long long Station::getSatellitesCount() const
{
    return connected_satellites.size();
}

void Station::connectSatellite(const Satellite& newSatellite)
{
    connected_satellites.push_back(newSatellite);
}

void Station::connectSatellite(const std::vector<Satellite> &newSatellites)
{
    for (auto &satellite : newSatellites){
        connected_satellites.push_back(satellite);
    }
}
