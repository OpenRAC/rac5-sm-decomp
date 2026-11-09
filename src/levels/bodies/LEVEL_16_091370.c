/* LEVEL_16:0x091370 -- placement copy of FRONTEND_0074D8.c: stores two display-state values and emits the state registers into the display list. */
typedef unsigned int u32;
typedef unsigned long u64;
typedef struct {
    unsigned int w[4];
} DLIB_GIFTAG;
typedef struct {
    unsigned char b0;
    char pad1[3];
    int w4;
    unsigned char b8;
    char pad9[3];
    u32 wC;
    unsigned char b10;
    unsigned char b11;
    unsigned char b12;
} State;
typedef struct {
    char pad0[4];
    u32 w4;
    char pad8[8];
    int w10;
} Target;

extern State D_00256B40;
extern char db_dlist[];
extern DLIB_GIFTAG g_cntTag[];
extern Target *g_pCurrentRenderTarget;

extern void dlib_displist_direct_begin__FP13DLIB_DISPLIST(void *);
extern void dlib_displist_direct_end__FP13DLIB_DISPLIST(void *);
extern void dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(void *, u64, u64);

void func_091370(int a, int b)
{
    int *list;
    unsigned int *q;
    Target *rt;
    u64 v;
    u64 t;
    int sel;

    D_00256B40.b0 = a;
    list = *(int **)(db_dlist + 0x54);
    D_00256B40.w4 = b;
    *(DLIB_GIFTAG *)list[2] = g_cntTag[0];
    q = (unsigned int *)list[1];
    q[3] = 0x13000000;
    q[1] = 0;
    q[2] = 0;
    q[0] = 0;
    list[1] += 0x10;
    *(unsigned short *)list[2] = 1;
    list[2] = list[1];
    list[1] += 0x10;
    dlib_displist_direct_begin__FP13DLIB_DISPLIST(list);
    t = D_00256B40.b8 | ((u64)D_00256B40.wC << 1);
    t |= (u64)D_00256B40.b10 << 4;
    t |= (u64)D_00256B40.b12 << 14;
    v = t | 0x10000;
    if (D_00256B40.b0)
        v |= (u64)(u32)D_00256B40.w4 << 17;
    else
        v |= 0x20000;
    dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(list, v, 0x47);
    rt = g_pCurrentRenderTarget;
    sel = 2;
    if (rt->w10 == 0)
        sel = 0x31;
    if (D_00256B40.b0) {
        dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(
            list, (u64)(rt->w4 >> 13) | ((u64)sel << 24) | ((u64)(D_00256B40.b11 ^ 1) << 32), 0x4E);
    } else {
        dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(
            list, (u64)(rt->w4 >> 13) | ((u64)sel << 24) | ((u64)1 << 32), 0x4E);
    }
    dlib_displist_direct_end__FP13DLIB_DISPLIST(list);
}
