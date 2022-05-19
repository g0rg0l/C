#ifndef GPS_STATION_H
#define GPS_STATION_H

#include "iostream"
#include "vector"
#include "Satellite.h"
#include "windows.h"
#include <unistd.h>

class Station
{

private:
    std::vector<Satellite> connected_satellites;

public:
    explicit Station(std::vector<Satellite> new_satellites = {});

    void connectSatellite(const Satellite& newSatellite);
    void connectSatellite(const std::vector<Satellite>& newSatellites);

    void takeData();
    unsigned long long getSatellitesCount() const;
};


#endif //GPS_STATION_H
