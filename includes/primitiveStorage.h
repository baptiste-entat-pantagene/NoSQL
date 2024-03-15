#ifndef PRIMITIVESTORAGE_H
#define PRIMITIVESTORAGE_H
#include <memory>
#include <string>
#include <fstream>

#define filename_MasterCatalog "masterCatalog.nosql"

enum status
{
    OK,
    ERR
};

struct columnAttribute
{
    std::string name;
    uint8_t sizeInByte;
};

struct catalogHead
{
    std::string catalogHeadPath;
    std::unique_ptr<columnAttribute*> column_attribute;
};

status createMasterCatalogHead();
double LoadMasterCatalogHead();

status writeInCatalog(catalogHead catalog_head);

#endif //PRIMITIVESTORAGE_H
