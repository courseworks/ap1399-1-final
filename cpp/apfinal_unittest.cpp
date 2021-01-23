#include <limits.h>
#include <iostream>
#include <iomanip>
#include <vector>
#include <deque>
#include "box.h"
#include "goldbox.h"
#include "mirrorbox.h"
#include "apfinal.h"
#include "gtest/gtest.h"
namespace
{
/*
TEST(APFinalTest, Test0)
{
    std::vector<int> arr{4, 2, 3, 1};
    std::vector<int> sorted{1, 2, 3, 4};
    quickSort(arr.begin(), arr.end());
    EXPECT_EQ(arr==sorted, 1)<<std::setw(50)<<"***********minus 5***********";
}

TEST(APFinalTest, Test1)
{
    std::deque<int> arr{1, 4, 28, 83};
    std::deque<int> sorted{1, 4, 28, 83};
    quickSort(arr.begin(), arr.end());
    EXPECT_EQ(arr==sorted, 1)<<std::setw(50)<<"***********minus 5***********";
}

TEST(APFinalTest, Test2)
{
    std::shared_ptr<Box> pg1{std::make_shared<GoldBox>(1, 5, 8)}, pm1{std::make_shared<MirrorBox>(20, 40, 1)};
    std::shared_ptr<Box> pg2{std::make_shared<GoldBox>(1, 10, 16)}, pm2{std::make_shared<MirrorBox>(10, 30, 1)};
    std::deque<std::shared_ptr<Box>> arr{pg1, pm1, pg2, pm2};
    quickSort(arr.begin(), arr.end());
    EXPECT_EQ(arr[0]->width, 30)<<std::setw(50)<<"***********minus 5***********";
}

TEST(APFinalTest, Test3)
{
    std::shared_ptr<Box> pg1{std::make_shared<GoldBox>(1, 5, 8)}, pm1{std::make_shared<MirrorBox>(20, 40, 1)};
    std::shared_ptr<Box> pg2{std::make_shared<GoldBox>(1, 10, 16)}, pm2{std::make_shared<MirrorBox>(10, 30, 1)};
    std::vector<std::shared_ptr<Box>> arr{pg1, pm1, pg2, pm2};
    quickSort(arr.begin(), arr.end());
    for (size_t i{}; i<arr.size(); i++)
        std::cout<<*arr[i]<<", ";
    std::cout<<std::endl;
}
*/
}
