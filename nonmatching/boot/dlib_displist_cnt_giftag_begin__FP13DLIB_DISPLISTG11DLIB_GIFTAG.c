/* dlib_displist_cnt_giftag_begin__FP13DLIB_DISPLISTG11DLIB_GIFTAG 0x01E93D30
 * (14 November 2026).
 * Measured pinned: 14 differing words; first difference at +0x0.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
typedef struct {
    unsigned int w[4];
} DLIB_GIFTAG __attribute__((aligned(16)));

typedef struct {
    char pad0[4];
    DLIB_GIFTAG *cur;
    char pad8[4];
    DLIB_GIFTAG *tag;
} DLIB_DISPLIST;

void dlib_displist_cnt_giftag_begin__FP13DLIB_DISPLISTG11DLIB_GIFTAG(DLIB_DISPLIST *d, DLIB_GIFTAG tag) {
    d->tag = d->cur;
    *d->cur = tag;
    d->cur++;
}
