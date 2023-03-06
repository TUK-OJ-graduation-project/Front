
#include <tcframe/spec.hpp>
#include <bits/stdc++.h> 

using namespace std;
using namespace tcframe;

class ProblemSpec : public BaseProblemSpec {
protected:
    int A;
    int sum;

    void InputFormat() {
        LINE(A);
    }

    void OutputFormat() {
        LINE(sum);
    }

    void GradingConfig() {
        TimeLimit(1);
        MemoryLimit(128);
    }

    void Constraints() {
        CONS(1 <= A && A <= 10000);
    }
};

class TestSpec : public BaseTestSpec<ProblemSpec> {
protected:
    void SampleTestCase1() {
        Input({
            "5"
        });
        Output({
            "15"
        });
    }

    void TestCases() {   
        CASE(A = rnd.nextInt(1, 10));
        CASE(A = rnd.nextInt(1, 100));
        CASE(A = rnd.nextInt(1, 1000));
        CASE(A = rnd.nextInt(1, 10000));
    }
};
