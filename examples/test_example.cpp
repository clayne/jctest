#define JC_TEST_IMPLEMENTATION
#include <jc_test.h>

TEST(MyTest, Multiplication) {
    ASSERT_EQ(4, 2 * 2);
}

TEST(MyTest, Division) {
    ASSERT_EQ(2, 4 / 2);
}

int main(int argc, char *argv[]) {
    jc_test_init(&argc, argv);
    // ... Do your test initialization
    return JC_TEST_RUN_ALL();
}
