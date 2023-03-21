
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
        MemoryLimit(128);
    }

    void Constraints() {
        //CONS(1 <= in.length() && in.length() <= 100000);
  }
};

class TestSpec : public BaseTestSpec<ProblemSpec> {
protected:
    void SampleTestCase1() {
        Input({
            "hellooooooooo"
        });
        Output({
            "13"
        });
    }

    void TestCases() {
        CASE(S = {"macbook"});
        CASE(S = {"wonderland"});
        CASE(S = {"everything"});
        CASE(S = {"somebody"});
    }
};