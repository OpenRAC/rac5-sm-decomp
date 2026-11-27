/* LEVEL_03:0x0840E8 -- placement copy of LEVEL_01_084268.c: resets the draw state, submits every entry of the global table and restores the clamp mode. */
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

extern unsigned int D_0020E8AC;
extern struct Entry D_00255C40[];
extern DbDlist db_dlist;
extern void func_0A22D8(int a);
extern void func_0A1E90(int a, int b);
extern void func_0A21E8(int a);
extern void func_0853D8(int a, int b, int c, float f);
extern void dlib_displist_set_tex_clamp(void *d, int a, int b) __asm__("dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1");

void func_0840E8(void)
{
    unsigned int i;

    func_0A22D8(0);
    func_0A1E90(1, 2);
    func_0A21E8(0);
    for (i = 0; i < D_0020E8AC; i++) {
        func_0853D8(D_00255C40[i].a, D_00255C40[i].b, D_00255C40[i].c, D_00255C40[i].f);
    }
    func_0A21E8(1);
    dlib_displist_set_tex_clamp(db_dlist.list, 0, 0);
}
