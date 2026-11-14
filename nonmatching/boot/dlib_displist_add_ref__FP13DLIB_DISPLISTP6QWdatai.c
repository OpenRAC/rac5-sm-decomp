/* dlib_displist_add_ref__FP13DLIB_DISPLISTP6QWdatai 0x01E94318 (14 November
 * 2026).
 * Measured pinned: 13 differing words; first difference at +0x4.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
typedef unsigned int QW __attribute__((mode(TI)));

typedef union {
    QW q;
    unsigned int w[4];
} QWU;

typedef struct {
    char pad0[4];
    unsigned char *cur;
    QW *tag;
} DLIB_DISPLIST;

void dlib_displist_add_ref__FP13DLIB_DISPLISTP6QWdatai(DLIB_DISPLIST *d, void *data, int count) {
    QWU u;

    u.w[3] = 0;
    u.w[2] = 0;
    u.w[1] = (unsigned int)data;
    u.w[0] = count | 0x30000000;
    *d->tag = u.q;
    d->tag = (QW *)d->cur;
    d->cur += 0x10;
}
