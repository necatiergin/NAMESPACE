#include <boost/filesystem.hpp>
#include <filesystem>

namespace fstd = std::filesystem;
namespace fboost = boost::filesystem;

int main()
{
    fstd::path p1{ "necati.txt" };
    fboost::path p2{ "ergin.txt" };
}
