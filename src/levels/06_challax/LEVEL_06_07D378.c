/* LEVEL_06:0x07D378 -- placement copy of LEVEL_01_084268.c: resets the draw state, submits every entry of the global table and restores the clamp mode. */
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

extern unsigned int D_001E512C;
extern struct Entry D_00227B40[];
extern DbDlist db_dlist;
extern void func_09CD28(int a);
extern void func_09C8E0(int a, int b);
extern void func_09CC38(int a);
extern void func_07E3F8(int a, int b, int c, float f);
extern void dlib_displist_set_tex_clamp(void *d, int a, int b) __asm__("dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1");

void func_07D378(void)
{
    unsigned int i;

    func_09CD28(0);
    func_09C8E0(1, 2);
    func_09CC38(0);
    for (i = 0; i < D_001E512C; i++) {
        func_07E3F8(D_00227B40[i].a, D_00227B40[i].b, D_00227B40[i].c, D_00227B40[i].f);
    }
    func_09CC38(1);
    dlib_displist_set_tex_clamp(db_dlist.list, 0, 0);
}
