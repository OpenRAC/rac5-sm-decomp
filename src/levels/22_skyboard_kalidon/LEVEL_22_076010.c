/* LEVEL_22:0x076010 -- placement copy of LEVEL_01_084268.c: resets the draw state, submits every entry of the global table and restores the clamp mode. */
struct Entry {
    int a;
    int b;
    int c;
    float f;
};

typedef struct DbDlist {
    char pad00[0x54];
    void *list;
} DbDlist;

extern unsigned int D_001555AC;
extern struct Entry D_001909C0[];
extern DbDlist db_dlist;
extern void func_090B68(int a);
extern void func_090720(int a, int b);
extern void func_090A78(int a);
extern void func_076998(int a, int b, int c, float f);
extern void dlib_displist_set_tex_clamp(void *d, int a, int b) __asm__("dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1");

void func_076010(void)
{
    unsigned int i;

    func_090B68(0);
    func_090720(1, 2);
    func_090A78(0);
    for (i = 0; i < D_001555AC; i++) {
        func_076998(D_001909C0[i].a, D_001909C0[i].b, D_001909C0[i].c, D_001909C0[i].f);
    }
    func_090A78(1);
    dlib_displist_set_tex_clamp(db_dlist.list, 0, 0);
}
