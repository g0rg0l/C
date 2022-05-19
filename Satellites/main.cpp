#include "Station.h"

int main() {

    Station station;

    Satellite s1(1);
    Satellite s2(2);
    Satellite s3(3);

    station.connectSatellite(s1);
    station.connectSatellite(s2);
    station.connectSatellite(s3);

    station.takeData();

    std::vector<Satellite> s_vector = {s1, s2, s3};

    station.connectSatellite(s_vector);

    station.takeData();

    return 0;
}
