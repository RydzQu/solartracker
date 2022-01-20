#include "Arduino.h"

// This file is available in electronic form at http://www.psa.es/sdg/sunpos.htm

#ifndef __SUNPOS_H
#define __SUNPOS_H

// Deklaracja stałych
#define pi                  3.14159265358979323846
#define twopi               (2.0*pi)
#define rad                 (pi/180.0)
#define dEarthMeanRadius    6371.01    // In km
#define dAstronomicalUnit   149597890  // In km


typedef struct struct_cLocation
{
    double dLongitude;
    double dLatitude;
    
}cLocation;

typedef struct struct_cSunCoordinates
{
    double dZenithAngle;
    double dAzimuth;
    
}cSunCoordinates;


#endif
