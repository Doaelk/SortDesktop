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

        static PathFormat* profileSetting;

    public:     
        static std::string getProfileProperties(const std::string profile_name);

        static ProfileManager(int size)
        {
            profileSetting = new PathFormat[size]; 
        }

        static PathFormat& opertator[](const int index);
}
