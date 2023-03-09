#include <tcframe/spec.hpp>
using namespace tcframe;

class ProblemSpec : public BaseProblemSpec {
protected:
    int A, B, C;
    int mod;

    void InputFormat() {
        LINE(A, B, C);
    }

    void OutputFormat() {
        LINE(mod);
    }

    void GradingConfig() {
        TimeLimit(1);
        MemoryLimit(256);
    }

    void Constraints() {
        CONS(2 <= A && A <= 10000);
        CONS(2 <= B && B <= 10000);
        CONS(2 <= C && C <= 10000);
    }
};

class TestSpec : public BaseTestSpec<ProblemSpec> {
protected:
    void SampleTestCase1() {
        Input({
            "5 8 4"
        });
        Output({
            "1",
            "1",
            "0",
            "0"
        });
    }

    void TestCases() {
        CASE(A = 3, B = 100, C = 7);
        CASE(A = 2, B = 55, C = 77);
        CASE(A = 7, B = 80, C = 5);
        CASE(A = 10, B = 9, C = 13);
        CASE(A = rnd.nextInt(2, 100000), B = rnd.nextInt(2, 10000), C = rnd.nextInt(2, 10000));
    }
};