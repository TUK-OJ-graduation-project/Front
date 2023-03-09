
#include <tcframe/spec.hpp>
using namespace tcframe;

class ProblemSpec : public BaseProblemSpec {
protected:
    int N;
    string result;

    void InputFormat() {
        LINE(N);
    }

    void OutputFormat() {
        LINE(result);
    }

    void GradingConfig() {
        TimeLimit(1);
        MemoryLimit(1024);
    }

    void Constraints() {
        CONS(4 <= N && N <= 1000);
  }
};

class TestSpec : public BaseTestSpec<ProblemSpec> {
protected:
    void SampleTestCase1() {
        Input({
            "20"
        });
        Output({
            "long long long long int"
        });
    }

    void TestCases() {
        CASE(N = rnd.nextInt(4, 10));
        CASE(N = rnd.nextInt(4, 100));
        CASE(N = rnd.nextInt(4, 100));
        CASE(N = rnd.nextInt(4, 1000));
    }
};