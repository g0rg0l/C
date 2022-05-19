#ifndef GPS_SATELLITE_H
#define GPS_SATELLITE_H

#include "iostream"

class Satellite
{

private:
    int id;

public:
    explicit Satellite(int new_id);

    double IssueData();

    int getIt() const;
};


#endif //GPS_SATELLITE_H
