
#include <tcframe/spec.hpp>
using namespace tcframe;

class ProblemSpec : public BaseProblemSpec {
protected:
    int A, B;
    int sub;

    void InputFormat() {
        LINE(A, B);
    }

    void OutputFormat() {
        LINE(sub);
    }

    void GradingConfig() {
        TimeLimit(2);
        MemoryLimit(128);
    }

    void Constraints() {
        CONS(0 <= A);
        CONS(0 <= B && B <= 10);
    }
};

class TestSpec : public BaseTestSpec<ProblemSpec> {
protected:
    void SampleTestCase1() {
        Input({
            "3 2"
        });
        Output({
            "1"
        });
    }

    void TestCases() {
        CASE(A = 55, B = 2);
        CASE(A = 99, B = 10);
        CASE(A = 42, B = 6);
        CASE(A = rnd.nextInt(0, 1000), B = rnd.nextInt(0, 10));
    }
};