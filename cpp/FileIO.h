#include <string>
#include <fstream>
#include <sstream>

using namespace std;

class FileIO
{
private:
    
public:
    static bool SaveToFile(wstring filepath, wstring data)
    {
        wofstream file (filepath, std::wofstream::trunc);
        file << data;
        file.close();
    }
    static wstring ReadFromFile(wstring filepath)
    {
        wifstream file (filepath);
        wstringstream buffer;
        buffer << file.rdbuf();
        file.close();
        return buffer.str();
    }
};