/* SYSTEM_SetBloomWrite__Fb 0x01E85910 (14 November 2026).
 * Measured pinned: 2 differing words; first difference at 0x90.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
typedef struct {
    unsigned char pad[4];
    unsigned char *data;
    unsigned char *tag;
} tDisplayList;

typedef struct {
    unsigned char b[16];
} tTag;

extern tDisplayList *display_list_current;
extern tTag g_cntTag;
extern void dlib_displist_direct_begin__FP13DLIB_DISPLIST(tDisplayList *d);
extern void dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(tDisplayList *d, unsigned long long value, unsigned long reg);
extern void dlib_displist_direct_end__FP13DLIB_DISPLIST(tDisplayList *d);

void SYSTEM_SetBloomWrite__Fb(int enable) {
    tDisplayList *d = display_list_current;
    unsigned int *w;

    *(tTag *)d->tag = g_cntTag;
    w = (unsigned int *)d->data;
    w[3] = 0x13000000;
    w[1] = 0;
    w[2] = 0;
    w[0] = 0;
    d->data = d->data + 0x10;
    *(short *)d->tag = 1;
    d->tag = d->data;
    d->data = d->data + 0x10;
    dlib_displist_direct_begin__FP13DLIB_DISPLIST(d);
    dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(d, enable ? 1 : 0, 0x4A);
    dlib_displist_direct_end__FP13DLIB_DISPLIST(d);
}
