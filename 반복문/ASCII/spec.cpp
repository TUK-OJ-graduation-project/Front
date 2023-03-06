
#include <tcframe/spec.hpp>
using namespace tcframe;

class ProblemSpec : public BaseProblemSpec {
protected:
    string S;
    int num;

    void InputFormat() {
        LINE(S);
    }

    void OutputFormat() {
        LINE(num);
    }

    void GradingConfig() {
        TimeLimit(1);
        MemoryLimit(256);
    }

    void Constraints() {
         //CONS("A" <= S && S <= "Z" && "a" <= S && S <= "z");
  }
};

class TestSpec : public BaseTestSpec<ProblemSpec> {
protected:
    void SampleTestCase1() {
        Input({
            "A"
        });
        Output({
            "65"
        });
    }

    void TestCases() {
        CASE(S = {"G"});
        CASE(S = {"E"});
        CASE(S = {"D"});
        CASE(S = {"W"});
    }
};