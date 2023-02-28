#include <gtest/gtest.h>
#include "lib.h"

TEST(AppCommonTests, VersionAssertions) {
    // BOOST_CHECK(version() > 0);
    EXPECT_GT(version(), 0);
}
