#include <iostream>
#include <fstream>
#include <vector>
#include <string>

// a file when read should be represented as an array of lines, we have no need for multi-line concatting
// first line is used differently as reference 
class DataReader{
    public:
    std::vector<std::string> to_read;
    

    DataReader(std::vector<std::string> to_read){
        this->to_read = to_read;
    };

    void File_Reader(){
        for (auto i : this->to_read){
            
        }
    };
};