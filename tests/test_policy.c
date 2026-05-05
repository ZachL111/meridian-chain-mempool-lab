#include "policy.h"
#include <assert.h>
#include <string.h>

int main(void) {
    Signal signal_case_1 = {62, 93, 18, 18, 10};
    assert(score_signal(signal_case_1) == 129);
    assert(strcmp(classify_signal(signal_case_1), "review") == 0);
    Signal signal_case_2 = {75, 92, 21, 13, 5};
    assert(score_signal(signal_case_2) == 158);
    assert(strcmp(classify_signal(signal_case_2), "review") == 0);
    Signal signal_case_3 = {93, 91, 8, 12, 5};
    assert(score_signal(signal_case_3) == 223);
    assert(strcmp(classify_signal(signal_case_3), "accept") == 0);
    return 0;
}
