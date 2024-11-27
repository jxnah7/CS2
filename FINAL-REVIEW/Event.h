// define a class event
  // atributes with the following :
    // time // strings
    // location // strings
    // hasClowns (true or false)

// define a constructor for this class that will take in paramenters
// for all attriubutes
// default values for :
// location : "home"
// clowsn : "False"

// every event needs a time to be created

#include <iostream>
#include <string>
using namespace std;

class event{
  public:
    string time;
    string location;
    bool hasClowns;

// added default to time for sake of practice in review1.cpp
    event(string inTime = 100, string inLocation = "home", bool inHasClowns = false){
      time = inTime;
      location = inLocation;
      hasClowns = inHasClowns;
    }

    string changeLoc(string newLocation){
      location = newLocation;
      if(newLocation == "circus"){
        hasClowns = true;
      }
    }
};