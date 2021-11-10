#include <gtest/gtest.h>
#include <iostream>
//#include <math.h>
#include "main.cpp"

//using namespace CppUnitTestFramework;

namespace Unit_Test2
{
class UnitTest2
{
public:
void TestMethod1()
{
int a[2] = {4,5}    
int t;
t = count(a, 2);
ASSERT_EQ(t, 1);

}
};
}
