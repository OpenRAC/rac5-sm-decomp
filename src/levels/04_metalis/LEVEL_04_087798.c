/* LEVEL_04:0x087798 -- placement copy of LEVEL_01_084268.c: resets the draw state, submits every entry of the global table and restores the clamp mode. */
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

extern unsigned int D_0020F6EC;
extern struct Entry D_002555D0[];
extern DbDlist db_dlist;
extern void func_0A7768(int a);
extern void func_0A7320(int a, int b);
extern void func_0A7678(int a);
extern void func_088818(int a, int b, int c, float f);
extern void dlib_displist_set_tex_clamp(void *d, int a, int b) __asm__("dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1");

void func_087798(void)
{
    unsigned int i;

    func_0A7768(0);
    func_0A7320(1, 2);
    func_0A7678(0);
    for (i = 0; i < D_0020F6EC; i++) {
        func_088818(D_002555D0[i].a, D_002555D0[i].b, D_002555D0[i].c, D_002555D0[i].f);
    }
    func_0A7678(1);
    dlib_displist_set_tex_clamp(db_dlist.list, 0, 0);
}
