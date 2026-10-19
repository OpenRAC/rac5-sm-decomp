/* SYSTEM_SetAlphaTestMode__FbUcUi  0x01E853A8, 288 bytes */
typedef struct { unsigned int w[4]; } DLIB_GIFTAG;

typedef struct {
    char pad0[4];
    unsigned int *cur;
    unsigned int *begin;
} DLIB_DISPLIST;

typedef struct {
    char pad[0x54];
    DLIB_DISPLIST *pDlist;
} tDbDlist;

typedef struct {
    unsigned char testEnable;   /* 0x00 */
    char pad01[3];
    unsigned int testMode;      /* 0x04 */
    unsigned char alphaEnable;  /* 0x08 */
    char pad09[3];
    unsigned int alphaRef;      /* 0x0C */
    unsigned char f10;          /* 0x10 */
    unsigned char f11;          /* 0x11 */
    unsigned char f12;          /* 0x12 */
} tSYSTEM_STATE;

extern tDbDlist db_dlist;       /* 0x01F78B70 */
extern DLIB_GIFTAG g_cntTag;    /* 0x01FD3360 */
extern tSYSTEM_STATE g_STATE;   /* 0x01F78BC8 */

extern void dlib_displist_direct_begin(DLIB_DISPLIST *dl);
extern void dlib_displist_direct_end(DLIB_DISPLIST *dl);
extern void dlib_displist_add_data_ul64(DLIB_DISPLIST *dl,
                                        unsigned long data,
                                        unsigned long reg);

void SYSTEM_SetAlphaTestMode__FbUcUi(int enable, int method, unsigned int ref) {
    DLIB_DISPLIST *dl;
    unsigned int *q;
    unsigned long v;

    g_STATE.alphaEnable = enable;
    g_STATE.alphaRef = ref;
    g_STATE.f10 = method;

    dl = db_dlist.pDlist;
    *(DLIB_GIFTAG *)dl->begin = g_cntTag;
    q = dl->cur;
    q[3] = 0x13000000;
    q[1] = 0;
    q[2] = 0;
    q[0] = 0;
    dl->cur += 4;
    *(unsigned short *)dl->begin = 1;
    dl->begin = dl->cur;
    dl->cur += 4;

    dlib_displist_direct_begin(dl);

    v = (unsigned long)g_STATE.alphaEnable;
    v |= (unsigned long)g_STATE.alphaRef << 1;
    v |= (unsigned long)g_STATE.f10 << 4;
    v |= (unsigned long)g_STATE.f12 << 14;

    dlib_displist_add_data_ul64(dl,
        (v | 0x10000)
            | (g_STATE.testEnable ? ((unsigned long)g_STATE.testMode << 17)
                                  : 0x20000),
        0x47);
    dlib_displist_direct_end(dl);
}
