/* LEVEL_24:0x07DDD8 -- placement copy of LEVEL_01_084268.c: resets the draw state, submits every entry of the global table and restores the clamp mode. */
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

extern unsigned int D_001C6EAC;
extern struct Entry D_00206CC0[];
extern DbDlist db_dlist;
extern void func_09BDD0(int a);
extern void func_09B988(int a, int b);
extern void func_09BCE0(int a);
extern void func_07E820(int a, int b, int c, float f);
extern void dlib_displist_set_tex_clamp(void *d, int a, int b) __asm__("dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1");

void func_07DDD8(void)
{
    unsigned int i;

    func_09BDD0(0);
    func_09B988(1, 2);
    func_09BCE0(0);
    for (i = 0; i < D_001C6EAC; i++) {
        func_07E820(D_00206CC0[i].a, D_00206CC0[i].b, D_00206CC0[i].c, D_00206CC0[i].f);
    }
    func_09BCE0(1);
    dlib_displist_set_tex_clamp(db_dlist.list, 0, 0);
}
