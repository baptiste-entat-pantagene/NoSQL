#include "../includes/primitiveStorage.h"


status createMasterCatalogHead()
{
    struct baseData
    {
        double version;
        std::string projectName;
    };
    const baseData data = {
    .version = 0,
    .projectName = "unknow"
    };


    std::ofstream ostrm(filename_MasterCatalog, std::ios::binary);

    return OK;
}

double LoadMasterCatalogHead()
{
    std::ifstream istrm(filename_MasterCatalog, std::ios::binary);
    double d;
    istrm.read(reinterpret_cast<char*>(&d), sizeof d);
    return d;
}

status writeInCatalog(catalogHead catalog_head)
{
    return status{OK};
}
