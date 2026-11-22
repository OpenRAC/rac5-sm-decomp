/* USA LEVEL_01.REL:0x099810, 292-byte candidate (21 November 2026).
 * Measured pinned: 1 differing words; first difference at 0xAC.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef unsigned int QW __attribute__((mode(TI)));
typedef struct {
    unsigned int w[4];
} DLIB_GIFTAG;

struct Ctx {
    int pad_00;
    unsigned int *p_04;
    DLIB_GIFTAG *p_08;
};

struct DbDlist {
    char pad_00[0x54];
    struct Ctx *p_54;
};

extern struct DbDlist db_dlist;
extern DLIB_GIFTAG g_cntTag;
extern DLIB_GIFTAG D_002109E8;
extern char D_00217DC0[];

extern void dlib_displist_direct_begin__FP13DLIB_DISPLIST(struct Ctx *);
extern void dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(struct Ctx *, unsigned long, unsigned long);
extern void dlib_displist_direct_end__FP13DLIB_DISPLIST(struct Ctx *);
extern void func_0A2110(int a, int b);
extern void func_0A1FF0(int a, int b, int c);
extern void func_0A2468(int a);
extern void func_0A0BD0(int a, void *p);

void func_099810(void)
{
    struct Ctx *c;
    DLIB_GIFTAG tag;

    c = db_dlist.p_54;
    dlib_displist_direct_begin__FP13DLIB_DISPLIST(c);
    dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(c, 0x48, 0x42);
    dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(c, 5, 8);
    dlib_displist_direct_end__FP13DLIB_DISPLIST(c);
    tag = D_002109E8;
    *c->p_08 = g_cntTag;
    *(QW *)c->p_04 = 0;
    c->p_04[3] = 0x6C010015;
    *(QW *)(c->p_04 + 4) = *(QW *)&tag;
    *(unsigned short *)c->p_08 = 2;
    c->p_04 = c->p_04 + 8;
    c->p_08 = (DLIB_GIFTAG *)c->p_04;
    c->p_04 = c->p_04 + 4;
    func_0A2110(1, 2);
    func_0A1FF0(1, 0, 6);
    func_0A2468(0);
    func_0A0BD0(2, D_00217DC0);
}
