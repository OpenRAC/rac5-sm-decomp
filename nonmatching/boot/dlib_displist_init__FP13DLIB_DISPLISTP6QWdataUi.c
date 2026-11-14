/* dlib_displist_init__FP13DLIB_DISPLISTP6QWdataUi 0x01E939C0 (14 November
 * 2026).
 * Measured pinned: 30 differing words; first difference at +0x0.
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
    unsigned int count;
    int f18;
    unsigned int f1C;
    int pad20;
    DLIB_GIFTAG *end;
} DLIB_DISPLIST;

void dlib_displist_init__FP13DLIB_DISPLISTP6QWdataUi(DLIB_DISPLIST *d, DLIB_GIFTAG *data, unsigned int count) {
    DLIB_GIFTAG *p;
    DLIB_GIFTAG t;

    if (count == 0) {
        return;
    }
    d->base = data;
    d->count = count;
    d->end = data + count;
    d->f18 = 0;
    d->f1C = count;
    d->cur = data;
    d->fC = 0;
    d->f10 = 0;
    p = d->cur;
    d->tag = p;
    t.w[0] = 0;
    t.w[1] = 0;
    t.w[2] = 0;
    t.w[3] = 0xF0000000;
    *p = t;
    d->cur++;
}
