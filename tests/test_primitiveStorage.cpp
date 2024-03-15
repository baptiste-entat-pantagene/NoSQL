#include <catch2/catch_all.hpp>
#include "../includes/primitiveStorage.h"

TEST_CASE("createMasterCatalogHead", "[primitiveStorage][createMasterCatalogHead]")
{
    double d = 0;

    REQUIRE(createMasterCatalogHead() == OK);

    d = LoadMasterCatalogHead();
    REQUIRE(d == 3.14);
}