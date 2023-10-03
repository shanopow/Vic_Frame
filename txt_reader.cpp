#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <unordered_map>

// a file when read should be represented as an array of lines, we have no need for multi-line concatting
class DataReader{
    public:
    std::vector<std::string> to_read;
    //std::unordered_map<std::string, Entry> made_of;

    DataReader(std::vector<std::string> to_read){
        this->to_read = to_read;
    };

    void File_Reader(){
        std::string tmp_holder;
        for (auto i : this->to_read){
            std::ifstream myfile (i);
            
            if ( myfile.is_open() ) {
                while (myfile){
                    myfile >> tmp_holder;
                    std::cout << tmp_holder;   
                }
            }        
        }
    };
};

class Entry{
    public:

    std::string text;
    
    Entry(std::string text_taken){
        this->text = text_taken;          
    };
};

int main(){
    std::vector<std::string> holder;
    holder.push_back("data/mapdata/provinces.txt");
    holder.push_back("data/mapdata/states.txt");
    DataReader *rah = new DataReader(holder);
    rah->File_Reader();
}