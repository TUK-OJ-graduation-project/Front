#include <tcframe/spec.hpp>
using namespace tcframe;

class ProblemSpec : public BaseProblemSpec {
protected:
    int A, B;
    int sum, sub, mul, div, mod;

    void InputFormat() {
        LINE(A, B);
    }

    void OutputFormat() {
        LINE(sum);
        LINE(sub);
        LINE(mul);
        LINE(div);
        LINE(mod);
    }

    void GradingConfig() {
        TimeLimit(1);
        MemoryLimit(256);
    }

    void Constraints() {
        CONS(1 <= A);
        CONS(1 <= B && B <= 10000);
    }
};

class TestSpec : public BaseTestSpec<ProblemSpec> {
protected:
    void SampleTestCase1() {
        Input({
            "7 3"
        });
        Output({
            "10",
            "4",
            "21",
            "2",
            "1"
        });
    }

    void TestCases() {
        CASE(A = 11, B = 1);
        CASE(A = 31, B = 2);
        CASE(A = 3, B = 3);
        CASE(A = rnd.nextInt(1, 100000), B = rnd.nextInt(1, 10000));
    }
};