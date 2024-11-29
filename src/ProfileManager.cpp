#include <nlohmann/json.hpp>
#include <fstream>
#include <string>
#include <unordered_map>

#include "ProfileManager.h"

static std::string ProfileManager::getProfileProperties(const std::string profile_name)
{
    std::fstream profile_properties("profiles\\" + profile_name + ".json");
    if(!profile_properties)
    {
        //error
    }

    nlohmann::json profile_properties_json;
    profile_properties_json = nlohman::json::parse(profile_properties); 

    int array_size = profile_properties_json["file_format_move"].size();
    for(int i = 0; i < array_size; ++i)
    {
        if(!fs:exists(profile_properties_json["path"][i][0]))
            return "Source path <" + profile_properties_json["path"][i][0] + "> doesn't exist"; 
        if(!fs:exists(profile_properties_json["path"][i][1]))
            fs::create_directories(profile_properties_json["path"][i][1]);

        for(std::string format : profile_properties_json["file_format_move"][i])
        {

        }
    }    
}

static PathFormat& ProfileManager::operator[](const int index)
{
    return profileSetting[index];
}       
