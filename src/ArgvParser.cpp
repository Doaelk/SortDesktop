#include <unordered_map>
#include <string>

std::unordered_map<std::string, std::string> ArgvParser(int argc, std::string argv[], int keyc, std::string keys_list[]) 
{
    std::unordered_map<std::string, std::string> out_map;

    for(int argi = 1; argi < argc; ++argi)
    {  
        for (int keyi = 0; keyi < keyc; ++keyi)
        {
            if(keys_list[keyi] == argv[argi])
            {
                if(argv[argi+1] == NULL || argv[argi+1] == keys_list[keyi]) 
                {
                    out_map["error"] = keys_list[keyi] + "wrong command, use --help";
                    return out_map;
                }
                out_map[keys_list[keyi]] = argv[argi+1];
                ++keyi;
            }
            else
            {
                out_map["error"] = "SordDesktop doesnt have '" + argv[argi] + "' commandn, use --help";  
            }
        }
    }            
    return out_map; 
}
