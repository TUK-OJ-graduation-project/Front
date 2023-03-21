
#include <tcframe/spec.hpp>
using namespace tcframe;

class ProblemSpec : public BaseProblemSpec {
protected:
    string S, result;
    int n;

    void InputFormat() {
        LINE(S);
        LINE(n);
    }

    void OutputFormat() {
        LINE(result);
    }

    void GradingConfig() {
        TimeLimit(1);
        MemoryLimit(1024);
    }

    void Constraints() {
         CONS(0 <= sizeof(S) && sizeof(S) <= 1000);
  }
};

class TestSpec : public BaseTestSpec<ProblemSpec> {
protected:
    void SampleTestCase1() {
        Input({
            "Skima"
            "3"
        });
        Output({
            "i"
        });
    }

    void TestCases() {
        CASE(S = {"HIHELLO"}, n = 3);
        CASE(S = {"StrawBerry"}, n = 6);
        CASE(S = {"Driver"}, n = 2);
        CASE(S = {"Waffer"}, n = 1);
    }
};