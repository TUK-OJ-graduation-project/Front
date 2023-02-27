#include <tcframe/spec.hpp>
using namespace tcframe;

class ProblemSpec : public BaseProblemSpec {
protected:
    string a;
    char result;

    void InputFormat() {
        LINE(a);
    }

    void OutputFormat() {
        LINE(result);
    }

    void GradingConfig() {
        TimeLimit(1);
        MemoryLimit(256);
    }

    void Constraints() {
       
    }
};

class TestSpec : public BaseTestSpec<ProblemSpec> {
protected:
    void SampleTestCase1() {
        Input({
            "hi"
        });
        Output({
            "hi??!"
        });
    }

    void TestCases() {
        CASE(a = "bye");
        CASE(a = "good");
        CASE(a = "happy");
        CASE(a = "today");
    }
};