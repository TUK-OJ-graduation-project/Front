#include <tcframe/spec.hpp>
using namespace tcframe;

class ProblemSpec : public BaseProblemSpec {
protected:
    int num;
     char result;

    void InputFormat() {
        LINE(num);
    }

    void OutputFormat() {
        LINE(result);
    }

    void GradingConfig() {
        TimeLimit(2);
        MemoryLimit(128);
    }

    void Constraints() {
        CONS(1 <= num && num <= 100);
    }
};

class TestSpec : public BaseTestSpec<ProblemSpec> {
protected:
    void SampleTestCase1() {
        Input({
            "3"
        });
        Output({
            "ABB"
        });
    }

    void TestCases() {
        CASE(num=1);
        CASE(num=2);
        CASE(num=6);
        CASE(num=rnd.nextInt(1, 100));
    }
};