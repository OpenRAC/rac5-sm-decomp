/* dlib_displist_clear__FP13DLIB_DISPLIST 0x01E93C88 (14 November 2026).
 * Measured pinned: 22 differing words; first difference at +0x4.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
typedef struct {
    unsigned int w[4];
} DLIB_GIFTAG;

typedef struct {
    DLIB_GIFTAG *base;
    DLIB_GIFTAG *cur;
    DLIB_GIFTAG *tag;
    int fC;
    int f10;
    int count;
    int pad18[3];
    DLIB_GIFTAG *end;
} DLIB_DISPLIST;

void dlib_displist_clear__FP13DLIB_DISPLIST(DLIB_DISPLIST *d) {
    DLIB_GIFTAG *base = d->base;
    DLIB_GIFTAG t;

    d->fC = 0;
    d->cur = base;
    d->end = base + d->count;
    d->f10 = 0;
    d->tag = base;
    t.w[0] = 0;
    t.w[1] = 0;
    t.w[2] = 0;
    t.w[3] = 0xF0000000;
    *base = t;
    d->cur++;
}
