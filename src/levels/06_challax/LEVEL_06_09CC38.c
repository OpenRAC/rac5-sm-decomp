/* LEVEL_06:0x09CC38 -- placement copy of FRONTEND_007830.c: appends a 16-byte tag and packet header, then queues a render-target word. */
struct Pk16 {
    char b[16];
};

struct Ctx {
    int pad_00;
    unsigned int *p_04;
    struct Pk16 *p_08;
};

struct DbDlist {
    char pad_00[0x54];
    struct Ctx *p_54;
};

struct Target {
    int f0;
    unsigned int f4;
};

extern struct DbDlist db_dlist;
extern struct Pk16 g_cntTag;
extern struct Target *g_pCurrentRenderTarget;
extern unsigned char D_0028BD81;
extern void dlib_displist_direct_begin__FP13DLIB_DISPLIST(struct Ctx *);
extern void dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(struct Ctx *, unsigned long, unsigned long);
extern void dlib_displist_direct_end__FP13DLIB_DISPLIST(struct Ctx *);

void func_09CC38(int flag)
{
    struct Ctx *c;
    struct Pk16 *src;
    unsigned int *w;
    unsigned int hdr;
    unsigned short one;

    c = db_dlist.p_54;
    D_0028BD81 = flag;
    src = &g_cntTag;
    hdr = 0x13000000;
    one = 1;
    *c->p_08 = *src;
    w = c->p_04;
    w[0] = 0;
    w[1] = 0;
    w[2] = 0;
    w[3] = hdr;
    c->p_04 = (unsigned int *)((char *)c->p_04 + 0x10);
    *(unsigned short *)c->p_08 = one;
    c->p_08 = (struct Pk16 *)c->p_04;
    c->p_04 = (unsigned int *)((char *)c->p_04 + 0x10);
    dlib_displist_direct_begin__FP13DLIB_DISPLIST(c);
    dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(c, (unsigned long)((g_pCurrentRenderTarget->f4 >> 13) | 0x1000000) | ((unsigned long)(unsigned char)(flag ^ 1) << 32), 0x4E);
    dlib_displist_direct_end__FP13DLIB_DISPLIST(c);
}
