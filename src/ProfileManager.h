#pragma once

class ProfileManager 
{
    private:
        struct PathFormat
        {
            std::string* formats;
            std::string path_from;
            std::string path_to;
            int formats_count;
        }

        PathFormat* profileSetting;

    public:     
        ProfileManager(int size, std::string path_from, std::string path_to, std::string* formats;)
        {
        }
}
