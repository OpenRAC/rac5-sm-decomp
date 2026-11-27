/* LEVEL_05:0x081BC8 -- placement copy of LEVEL_01_084268.c: resets the draw state, submits every entry of the global table and restores the clamp mode. */
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

extern unsigned int D_001E55AC;
extern struct Entry D_00226C80[];
extern DbDlist db_dlist;
extern void func_0A0B18(int a);
extern void func_0A06D0(int a, int b);
extern void func_0A0A28(int a);
extern void func_082ED8(int a, int b, int c, float f);
extern void dlib_displist_set_tex_clamp(void *d, int a, int b) __asm__("dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1");

void func_081BC8(void)
{
    unsigned int i;

    func_0A0B18(0);
    func_0A06D0(1, 2);
    func_0A0A28(0);
    for (i = 0; i < D_001E55AC; i++) {
        func_082ED8(D_00226C80[i].a, D_00226C80[i].b, D_00226C80[i].c, D_00226C80[i].f);
    }
    func_0A0A28(1);
    dlib_displist_set_tex_clamp(db_dlist.list, 0, 0);
}
