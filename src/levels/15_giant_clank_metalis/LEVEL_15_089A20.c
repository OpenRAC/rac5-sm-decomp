/* LEVEL_15:0x089A20 -- placement copy of FRONTEND_00BDA8.c: programs the GS scissor rectangle from a screen-space box transformed by the active projection. */
typedef unsigned long u64;
typedef struct {
    unsigned int w[4];
} DLIB_GIFTAG;

extern char db_dlist[];
extern DLIB_GIFTAG g_cntTag[];
extern int g_AspectRatioID;
extern float *D_00150D88;
extern float *D_00150D70;
extern float *D_00150D74;
extern char D_00150D30[];
extern char D_00150CF0[];

extern void *memset(void *p, int c, unsigned int n);
extern void dlib_displist_direct_begin__FP13DLIB_DISPLIST(int *);
extern void dlib_displist_direct_end__FP13DLIB_DISPLIST(int *);
extern void dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(int *, u64, u64);
extern void func_0EADC0(float *out, float *m, float *v);
extern u64 func_13EF78(float f);

void func_089A20(unsigned short a, unsigned short b, unsigned short c, unsigned short d)
{
    float x0 = a;
    float y0 = b;
    float x1 = c;
    float y1 = d;
    float *vp;
    float vx, vy;
    int *list;
    unsigned int *q;
    float *m;
    float v0[4];
    float v1[4];
    float o0[4];
    float o1[4];
    float ox;
    float oy;
    u64 s0, s1, s2, s3;
    u64 v;

    list = *(int **)(db_dlist + 0x54);
    vp = D_00150D88;
    vx = vp[0];
    vy = vp[1];
    *(DLIB_GIFTAG *)list[2] = g_cntTag[0];
    q = (unsigned int *)list[1];
    x0 += vx;
    x1 += vx;
    y0 += vy;
    y1 += vy;
    q[0] = 0;
    q[1] = 0;
    q[2] = 0;
    q[3] = 0x13000000;
    list[1] += 0x10;
    *(unsigned short *)list[2] = 1;
    list[2] = list[1];
    list[1] += 0x10;
    if (c == 0x3FF && d == c) {
        dlib_displist_direct_begin__FP13DLIB_DISPLIST(list);
        dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(list, 0x1A0000002000000, 0x40);
        dlib_displist_direct_end__FP13DLIB_DISPLIST(list);
        return;
    }
    m = g_AspectRatioID == 0 ? D_00150D70 : D_00150D74;
    memset(v0, 0, 0x10);
    v0[0] = x0;
    v0[1] = y0;
    memset(v1, 0, 0x10);
    v1[0] = x1;
    v1[1] = y1;
    func_0EADC0(o0, m, v0);
    func_0EADC0(o1, m, v1);
    ox = m[0x30 / 4] + -1792.0f;
    if ((char *)m == D_00150D30 || (char *)m == D_00150CF0)
        oy = m[0x34 / 4] + -1824.0f;
    else
        oy = m[0x34 / 4] + -1840.0f;
    s3 = func_13EF78(o1[0] + ox);
    s2 = func_13EF78(o0[0] + ox);
    s1 = func_13EF78(o0[1] + oy);
    s0 = func_13EF78(o1[1] + oy);
    dlib_displist_direct_begin__FP13DLIB_DISPLIST(list);
    v = s2;
    v |= s3 << 16;
    v |= s1 << 32;
    v |= s0 << 48;
    dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(list, v, 0x40);
    dlib_displist_direct_end__FP13DLIB_DISPLIST(list);
}
