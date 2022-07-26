#include "unity.h"
#include "example/example.h"

void setUp(void) {}

void tearDown(void) {}

void exampleTest(void) {
    TEST_ASSERT_TRUE(alwaysTrue());
}

int main() {
    UNITY_BEGIN();

    RUN_TEST(exampleTest);

    return UNITY_END();
}

