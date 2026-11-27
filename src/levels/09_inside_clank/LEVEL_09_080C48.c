/* LEVEL_09:0x080C48 -- placement copy of LEVEL_01_084268.c: resets the draw state, submits every entry of the global table and restores the clamp mode. */
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

extern unsigned int D_001E002C;
extern struct Entry D_00222540[];
extern DbDlist db_dlist;
extern void func_09F808(int a);
extern void func_09F3C0(int a, int b);
extern void func_09F718(int a);
extern void func_081F38(int a, int b, int c, float f);
extern void dlib_displist_set_tex_clamp(void *d, int a, int b) __asm__("dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1");

void func_080C48(void)
{
    unsigned int i;

    func_09F808(0);
    func_09F3C0(1, 2);
    func_09F718(0);
    for (i = 0; i < D_001E002C; i++) {
        func_081F38(D_00222540[i].a, D_00222540[i].b, D_00222540[i].c, D_00222540[i].f);
    }
    func_09F718(1);
    dlib_displist_set_tex_clamp(db_dlist.list, 0, 0);
}
