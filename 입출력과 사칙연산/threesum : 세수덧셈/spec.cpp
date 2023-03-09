#include <tcframe/spec.hpp>
using namespace tcframe;

class ProblemSpec : public BaseProblemSpec {
protected:
    unsigned long long A, B, C;
    unsigned long long sum;

    void InputFormat() {
        LINE(A, B, C);
    }

    void OutputFormat() {
        LINE(sum);
    }

    void GradingConfig() {
        TimeLimit(1);
        MemoryLimit(512);
    }

    void Constraints() {
        CONS(1 <= A && A <= 100000000000);
        CONS(1 <= B && B <= 100000000000);
        CONS(1 <= C && C <= 100000000000);
    }
};

class TestSpec : public BaseTestSpec<ProblemSpec> {
protected:
    void SampleTestCase1() {
        Input({
            "77 77 7777"
        });
        Output({
            "7931"
        });
    }

    void TestCases() {
        CASE(A = 1, B = 10, C = 1000);
        CASE(A = 1000, B = 1000, C = 999);
        CASE(A = 42, B = 100, C = 7070);
        CASE(A = rnd.nextInt(1, 100000000000), B = rnd.nextInt(1, 100000000000), C = rnd.nextInt(1, 100000000000));
    }
};