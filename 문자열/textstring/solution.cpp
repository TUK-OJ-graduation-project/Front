#include <iostream>
using namespace std;

int main()
{
    char s1[1000];    // 최대 1000길이의 문자를 입력받음.
    int n;

    scanf("%s", s1);     // 표준 입력을 받아서 배열 형태의 문자열에 저장
    scanf("%d", &n);
    printf("%c\n", s1[n-1]);  // 문자열의 내용을 출력

    return 0;
}