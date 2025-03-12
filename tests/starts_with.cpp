#include <gtest/gtest.h>
#include <strman.hpp>

TEST(starts_with, correct_input)
{	ASSERT_TRUE(strman_starts_with("abcdef", "abc"));
}

TEST(starts_with, incorrect_input)
{	ASSERT_FALSE(strman_starts_with("abcdef", "ghi"));
}

TEST(starts_with, same_length)
{	ASSERT_TRUE(strman_starts_with("abc", "abc"));
}

TEST(starts_with, longer_input)
{	ASSERT_FALSE(strman_starts_with("abc", "abcdef"));
}

TEST(starts_with, empty_input)
{	ASSERT_TRUE(strman_starts_with("abc", ""));
}

TEST(starts_with, both_empty)
{	ASSERT_TRUE(strman_starts_with("", ""));
}