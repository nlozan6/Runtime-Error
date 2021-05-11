#include "stadium.h"

stadium::stadium()
{
    teamName = "";
    stadiumName = "";
    parkType = "";
    roofType = "";
    surface = "";
    league = "";
    capacity = 0;
    date = 0;
    distanceToCenter = 0;
}


//=============================================================================================
stadium::stadium(QString tName, QString sName, QString pType, QString rType, QString pSurface,
        QString bLeague, int cap, int opened, int dist)
{
    teamName = tName;
    stadiumName = sName;
    parkType = pType;
    roofType = rType;
    surface = pSurface;
    league = bLeague;
    capacity = cap;
    date = opened;
    distanceToCenter = dist;
}
//=============================================================================================



//=============================================================================================
stadium::~stadium() {}
//=============================================================================================



//=============================================================================================
QString stadium::getTeamName()const
{
    return teamName;
}
//=============================================================================================



//=============================================================================================
QString stadium::getStadiumName()const
{
    return stadiumName;
}
//=============================================================================================



//=============================================================================================
QString stadium::getLocation()const
{
    return location;
}
//=============================================================================================



//=============================================================================================
QString stadium::getParkType()const
{
    return parkType;
}
//=============================================================================================



//=============================================================================================
QString stadium::getRoofType()const
{
    return roofType;
}
//=============================================================================================



//=============================================================================================
QString stadium::getSurface()const
{
    return surface;
}
//=============================================================================================



//=============================================================================================
QString stadium::getLeague()const
{
    return league;
}
//=============================================================================================



//=============================================================================================
int stadium::getCapacity()const
{
    return capacity;
}
//=============================================================================================



//=============================================================================================
int stadium::getDate()const
{
    return date;
}
//=============================================================================================



//=============================================================================================
int stadium::getDistanceToCenter()const
{
    return distanceToCenter;
}
//=============================================================================================



//=============================================================================================
void stadium::setTeamName(QString name)
{
    teamName = name;
}
//=============================================================================================



//=============================================================================================
void stadium::setStadiumName(QString name)
{
    stadiumName = name;
}
//=============================================================================================



//=============================================================================================
void stadium::setLocation(QString name)
{
    location = name;
}
//=============================================================================================



//=============================================================================================
void stadium::setParkType(QString type)
{
    parkType = type;
}
//=============================================================================================



//=============================================================================================
void stadium::setRoofType(QString type)
{
    roofType = type;
}
//=============================================================================================



//=============================================================================================
void stadium::setSurface(QString type)
{
    surface = type;
}
//=============================================================================================



//=============================================================================================
void stadium::setLeague(QString name)
{
    league = name;
}
//=============================================================================================



//=============================================================================================
void stadium::setCapacity(int cap)
{
    capacity = cap;
}
//=============================================================================================



//=============================================================================================
void stadium::setDate(int date)
{
    this->date = date;
}
//=============================================================================================



//=============================================================================================
void stadium::setDistanceToCenter(int distance)
{
    distanceToCenter = distance;
}
//=============================================================================================