#include "../libjolteon/component.hpp"

#include <gtest/gtest.h>

// Test case for sampleHelloWorldComponent
TEST(ComponentTest, HelloWorld) {
    // Expect the sampleHelloWorldComponent function to return "Hello World"
    EXPECT_EQ(Jolteon::Component::sampleHelloWorldComponent(), "Hello World");
}

// Test case for sampleAdderComponent
TEST(ComponentTest, Adder) {
    // Test adding positive numbers
    EXPECT_EQ(Jolteon::Component::sampleAdderComponent(2, 3), 5);
    // Test adding negative numbers
    EXPECT_EQ(Jolteon::Component::sampleAdderComponent(-2, -3), -5);
    // Test adding a positive and a negative number
    EXPECT_EQ(Jolteon::Component::sampleAdderComponent(-2, 3), 1);
    // Test adding zeros
    EXPECT_EQ(Jolteon::Component::sampleAdderComponent(0, 0), 0);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
