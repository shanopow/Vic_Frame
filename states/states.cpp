#include <string>
#include <unordered_map>

class RGO{
    public:
    
    std::string name;
    int amount_prod;
};

class Terrain{
    public:
    std::string name;
    float rgo_impact;

};


class Province{
    public:
    
    std::string name;
    int population;
    RGO produces;
    Terrain terrain;
    
    Province(std::string name, int population, RGO produces, Terrain terrain){
        
    }


};

class State{
    public:
    
    std::string name;
    std::unordered_map<int, Province> made_of;
    float aristocrat_presence;
    float farmer_presence;
};