#include <unordered_map>
#include <string>

namespace ap
{
    unordered_map<std::string, std::string> ArgvParser(int argc, std::string argv[], int keyc, std::string keys_list[]) 
    {
        unordered_map<std::string, std::string> out_map;

        for(int argi = 1; argi < argc; ++argi)
        {  
            if(key == argv[argi])
            {
                for (int keyi = 0; keyi < keyc; ++keyi)
                {
                    if(argv[argi+1] == NULL || argv[argi+1] == key2)
                    {
                        out_map["error"] = key + "wrong command, use --help";
                        return out_map;
                    }
                }
                out_map[key] = argv[argi+1];
            }
        }            
        return out_map; 
    }
}
