
#include <tcframe/spec.hpp>
using namespace tcframe;

class ProblemSpec : public BaseProblemSpec {
protected:
    int A, B;
    float num;

    void InputFormat() {
        LINE(A, B);
    }

    void OutputFormat() {
        LINE(num);
    }

    void GradingConfig() {
        TimeLimit(1);
        MemoryLimit(256);
    }

    void Constraints() {
        CONS(0 <= A);
        CONS(0 <= B && B <= 50);
    }
};

class TestSpec : public BaseTestSpec<ProblemSpec> {
protected:
    void SampleTestCase1() {
        Input({
            "1 3"
        });
        Output({
            "0.3333333333333333333333333333"
        });
    }

    void TestCases() {
        CASE(A = 55, B = 5);
        CASE(A = 99, B = 10);
        CASE(A = 124, B = 31);
        CASE(A = rnd.nextInt(0, 1000), B = rnd.nextInt(0, 50));
    }
};