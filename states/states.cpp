#include <string>
#include <unordered_map>

class RGO{
    public:
    
    std::string name;
    int amount_prod = 0;

    RGO(){}
    RGO(std::string name, int amount_prod){
        this->name = name;
        this->amount_prod = amount_prod;
    }
};

class Terrain{
    public:
    std::string name;
    float rgo_impact = 0;

    Terrain(){}
    Terrain(std::string name, float rgo_impact){
        this->name = name;
        this->rgo_impact = rgo_impact;
    }

};


class Province{
    public:
    
    std::string name;
    int population;
    RGO produces;
    Terrain terrain;
    
    Province(std::string name, int population, RGO produces, Terrain terrain){
        this->name = name;
        this->population = population;
        this->produces = produces;
        this->terrain = terrain;
    }
};

class State{
    public:
    
    std::string name;
    std::unordered_map<int, Province> made_of;
    float aristocrat_presence;
    float farmer_presence;
    
    State(std::string name, std::vector<int> made_of){
        this->name = name;
    }
    
};