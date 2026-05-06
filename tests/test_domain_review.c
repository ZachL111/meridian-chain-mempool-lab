#include "domain_review.h"
#include <assert.h>
#include <string.h>

int main(void) {
    DomainReview item = {72, 45, 27, 80};
    assert(domain_review_score(item) == 188);
    assert(strcmp(domain_review_lane(item), "ship") == 0);
    return 0;
}
