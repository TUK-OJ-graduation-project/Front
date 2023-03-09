
#include <tcframe/spec.hpp>
using namespace tcframe;

class ProblemSpec : public BaseProblemSpec {
protected:
    int A, B;
    int num;

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
        CONS(0 <= B && B <= 10);
    }
};

class TestSpec : public BaseTestSpec<ProblemSpec> {
protected:
    void SampleTestCase1() {
        Input({
            "5 2"
        });
        Output({
            "10"
        });
    }

    void TestCases() {
        CASE(A = 5, B = 2);
        CASE(A = 13, B = 10);
        CASE(A = 62, B = 6);
        CASE(A = rnd.nextInt(0, 1000), B = rnd.nextInt(0, 10));
    }
};