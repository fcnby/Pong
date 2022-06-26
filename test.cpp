#include "googletest/googlemock/include/gmock/gmock.h"
#include "googletest/googletest/include/gtest/gtest.h"
#include "player.h"
#include <gtest/gtest.h>

using namespace std;

TEST(TestGroupName, PlayerMethods) {
    int score1 = 0;
    Player player1 = Player(1,10);
    ASSERT_TRUE(player1.getX() == 1);
    ASSERT_TRUE(player1.getY() == 10);
}
