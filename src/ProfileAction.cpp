#include <nlohmann/json.hpp>
#include <fstream>
#include <string>
#include <unordered_map>

std::unordered_map<std::string, std::string> GerProfileProperties(std::string profile_name)
{
    std::unordered_map<std::string, std::string> out_map;

    std::fstream profile_properties("profiles\\" + profile_name + ".json");
    nlohmann::json profile_properties_json;

    profile_properties >> progile_properties_json;


}
