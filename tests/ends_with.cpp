#include <gtest/gtest.h>
#include <strman.hpp>

TEST(ends_with, correct_input)
{	ASSERT_TRUE(strman_ends_with("abcdef", "def"));
}

TEST(ends_with, incorrect_input)
{	ASSERT_FALSE(strman_ends_with("abcdef", "abc"));
}

TEST(ends_with, same_length)
{	ASSERT_TRUE(strman_ends_with("abc", "abc"));
}

TEST(ends_with, longer_input)
{	ASSERT_FALSE(strman_ends_with("abc", "abcdef"));
}

TEST(ends_with, empty_input)
{	ASSERT_TRUE(strman_ends_with("abc", ""));
}

TEST(ends_with, both_empty)
{	ASSERT_TRUE(strman_ends_with("", ""));
}