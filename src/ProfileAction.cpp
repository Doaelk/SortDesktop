#include <nlohmann/json.hpp>
#include <fstream>
#include <string>
#include <unordered_map>

std::unordered_map<std::string, std::string> GerProfileProperties(std::string profile_name)
{
    std::unordered_map<std::string, std::string> out_map;

    std::fstream profile_properties("profiles\\" + profile_name + ".json");
    if(!profile_properties)
    {
        //error
    }

    nlohmann::json profile_properties_json;
    profile_properties_json = nlohman::json::parse(profile_properties); 

    int array_size = profile_properties_json["file_format_move"];
    for(int i = 0; i < array_size; ++i)
    {
        for(std::string format : profile_properties_json["file_format_move"][i])
        {
        }
    }    
}
