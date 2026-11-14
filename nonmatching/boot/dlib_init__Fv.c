/* dlib_init__Fv 0x01E93A30 (14 November 2026).
 * Measured pinned: 19 differing words; first difference at +0x0.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
typedef struct {
    unsigned int w[4];
} DLIB_GIFTAG;

extern DLIB_GIFTAG g_cntTag;

void dlib_init__Fv(void) {
    DLIB_GIFTAG t;

    t.w[0] = 0x10000001;
    t.w[1] = 0;
    t.w[2] = 0;
    t.w[3] = 0;
    g_cntTag = t;
}
