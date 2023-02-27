
#include <tcframe/spec.hpp>
using namespace tcframe;

class ProblemSpec : public BaseProblemSpec {
protected:
    int A;
    int num;

    void InputFormat() {
        LINE(A);
    }

    void OutputFormat() {
        LINE(num);
    }

    void GradingConfig() {
        TimeLimit(1);
        MemoryLimit(128);
    }

    void Constraints() {
        CONS(1 <= A && A <= 9);
    }
};

class TestSpec : public BaseTestSpec<ProblemSpec> {
protected:
    void SampleTestCase1() {
        Input({
            "2"
        });
        Output({
            "2 * 1 = 2"
            "2 * 2 = 4"
            "2 * 3 = 6"
            "2 * 4 = 8"
            "2 * 5 = 10"
            "2 * 6 = 12"
            "2 * 7 = 14"
            "2 * 8 = 16"
            "2 * 9 = 18"
        });
    }

    void TestCases() {
        CASE(A = 3);
        CASE(A = 5);
        CASE(A = 7);
        CASE(A = rnd.nextInt(1, 9));
    }
};