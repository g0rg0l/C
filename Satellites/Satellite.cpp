#include "Satellite.h"

Satellite::Satellite(int new_id)
{
    id = new_id;
}

double Satellite::IssueData()
{
    double f = (double)rand() / RAND_MAX;
    return  5 * f;
}

int Satellite::getIt() const
{
    return id;
}
