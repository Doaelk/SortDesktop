#pragma once

class CommandLineManager
{
    private:
        static constexpr std::string keys_list[]{"--use_profile", "--create_profile", "--delete_profile"};  
        static constexpr int keys_count = 3;

    public:
    static std::unordered_map<std::string, std::string> argvParser(int argc, std::string argv[]){} 
}
